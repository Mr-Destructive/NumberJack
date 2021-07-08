#!/bin/bash

echo -e "\n NumberJack \n"
ch=0
while [ $ch -ne 3 ];
do
	echo  "  
		 PLAY : Hit 1 and enter.
		 HELP : Hit 2 and enter.
		 EXIT : Hit 3 and enter.
		 "

	read -p "Enter your choice : " ch
	if [ $ch -eq 1 ]; then
	x=0
	c=0
	p=0
	read -p "Enter any number between 0 and 9 : " n
	while [ $c -eq 0 ];
	do
		r=($(shuf -i 0-9 -n 10))
		echo "${r[@]} "
		for i in {1..10};
		do
			a[$i]=$i	
		done
		echo "${a[@]} "
		read -t 5 -p "Enter the index of your number : " x
		if [ ${r[$(($x))-1]} -eq $n ];then
			echo "Great"
			((p=p+1))
		else
			echo -e "\nGAME OVER\n"
			echo "You scored $p points"
			c=1
			break
		fi
		x=0
	done
	elif [ $ch -eq 2 ];then
		echo "HELP: INSTRUCTIONS TO PLAY THE GAME. "
		echo "1. Select any number between 0 and 9 (inclusive) i.e 0 and 9 are accepted."
		echo "2. Two list will appear in fron of you."
		echo "3. The upper will have a List of random shuffled numbers between 0 and 9."
		echo "4. See if you can find your choosen number in that list within 5 seconds."
		echo "5. Then you have to enter the index of that number indicated in the second list below."
		echo "6. The Game will continue till you are correct and enter the numbr on time i.e. before 5 sec."
	else
		break
fi
done
