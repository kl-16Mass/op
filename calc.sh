echo "Enter two numbers"
read -p "a: " a
read -p "b: " b
echo -e "Enter the choice\n1:add\n2:sub\n3:mul\n4:div\nchoice"
read choice
case $choice in
1)
c=`expr $a + $b`
;;
2)
c=`expr $a - $b`
;;
3)
c=`expr $a \* $b`
;;
4)
c=`expr $a / $b`
;;
*)
echo "Wrong choice"
exit
;;
esac
echo "Result: $c"

