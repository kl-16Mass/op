read -p "number" num
even=`expr $num % 2`
if [ $even == 0 ]
 then
  echo "$num is even"
  else
  echo "$num is odd"
  fi
