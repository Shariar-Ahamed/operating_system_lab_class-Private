echo "Hello World";

#Comment "This is comment"
<<com
echo "Hello World"
echo "Hello World"
echo "Hello World"
echo "Hello World"
com


#Variable
num1=100
num2=15
sum=$((num1/num2))

echo $num1 and $num2 = $sum



#User input
read -p "Enter a 1st number = " num1 
read -p "Enter a 2nd number = " num2
read -p "Enter a 3rd number = " num3

sum=$((num1+num2+num3))

echo -n "Sum = $sum"

avg=$((sum/3))

echo " Avg = $avg"



#Conditional Operator
num1=10
num2=20

if (($num1>$num2))
then
    echo "Greater"
elif [ $num1 -lt $num2 ]
then
    echo "Less"
else
    echo "Equal"
fi


#Loop
for ((i=0; i<3;i++))
do 
    echo -n $i " "
done
<<com
Output:
0  1  2
com
