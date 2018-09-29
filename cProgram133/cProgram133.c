#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXWORD 100
int getword(char *, int);
int binsearch(char *, struct key *, int);

struct key{
	char *word;
	int count;
};
int main(){
	int a[] = {1,3};
	printf("%d", a[0]);
	printf("******************************************");
	struct key keytab[]={
		{"auto", 0},
		{"break", 0},
		{"case",0},
		{"char", 0},
		{"const", 0},
		{"continue", 0},
		{"void", 0},
	};
	int NKEY = sizeof(keytab)/sizeof(struct key);
	printf("the length is %d", NKEY);
	printf("*****************************************");
	int n;
	char word[MAXWORD];
	while(getword(word, MAXWORD)!=EOF){
		if(isalpha(word[0])){
			if((n=binsearch(word, keytab, NKEY))>=0){
				keytab[n].count++;
			}
		}
	}

	for (n=0;n<NKEY;n++){
		if(keytab[n].count>0){
			printf("%4d %s\n", keytab[n].count, keytab[n].word);
		}
	}

	return 0;
}

int binsearch(char *word, struct key tab[], int n){
	int cond;
	int low, high, mid;
	low = 0;
	high = n-1;
	while (low<=high){
		mid = (low+high)/2;
		if((cond = strcmp(word, tab[mid].word))<0){
			high = mid-1;
		}else if(cond>0){
			low = mid+1;
		}else{
			return mid
		}
	}
	return -1;
}
