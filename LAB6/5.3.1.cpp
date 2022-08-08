#include <stdio.h>

int main() {
 int i , line  ;
  printf ( "input=" ) ;
  scanf ( "%d", &line ) ;
	if ( line%2!=0 ) {
		for ( int i=0 ; i<line ;i++ ) {
			for ( int j=line ; j>i ; j-- ) {
				printf ( "*" ) ;
			}									//end function for j
			printf ("\n" ) ;
				for ( int a= -1 ; a <i ; a++ ) {
		printf (" ");
	    	}									//end function for a
		}										//end function for i
    } 											//end function if
    else if (line%2==0) {
    	for ( int i=0 ; i<=line ; i++ ) {
    		for ( int j=0 ; j<i ; j++ ) {
    			printf ( "*" ) ;	
			}									//end function for j
			printf ("\n" ) ;
			for ( int a=line ; a >i ; a-- ) {
		printf (" ");
	}											//endfunction for a
		}										//end function for i
	}											//endfunction else if
	 	
	

return 0 ;
}												//end function main
