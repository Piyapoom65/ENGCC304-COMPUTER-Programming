#include<stdio.h>
int main(){
    int num ; 
    int j ; 
    int rep = 0 ; 
    printf( "Input : " ) ;
    scanf( "%d", &num ) ;
    while( num >= 2 )
    {
        j = num ;
        while ( j >= 2 )
        {
            if( rep > 1 ) 
            {
                break;
            }
            if ( num%j == 0 )
            {
                rep++ ;
            }
            j-- ;
        }
        if ( rep <= 1 )
        {
            printf( "%d ", num ) ;
        }
        rep = 0 ;
        num-- ;
    }
}
