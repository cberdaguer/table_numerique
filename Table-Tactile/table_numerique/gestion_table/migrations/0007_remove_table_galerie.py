# Generated by Django 2.0.2 on 2018-03-10 17:30

from django.db import migrations


class Migration(migrations.Migration):

    dependencies = [
        ('gestion_table', '0006_auto_20180310_1635'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='table',
            name='galerie',
        ),
    ]