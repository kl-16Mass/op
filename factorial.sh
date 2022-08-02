read -p "Enter n:" n
result=1
while [ $n -gt 1 ]    
do
result=`expr $result \* $n`
n=`expr $n - 1`
done
echo $result

