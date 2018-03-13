SELECT * from gestion_table_table 
INNER JOIN gestion_table_table_site 
ON (gestion_table_table.id = gestion_table_table_site.table_id)
INNER JOIN site_web_site
ON(site_web_site.id = gestion_table_table_site.site_id)
WHERE (gestion_table_table_site.table_id = 2);


SELECT * FROM galerie_photo_photo
INNER JOIN galerie_photo_theme
ON (galerie_photo_photo.theme_id=galerie_photo_theme.id)
WHERE(galerie_photo_theme.nom = 'perpignan')