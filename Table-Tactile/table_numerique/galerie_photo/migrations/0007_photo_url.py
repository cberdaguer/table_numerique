# Generated by Django 2.0.2 on 2018-03-06 11:06

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('galerie_photo', '0006_auto_20180306_1102'),
    ]

    operations = [
        migrations.AddField(
            model_name='photo',
            name='url',
            field=models.CharField(blank=True, default='', max_length=400),
        ),
    ]