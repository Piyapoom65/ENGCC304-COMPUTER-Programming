# include <stdio.h>

int main () {
	int i, line ;
	
	printf ( "input=" ) ;
	 	scanf ( "%d" ,&line ) ;
	 	
	for ( int i= 0 ; i <= line ; i ++ ) {
		for ( int j=line ; j >i ; j-- ) {
			printf ( "*" ) ;
		}									//end function for j
		printf ( "\n" ) ;
		for (int a= -1 ; a <i ; a++) {
		printf(" ");
		}									//end function a
			
	}										//end function for i
	return 0 ;
} 											//endfunction main
