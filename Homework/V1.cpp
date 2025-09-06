#include<stdio.h>

int main() {
    int num = 0 ;
    int i = 0 ;

    printf( "Enter number : " ) ;
    scanf( "%d" , &num ) ;
    if( num % 2 != 0 ) {
        for ( i = num ; i >= 0 ; i-- ) {
            printf( "%d\n" , i ) ;
            i-- ;
        }
    }
    return 0 ;
}