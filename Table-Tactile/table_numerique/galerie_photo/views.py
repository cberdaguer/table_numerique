from django.shortcuts import render
from .models import Photo, Theme
from .forms import PhotoForm, ThemeForm
from django.utils import timezone
from django.conf import settings
from django.shortcuts import redirect


# Create your views here.

def ajouter_photo(request):
    if request.method == "POST":        
        form = PhotoForm(request.POST, request.FILES)
        if form.is_valid():            
            photo = form.save(commit=False)
            photo.photo = form.cleaned_data['photo']
            photo.url = photo.photo.path
            photo.date = timezone.now()            
            photo.save()            
            form = PhotoForm()
            return render(request, 'galerie_photo/ajouter_photo.html', {'form': form})
        print(form.errors)
    else:         
        form = PhotoForm()
    return render(request, 'galerie_photo/ajouter_photo.html', {'form': form})




def ajouter_theme(request):    
    if request.method == "POST":
        form = ThemeForm(request.POST)
        if form.is_valid():
            theme = form.save(commit=False)
            theme.save()
            form = ThemeForm()
            return render(request, 'galerie_photo/ajouter_theme.html', {'form': form}) 
    else:
        form = ThemeForm()
    return render(request, 'galerie_photo/ajouter_theme.html', {'form': form})

