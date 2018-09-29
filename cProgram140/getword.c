#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "head.h"
int getword(char *word, int limit){
	char *w = word;
	int i = 0;
	int c = 0;
	while(isspace(c = getch())){
		
	}
	if(c!=EOF){
		*w++ = c;
	}
	if(!isalnum(c)){
		*w = '\0';
		return c;
	}
	for(;--limit>0;w++){
		if(!isalnum(*w = getch())){
			ungetch(*w);
			break;
		}
	}
	*w = '\0';
	return word[0];
}
int getword(char *, int);
int main(){
	char *te;
	int limit = 100;
	while(getword(te, limit)!=EOF){
		printf("%s", te);
	}
	return 0;
}
