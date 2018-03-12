from django.urls import path
from . import views

urlpatterns = [
    path('ajouter_visite', views.ajouter_visite_virtuelle, name = 'ajouter_visite'),
        
]