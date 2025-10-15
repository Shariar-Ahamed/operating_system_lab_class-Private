#While Loop
read -p "Number = " n
i=1
sum=0
while [ $i -le $n ] # -lt -gt -eq -le -ge
do 
    sum=$((sum+i))
    ((i++))
done
echo "Sum = $sum"
