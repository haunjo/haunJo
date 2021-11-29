#!/bin/sh

echo "is linux fun? (yes/no)"

read answer

case $answer in
	yes|y|Y|Yes|YES)
		echo "yes";;
	[nN]*)
		echo "no";;
	*)
		echo "please answer yes or no"
		
		exit 1;;
esac
exit 0

		
