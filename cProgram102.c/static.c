#include <stdio.h>
int foo();
int main(){
	
	printf("%d", foo());
	printf("%d", foo());
	printf("%d", i);
	return 0;

}

int foo(){
	static int i  = 0;
	i++;
	return i;
}
