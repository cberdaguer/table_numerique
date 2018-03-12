from django.db import models
from django.utils import timezone

class Photo(models.Model):
    titre = models.CharField(max_length=100)    
    photographe = models.CharField(max_length=42)
    contenu = models.TextField(blank=True, default="")
    url = models.CharField(max_length=400, blank=True, default="")
    photo = models.ImageField(upload_to="photos/")
    theme = models.ForeignKey('Theme',on_delete=models.CASCADE)
    date = models.DateTimeField(default=timezone.now)

   

    class Meta:
        verbose_name = "photo"
        #ordering = ['date']
    
    def __str__(self):        
        return self.titre
    

class Theme(models.Model):
    nom = models.CharField(max_length=40)
    details = models.CharField(max_length=200, blank=True, default="")

    def __str__(self):
        return self.nom


