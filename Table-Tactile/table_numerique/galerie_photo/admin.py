from django.contrib import admin
from .models import Photo, Theme
from django.utils.text import Truncator


class PhotoAdmin(admin.ModelAdmin):
    list_display   = ('titre', 'photographe', 'apercu_contenu', 'photo', 'theme')
    list_filter    = ('photographe','theme',)    
    ordering       = ('theme', )
    search_fields  = ('titre', 'photographe')
    fields = ('titre', 'photographe', 'contenu', 'photo', 'theme')
    

    def apercu_contenu(self, photo):
        """ 
        Retourne les 40 premiers caractères du contenu de l'article, 
        suivi de points de suspension si le texte est plus long. 
        """
        return Truncator(photo.contenu).chars(40, truncate='...')

    # En-tête de notre colonne
        apercu_contenu.short_description = 'Aperçu du contenu'


admin.site.register(Theme)
admin.site.register(Photo, PhotoAdmin)