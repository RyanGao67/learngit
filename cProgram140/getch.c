#include <stdio.h>
#include <stdlib.h>
#define BUFFSIZE 100

char buff[BUFFSIZE];
int i=0;
int getch(){
	return (i>0)?buff[--i]:getchar();		
}
void ungetch(int c){
	if(i<BUFFSIZE){
		buff[i++] = c;
	}else{
		printf("stack overflow");
	}
}
