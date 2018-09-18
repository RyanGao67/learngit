#include <stdio.h>
#include <stdlib.h>

int strlen(char *);
int main(){
	printf("the lenght of haha is:%d\n",strlen("haha"));
	//char *a = NULL;
	//a = strcpy(a,"this");
	//printf("the length of this is %d\n", strlen(a));
	char b[] = "this is ";
	printf("the length of this is %d\n", strlen(b));

	return 0;
}

int strlen(char *str){
	int n = 0;
	while (*str!='\0'){
		n++;
		str++;
	}
	return n;
}
