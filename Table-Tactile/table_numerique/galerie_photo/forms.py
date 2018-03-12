from django import forms
from .models import Photo, Theme

class PhotoForm(forms.ModelForm):    
    class Meta:
        model = Photo
        fields = ('titre', 'photographe', 'contenu', 'photo', 'theme')
    

class ThemeForm(forms.ModelForm):
    class Meta:
        model = Theme
        fields = "__all__"