from django.contrib import admin
from .models import Table
from django.utils.text import Truncator


class TableAdmin(admin.ModelAdmin):
    list_display   = ('numero',)
    list_filter    = ('numero',)    
    ordering       = ('numero', )
    search_fields  = ('numero', )
    
    
    def apercu_contenu(self, photo):
        """ 
        Retourne les 40 premiers caractères du contenu de l'article, 
        suivi de points de suspension si le texte est plus long. 
        """
        return Truncator(photo.contenu).chars(40, truncate='...')

    # En-tête de notre colonne
        apercu_contenu.short_description = 'Aperçu du contenu'



admin.site.register(Table, TableAdmin)