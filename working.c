// working.c by Bill Weinman <http://bw.org/>
#include <stdio.h>

int addFunc(int a, int b){
	return a + b;
}
int main( int argc, char ** argv ) {
	printf("Hello, World!\n");
	printf("The result of the addition is %d" \n,addFunc(9,10));
	return 0;
}
