"""table_numerique URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/2.0/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  path('', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  path('', Home.as_view(), name='home')
Including another URLconf
    1. Import the include() function: from django.urls import include, path
    2. Add a URL to urlpatterns:  path('blog/', include('blog.urls'))
"""
from django.contrib import admin
from django.urls import path, include
from . import views
from django.conf.urls.static import static
from django.conf import settings



urlpatterns = [
    #path('admin/', admin.site.urls),
    #path('photos/', include('galerie_photo.urls')),
    #path('visites/', include('visite_virtuelle.urls')),
    #path('sites/', include('site_web.urls')),
    #path('', views.acceuil),
    path('', admin.site.urls),
]
urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)

admin.site.site_header = 'Tables numériques administration'
admin.site.site_title = 'Administration des tables numériques'
admin.site.index_title = 'Gestion des tables numériques'
