#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
    printf( "Input : " );
	gets(name);
	int a = strlen(name)+1;
	int i ;
	char re_N[a] ;
	for ( i=0 ; i< a-1; i++)
	{
		re_N[i] = name[a-2-i] ;
	}
	re_N[a-1] = '\0';
	printf( "Result : %s", re_N) ;
}
