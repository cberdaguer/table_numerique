from django.db import models

# Create your models here.
class Site(models.Model):
    site = models.URLField()
    name = models.CharField(max_length=200, default="")

    class Meta:
        app_label="site_web"
        verbose_name = "Site Web"       
    
    def __str__(self):        
        return self.name