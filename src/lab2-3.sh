#!/bin/bash

hei=`expr $2 \* $2`
wei=$1

echo "$hei, $wei"

Bmi=`expr $1 \* 100000 / $hei`

echo "$Bmi"

if [ $Bmi -lt 185 ]; then
	echo "under weigth"

elif [ $Bmi -ge 230 ]; then
	echo "over weight"

else
	echo "normal weight"
fi
