#include <stdio.h>

struct Worker{
	char name[100] ;
    int salary ;
    int period ;
}typedef Worker ;

void complete( Worker[], int) ;
void Show( Worker[], int) ;
int number  = 0 ;
int main(){
    int t = 100 ;
    Worker Base[t] ;
    complete(Base, t) ;
    Show(Base, t) ;
    return 0 ;
}

void complete(Worker Base[], int) {
    int i = 0 ; // loop input
    char Answer ; 
    bool Examine ; 
do{ 
    printf("Do you want to Enter Employee Information? (Y/N) : ") ;
    scanf("%s",&Answer) ;
    switch (Answer){
        case 'n':
        Examine = false ;
        break ;  
        default:
        Examine = true ;
       
        printf("Worker Name : ") ;
        scanf("%s",&Base[i].name) ;
        printf("Worker Salary : ") ;
        scanf("%d",&Base[i].salary) ;
        printf("Worker Duration : ") ;
        scanf("%d",&Base[i].period) ;
        i++ ; //add value loop
        number++ ; // number of times
       }//end swich   
   }
    while (Examine) ; //true or false
}

 void Show(Worker Base[], int) {
    int max = 0 ; // most salary of worker
    int information = 0 ; //information of most worker
    int add = 0 ;// loop Payment of every month
    int i = 0 ; // loop output
    float sum = 0 ;
    float change ;
	while (add < number)
{
  sum = sum + Base[add].salary ;
  add++ ;
}
	while( i < number ) {
		while(Base[ i ].salary > max) {
	    	max = Base[ i ].salary ;
	    	information = i ;
	    	break ;
	}
	i++ ;	//add value loop
	}

    change = Base[information].salary ; //change to float
    // Output
    printf("------Finsh-----\n") ;
    printf("Payment of every month : %.0f",sum) ;
    printf("\nAverage of Salary : %.2f",sum/number) ;
 	printf("\nMost Salary in this business %.2f Bath  \n",change) ;
    printf("Name is : %s",Base[information].name) ;
    printf("\nDuration: %d year",Base[information].period) ;
    printf("\n-----Finsh-----") ;     
 }
