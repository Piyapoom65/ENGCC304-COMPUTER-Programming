#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct age {
	int number ; 
	char name[100] ; 
	char date[100] ; 
} typedef a ; 

int inputdata (a []) ; 
void outputdata (a [],int) ; 

int main(){
	a people[100] ; 
	int number ; 
	number = inputdata(people) ;
	outputdata(people,number) ;
	return 0 ;
}//end main

int inputdata (a people[]){
	FILE *dt ; 
	int number ;
	dt = fopen("a.txt","r") ;
	if (dt == NULL) {
		printf( "file not found, please change file name " ) ;
		exit(0) ;
	}
	fscanf(dt,  "%s\t%s\t\t%s\n", people[0].name, people[0].name, people[0].name) ;
	strcpy(people[0].name, "\0") ;
	for (int i = 0 ; i < 100 ; i++){
		if (fscanf( dt, "%d\t%s\t\t%s\n", &people[ i ].number, people[ i ].name, people[ i ].date) != EOF) {
			number++ ;
		}
		else {
			break ;
		}
	}
	fclose(dt) ;
	return number ; 
}

void outputdata (a people[], int number) {
	int Oldest = -99999999 ; 
	int Youngest = 999999999 ; 
	char all[ 100 ], focus[ 100 ] ;
	int year, month, day ;
	char *pointmaxmin;
	int allday[ 100 ] ;
	for (int i = 0 ; i < number ; i++) {
		strcpy(all, people[i].date) ;
		for(int j = 0 ; j < 4 ; j++) {
			focus[j] = all[j] ;
		}
		focus[4] = '\0' ;
		year = atoi(focus) ;
		for(int j = 0 ; j < 2 ; j++) {
			focus[j] = all[j + 5] ;
		}
		focus[2] = '\0' ;
		month = atoi(focus) ;
		
		for(int j = 0 ; j < 2 ; j++) {
			focus[ j ] = all[j + 8] ;
		}
		focus[ 2 ] = '\0' ;
		day = atoi(focus) ;
		allday[i] =  (2018 - year) * 365 + (6 - month) * 30 + (21 - day) ;
		printf("%s %d Years, %d Months\n", people[i].name, allday[i]/ 365, (allday[i] % 365) / 30) ;
	}//end for
	
	for (int k = 0; k < number ; k++) {
		if (allday[k] > Oldest ) {
			Oldest = allday[k] ;
			pointmaxmin = people[k].name ;
		}
	}//end for
	printf( "\nMax : %s [%d Years, %d months]\n", pointmaxmin, Oldest/365, (Oldest%365)/30) ;

	for (int k = 0; k < number ; k++) {
		if (allday[ k ] < Youngest) {
			Youngest = allday[k] ;
			pointmaxmin = people[k].name ;
		}
	}//end for
	printf( "Min : %s [%d Years, %d months]", pointmaxmin, Youngest/365, (Youngest%365)/30) ;
}
