arg=$(ifconfig | grep "inet " | grep "broadcast "| cut -d ' ' -f 2)
if test -z "$arg"
then
echo "I am lost!"
else
echo "$arg"
fi