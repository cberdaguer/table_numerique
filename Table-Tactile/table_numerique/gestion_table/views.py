from django.shortcuts import render
from .models import Table
from .forms import TableForm

# Create your views here.

def ajouter_table(request):
    if request.method == "POST":
        form = TableForm(request.POST)
        if form.is_valid():
            table = form.save(commit=False)
            table.save()
            form = TableForm()
            return render(request, 'gestion_table/ajouter_table.tml', {'form': form}) 
    else:
        form = TableForm()
    return render(request, 'gestion_table/ajouter_table.tml', {'form': form})