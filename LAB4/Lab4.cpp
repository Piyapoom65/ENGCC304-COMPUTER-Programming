#include <stdio.h>

int main() {
	/*
	 	Function Name : Main
 	@Param 	Input	name	int		First  input from User
 	@Param  Input   hrs		int	   	second input from User
	@Param	Input	salary	int		third  imput from User
	@Param	Input	total	int		fourth imput from User
	*/
	
	int name ; 
	int hrs ;
	int salary ;
	int total ;  
	
	printf ( "Input the Employees Id :" ) ;
	scanf  ( "%d",&name );
	
	printf ( "Input the working hrs :" ) ;
	scanf  ( "%d",&hrs );
	
	printf ( "Salary amount/hr (bath) : " ) ;
	scanf  ( "%d",&salary ) ;
	
	total = hrs*salary ;

	
	printf( "\n----" ) ;
	printf( "\nExpected Output :" ) ;
	printf( "\nEmployees ID = %d", name ) ;
	printf( "\nAmount /day = %d", total ) ;
 
	
return 0 ;
} //end function





