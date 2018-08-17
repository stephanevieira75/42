ldapsearch -LLLQ "uid=z*" cn | grep cn | sed 's/cn: //g' | sort -fr
