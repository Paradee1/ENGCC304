#include <stdio.h>
#include <stdlib.h>

int main() {
    int n ;
    int value [n] ;
    int isprime ;

    printf( "Enter N : ") ;
    scanf( "%d", &n ) ;
    for ( int i = 0 ; i < n ; i++ ) {
        printf( "Enter value[%d] : ", i ) ;
        scanf( "%d", &value[i] ) ;
    } // end for

    printf( "Index: ") ;
    for(int i = 0 ; i < n ; i++ ) {
        printf( " %d", i ) ;
    } // end for

    printf( "\nArray: ") ;
    for(int i = 0 ; i < n ; i++ ) {
        int num = value[i] ;
        isprime = 1 ;

        if( num < 2) {
            isprime = 0 ;
        } else {
            for(int j = 2 ; j <= num/2 ; j++ ) {
                if( num % j == 0 ) {
                    isprime = 0 ;
                    break ;
                } // end if
            } // end for

        if ( isprime ) {
            printf( " %d", value[i] ) ;
        } else {
            printf( " #", value[i] ) ;
        } // end if
        } // end else
    } // end for
} // end main