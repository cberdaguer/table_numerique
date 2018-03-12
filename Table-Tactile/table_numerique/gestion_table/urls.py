from django.urls import path
from . import views

urlpatterns = [
    path('ajouter_table', views.ajouter_table, name = 'ajouter_table'),
        
]