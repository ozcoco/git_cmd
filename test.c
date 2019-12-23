#include<stdio.h>


int main(){

	char* buf = (char*)malloc(2);


	short i = 234;

	buf+1 |= i;

	i >> 8;

	buf |= i;

	printf("--->%s", (char*)buf);


return 0;
}


