find . -type f -name "*.sh" -exec basename {} \; | rev | cut -d "." -f 2 | rev
