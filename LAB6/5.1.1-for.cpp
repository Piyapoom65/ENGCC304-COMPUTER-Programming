#include <stdio.h>

 int main ()
 {
 	int i, line ;
 	
	 	printf ( "input=" ) ;
	 	scanf ( "%d" ,&line ) ;
	 for  ( int i=1 ; i<=line ; i++ )
	  { 
		for ( int j=1 ; j<=i ; j++ ) 
		{
		
		printf ( "*" ) ;
	}							//end function for j
	printf ("\n") ;
	 }							//emd function for i
 	return 0; 					//end function main
 }
