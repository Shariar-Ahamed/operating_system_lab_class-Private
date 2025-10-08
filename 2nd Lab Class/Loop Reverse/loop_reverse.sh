read -p "Enter a number: " num

for ((i=0; i<=num; i++))
do 
    #for space
    for ((j=1; j<=i; j++))
    do
        echo -n " "
    done
    #for *
    for  ((j=i;j<num;j++))
    do
        echo -n "*"
    done
    echo ""   #New Line
done
