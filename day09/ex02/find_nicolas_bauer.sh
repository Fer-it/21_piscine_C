cat $1 | grep -i "nicolas\tbauer" | grep - | awk '{print $(NF-1)}'