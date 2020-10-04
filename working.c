// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

int addFunc(int a, int b){
	return a + b;
}
int main( int argc, char ** argv ) {
	int a,b;
	printf("Hello, World!\n");
	printf("Please enter the two numbers \n");
	scanf("%d%d \n",&a,&b);
	printf("The result of the addition is %d" \n,addFunc(a,b));
	return 0;
}
