from django.shortcuts import render
from django.shortcuts import redirect
from django.conf import settings


def acceuil(request):    
    return render(request, 'acceuil.html')

