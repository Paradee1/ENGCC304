#include <stdio.h> 

int main() {
    int num = 0 ;
    int i   = 0 ;
    int j   = 0 ;
    int isPrime ;

    printf( "Enter a number : " ) ;
    scanf( "%d", &num ) ;
    for ( i = num ; i >= 2 ; i-- ) {  
        isPrime = 1 ;

        for ( j = 2 ; j < i ; j++ ) {
            if ( i % j == 0 ) {
                isPrime = 0 ;
                break ;
                } //end if
            }//end for j loop

        if ( isPrime == 1 ) {
            printf( "%d ", i) ;
        } //end if
    } //end for i loop
} // end function