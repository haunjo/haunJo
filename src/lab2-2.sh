#!/bin/bash



if [ $2 == '+' ]; then
	add=`expr $1 + $3`
	echo "$add"
fi

if [ $2 == '-' ]; then
	minus=`expr $1 - $3`
	echo "$minus"
fi

