#problem-2 Multiple commend

read a b c

if ((a>b && a>c))
then 
    echo "A"
elif ((b>a && b>c))
then
    echo "B"
elif ((c>a && c>b))
then 
    echo "C"
else
    echo "Equal"
fi


<<com
Output:
2 5 1
B
com
