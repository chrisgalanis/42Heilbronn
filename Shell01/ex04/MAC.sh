ifconfig | grep 'inet ' | awk '{print $2}' | sed 's/addr://'
