from django.shortcuts import render
from .models import Site
from .forms import SiteForm

# Create your views here.

def ajouter_site(request):
    if request.method == "POST":
        form = SiteForm(request.POST)
        if form.is_valid():
            site = form.save(commit=False)
            site.save()
            form = SiteForm()
            return render(request, 'site_web/ajouter_siteh.tml', {'form': form}) 
    else:
        form = SiteForm()
    return render(request, 'site_web/ajouter_site.html', {'form': form})