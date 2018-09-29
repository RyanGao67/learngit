#define BUFMAX 100

#include <std.io>
#include <string.h>


char buff[BUFMAX];
int count=0;
char getch(){
	return (count>0)?(buff[--count]):getchar();
}
void ungetch(char i){
	if (count<BUFMAX){
		buff[count++] = i;
	}else{
		print("stack over flow");
	}
}


/*
 char *buff;
 int count=0;
 char getch(){
 	return (count>0)?(buff[])	
 }

 
 
 
 */
