#!/bin/bash

now=`date +%s`

function week
{
	week=$[($now-$1)/(60*60*24*7)]
	echo "Week number is $week"
}

function percent
{
	percent=$[($now-$1)/($2-$1)*100]
	echo "$percent% of the semester is spend"
}

if ["$1" = "-w"]; then 
	week $2
else
	if ["$1" = "-p"]; then 
		percent $2 $3
	else
		echo "Sorry, command not found !"
	fi
fi
