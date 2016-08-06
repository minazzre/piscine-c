ldapsearch -b "dc=42,dc=us,dc=org" "uid=z*" | grep ^cn | sort -r
