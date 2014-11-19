#!/bin/bash
echo "$*:$# arguments"

while getopts ":a:bcde" opt
do 
	case $opt in
	a)
	echo "option a is set:${OPTARG};in position ${OPTIND}"
	;;
	b)
	echo "option b is set, in position ${OPTIND}"
	;;
	c)
	echo "option c is set, in position ${OPTIND}"
	;;
	"?")
	echo "unrecognized option $opt , error, exit"
	;;
	*)
	echo other options

	;;
	esac
done
echo "option index is :$OPTIND"

shift $(( $OPTIND - 1 ))
echo $0
echo $*

