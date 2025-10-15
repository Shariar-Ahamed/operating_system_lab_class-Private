#Simple loop
read -p "Enter a number: " n

for ((i=1; i<=n; i++))
do
    # if 5 or 7 multiplier → do skip
    if (( i % 5 == 0 || i % 7 == 0 ))
    then
        continue
    fi

    echo -n "$i "
done

echo ""  # newline end


# Use while loop
<<com
read -p "Enter a number: " n
i=1

while [ $i -le $n ]
do
    # if 5 or 7 multiplier, so do skip
    if (( i % 5 == 0 || i % 7 == 0 ))
    then
        ((i++))
        continue
    fi

    echo -n "$i "
    ((i++))
done

echo ""  # newline end
com
