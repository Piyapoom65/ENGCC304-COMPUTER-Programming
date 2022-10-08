#include<stdio.h>
#include<string.h>

struct employeedata { 
	char name[100] ; 
	float salary ; 
	int duration ; 
} typedef worker ;

void control( char incworker[]) ; 
void inputdata( worker employ[], int workernumber ) ; 
void showallsalary( worker employ[], int workernumber ) ; 

int main() {
	char incworker[2] = "y"; 
	int workernumber = 0 ;  
	worker employ[100] ; 
	while( incworker[0] == 'y') {
		control( incworker) ; 
		if (incworker[0] == 'y') { 
            inputdata( employ, workernumber) ; 
            workernumber++ ;
		}
	}
	showallsalary( employ, workernumber) ;
	return 0 ;
}

void control( char incworker[2] ) {
	printf("Do you want to Enter Employee Information? (y/n): ");
	scanf("%s", incworker) ;
}

void inputdata( worker employ[100], int workernumber) {
	printf("Employee name: ") ;
	getchar(); 
	gets(employ[workernumber].name) ; 
	printf("Salary (Bath/Month): ") ;
	scanf("%f", &employ[workernumber].salary) ; 
	printf("Duration (year): ") ;
	scanf("%d", &employ[workernumber].duration) ;
}

void showallsalary( worker employ[100], int workernumber ) {
	int i = 0 , j = 0 ; 
	float sum = 0 ; 
	char highname[100] ; 
	int highdur ;
	float highsalary = -99999999 ; 
	for( i=0 ; i < workernumber ; i++ ){
		sum = sum + employ[i].salary ; 
	}//end while
	printf( "----------\n") ;
	printf( "Average of Salary : %.2f Bath\n", sum/workernumber) ; 
	printf( "Payment of every month : %.2f Bath\n" , sum) ; 
	for( j=0 ; j < workernumber; j++ ){ 
		if ( employ[j].salary > highsalary ) {
			highsalary = employ[j].salary ;
			highdur = employ[j].duration ;
			strcpy( highname, employ[j].name ) ;
		}	 
	}
	printf( "**Most Salary in this business **\n" );
	printf( "name : %s (%d Years)\n", highname, highdur) ; 
	printf( "Salary : %.2f Bath", highsalary ) ; 
}
