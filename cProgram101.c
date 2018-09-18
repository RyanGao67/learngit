#include <stdio.h>

int main(){
	char *a = "this is an array";
	printf("%c\n",*a);
	printf("%c\n",*(a+1));
	char b[] = "this is ";
	printf("%c\n", *(b+1));
	printf("%c\n", b[1]);
	return 0;
}
