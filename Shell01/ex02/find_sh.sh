find . -type f -name '*.sh' -print | sed 's/.[^.]*$//' | xargs -n1 basename
