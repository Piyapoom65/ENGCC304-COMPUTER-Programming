#include <stdio.h> 

int main( ) { 

	int i = 0 ;
	int N = 7 ; 
	
	printf( "--| Show 'Hello World' to Screen %d line(s) \n", N ) ; 
	for( i = 0; i< N; i++ ) { 
		printf(" [%3d] Hello World \n ", i ) ; 
	} 														//end for
	char star = '*' ; 
	int j = 0 ; 
		N = 8 ;
		i = 0 ; 
		j = 0 ;
	printf( "\n" ) ; 
	while( i < N ) { 
		j = 0 ; 
		while ( j < N ) { 
			if( i < j ) 
			printf( "%c ", star ) ; j++ ;
		} 													//end while j < N 
		printf( "%s", "\n" ) ; i += 1 ; 
	} 														//end while i < N 
	return 0 ; 
} 															//end fanction
