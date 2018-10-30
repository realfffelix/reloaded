find . -type f -name '*.sh' -print | sed 's/.\{2\}$//' | tr -d './'
