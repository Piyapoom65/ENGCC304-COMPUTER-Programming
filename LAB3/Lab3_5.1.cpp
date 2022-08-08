#include <stdio.h>

int main( ) {	
	int a    = 0 ;         //%d
	float b  = 13.1 ;      //%f  %.2f
	char d   = 'M' ;       //%c
	
	printf( "Please enter value :" ) ;
	scanf( "%d %.2f %c" , &a , &b , &d ) ;
	printf( "%d %.2f %c" , a , b , d ) ;
	
	return 0 ;
} //end fanction
