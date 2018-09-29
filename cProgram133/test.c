#include <stdio.h>

int main(){

	char * a  = "gaha";
	printf("%c\n", *a);
	printf("%c\n", a[1]);
	printf("%c\n", a++);
	printf("%c\n", *a);

	char b[10] = "qwert";
	char *m = b;
	char *n = a;
	printf("%c\n", n);
	printf("%c\n", *m);
	printf("%c\n", *(b+1));
	return 0;
}
