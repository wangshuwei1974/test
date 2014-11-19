/*
 ============================================================================
 Name        : test.c
 Author      : wsw
 Version     : v0.1
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style, git test
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(void) {
	int pid,status,s;
	s = 10;
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	puts("!!!Hello World and Git !!!"); /* prints !!!Hello World!!! */
	puts("add another line for test git");
	printf("hello world,parent pid=%d\n",getpid());
	pid = fork();
	printf("this is test for branch,the pid is :%d\n",getpid());
	if(pid == 0){
		printf("Now in children Progress... \n");
		printf("children pid =%d\n",getpid());
		printf("parent  pid =%d\n",getppid());
		printf("sleeping for %d second...\n",s);
		sleep(s);
//		execl("/bin/echo","","this is in son",NULL);
//		execl("/bin/ls","","/",NULL);
		execl("/root/workspace/test1/Debug/test1","geee","aa","bb","cc",NULL);
	}
	else{
		waitpid(pid,&status,0);
		printf("Children return\n");
	}
	printf("son should not run here");
	return EXIT_SUCCESS;
}
