from django import forms
from .models import Visite

class VisiteForm(forms.ModelForm):    
    class Meta:
        model = Visite
        fields = "__all__"
    
