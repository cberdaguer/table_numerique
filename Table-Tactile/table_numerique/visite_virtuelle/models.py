from django.db import models

# Create your models here.
class Visite(models.Model):
    visite = models.URLField()
    name = models.CharField(max_length=200, default="")

    class Meta:
        app_label = "visite_virtuelle"
        verbose_name = "Visites virtuelles"       
    
    def __str__(self):        
        return self.name