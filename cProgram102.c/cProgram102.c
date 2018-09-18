#include <stdio.h>
#include <stdlib.h>
void strrcpy(char *, char *);
int main(){
	char s[10];
	strrcpy(s,"this");
	printf("%s\n", s);
	return 0;
}

void strrcpy(char *s, char *t){
	while((*s++=*t++)!='\0'){
		
	}
}
