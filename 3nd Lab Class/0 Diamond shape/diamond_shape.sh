read -p "Enter a number: " num

# Upper pyramid
for ((i=0; i<num; i++))
do
    # Print leading spaces
    for ((j=0; j<num-i-1; j++))
    do
        echo -n " "
    done

    # Print stars
    for ((j=0; j<2*i+1; j++))
    do
        echo -n "*"
    done

    # Move to next line
    echo ""
done

# Lower inverted pyramid
for ((i=num-2; i>=0; i--))
do
    # Print leading spaces
    for ((j=0; j<num-i-1; j++))
    do
        echo -n " "
    done

    # Print stars
    for ((j=0; j<2*i+1; j++))
    do
        echo -n "*"
    done

    echo ""
done
