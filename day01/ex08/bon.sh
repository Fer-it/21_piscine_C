ldapsearch -Q | grep -w sn | cut -d ' ' -f 2-10 | grep bon | wc -l | tr -d ' '