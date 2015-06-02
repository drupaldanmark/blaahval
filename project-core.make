; Make file for Drupal core for Platform.sh
core = 7.x
api = 2

; Remove the field_ prefix from field names when creating new fields.
projects[drupal][patch][] = https://www.drupal.org/files/issues/1393094-remove-field-prefix-D7_1.patch
projects[drupal][patch][] = "https://drupal.org/files/issues/install-redirect-on-empty-database-728702-36.patch"
projects[drupal][version] = "7.37"
