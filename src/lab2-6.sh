#!/bin/bash



if [ ! -d '$1' ]; then
	str="mkdir -m 777 $1"
	echo $str
	eval $str
	
	str="cd files"
	eval $str

	str="touch file1.txt file2.txt file3.txt file4.txt file5.txt"
	eval $str

	str="tar cvf files.tar *"
	eval $str

	str="mkdir -m 777 $1"
	eval $str

	str="mv files.tar $1/;cd $1"
	eval $str

	str="tar xvf files.tar"
	eval $str
fi



