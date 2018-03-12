from django.shortcuts import render
from .models import Visite
from .forms import VisiteForm

# Create your views here.

def ajouter_visite_virtuelle(request):
    if request.method == "POST":
        form = VisiteForm(request.POST)
        if form.is_valid():
            visite = form.save(commit=False)
            visite.save()
            form = VisiteForm()
            return render(request, 'visite_virtuelle/ajouter_visite.html', {'form': form}) 
    else:
        form = VisiteForm()
    return render(request, 'visite_virtuelle/ajouter_visite.html', {'form': form})