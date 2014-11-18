/*
 ============================================================================
 Name        : test1.c
 Author      : wsw
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc,char* argv[]) {
	puts("!!!Hello World,test1 !!!"); /* prints !!!Hello World!!! */
	int i=0;
	while(i<=argc){
		printf("argument %d:%s \n",i,argv[i]);
		i++;
	}
	return EXIT_SUCCESS;
}
