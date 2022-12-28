ifconfig | grep "ether" | awk '{$1="";print}' | tr -d " "
