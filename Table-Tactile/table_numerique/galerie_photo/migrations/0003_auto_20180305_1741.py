# Generated by Django 2.0.2 on 2018-03-05 17:41

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('galerie_photo', '0002_auto_20180305_1734'),
    ]

    operations = [
        migrations.AlterField(
            model_name='photo',
            name='url',
            field=models.CharField(blank=True, max_length=400, null=True),
        ),
    ]
