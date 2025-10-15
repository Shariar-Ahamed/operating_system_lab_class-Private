#until
password="abc"

read -p "Enter a password: " pass

until [ $pass == $password ]
do 
    echo "Try again"
    read -p "password = " pass
done

echo "Right password"
