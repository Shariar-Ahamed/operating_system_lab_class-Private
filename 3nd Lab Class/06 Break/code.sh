#Break continue

for ((i=1;i<=10;i++))
do 
    echo -n $i " "
    if [ $i -eq 5 ]
    then 
        break
    fi
done
