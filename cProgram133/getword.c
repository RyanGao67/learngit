#include <stdio.h>
#include <stdlib.h>
#include "head.h"

int getword(char *word,int limit){
	int a;
	char *w = word;
	while(isspace(c = getch())){
		
	}
	if(c!=EOF){
		*w++ = c;
	}
	if(!isalpha(c)){
		*w = '\0';
		return c;
	}
	for(;--lim>0;w++){
		if(!isalnum(*w=getch())){
			ungetch(*w);
			break;
		}
	}
	*w = '\0';
	return Word[0];

}
