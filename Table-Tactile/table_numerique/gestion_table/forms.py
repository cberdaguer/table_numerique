from django import forms
from .models import Table
from site_web.models import Site

class TableForm(forms.ModelForm):
    #sites = MultipleChoiceField(queryset=Site.objects.all())
    class Meta:
        model = Table
        fields = "__all__"