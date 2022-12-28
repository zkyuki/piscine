cat /etc/passwd | sed '1,9d' | awk 'NR %2 == 0' | rev
