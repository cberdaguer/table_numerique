# Generated by Django 2.0.2 on 2018-03-10 16:35

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('gestion_table', '0005_auto_20180310_1633'),
    ]

    operations = [
        migrations.AlterField(
            model_name='table',
            name='galerie',
            field=models.ManyToManyField(to='galerie_photo.Theme'),
        ),
    ]