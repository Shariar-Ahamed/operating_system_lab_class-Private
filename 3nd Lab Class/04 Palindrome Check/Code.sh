#While Loop
read -p "Number = " n
var1=$n
var2=0

while [ $n -ne 0 ] # -lt -gt -eq -le -ge
do 
    var2=$(((var2*10)+(n%10)))
    n=$((n/10))
done

if (( var1 == var2 ))
then 
    echo "Palindrome"
else
    echo "Not Palindrome"
fi
