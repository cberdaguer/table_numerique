from django.urls import path
from . import views

urlpatterns = [
    path('ajouter_theme', views.ajouter_theme, name = 'ajouter_theme'),
    path('ajouter_photo', views.ajouter_photo, name = 'ajouter_photo'),
    
]