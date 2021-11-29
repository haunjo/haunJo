#!/bin/sh

myFunction () {
	echo "Entered in function"
	return
}

echo "program started"

myFunction

hap(){
	str=`ls $1`
	echo $str
}

hap $1

exit 0
