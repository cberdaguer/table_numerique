from django.db import models
from galerie_photo.models import Photo, Theme
from site_web.models import Site
from visite_virtuelle.models import Visite

# Create your models here.

class Table(models.Model):
    numero = models.IntegerField()
    galerie = models.ManyToManyField(Theme)    
    visite = models.ManyToManyField(Visite)        
    site = models.ManyToManyField(Site)
    
    

    class Meta:
        
        verbose_name = "table"
        #ordering = ['date']
    
    def __str__(self):        
        return str(self.numero)