from django.shortcuts import render
from django.shortcuts import redirect

def acceuil(request):
    return render(request, 'acceuil.html')

