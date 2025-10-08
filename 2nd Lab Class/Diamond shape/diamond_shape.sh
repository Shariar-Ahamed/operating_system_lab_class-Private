#                             Online Bash Shell.
#                 Code, Compile, Run and Debug Bash script online.
# Write your code in this editor and press "Run" button to execute it.


#Loop

read -p "Enter a number: " num

for ((i=0;i<num;i++))
do 
    #for space
    for ((j=0;j<(num-i-1);j++))
    do
        echo -n " "
    done
    #for *
    for ((j=0;j<=i;j++))
    do
        echo -n "*"
    done
    
    
        for ((j=0;j<i;j++))
    do
        echo -n "*"
    done
    
    
    echo ""   
done
