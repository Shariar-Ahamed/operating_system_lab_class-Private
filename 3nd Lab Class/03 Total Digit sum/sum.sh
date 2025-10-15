#Whule Loop
read -p "Number = " n
i=1
sum=0
while [ $n -ne 0 ] # -lt -gt -eq -le -ge
do 
    sum=$((sum+(n%10)))
    n=$((n/10))
done
echo "Sum = $sum"
