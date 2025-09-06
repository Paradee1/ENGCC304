#include <stdio.h>

int main() {
    int num = 0 ;
    int i   = 0 ;
    int j   = 0 ;
    int isPrime ;

    printf( "Enter a number : " ) ;
    if ( scanf( "%d", &num ) != 1 ) {
        printf( "Please Input Number!!\n" ) ;
        return 1 ;
    } // end if input is not a number then return 1
    i = num ;   
    while ( i >= 2 ) {
        isPrime = 1 ;
        j = 2 ;
        while ( j < i ) {
            if ( i % j == 0 ) {
                isPrime = 0 ;
                break ;
            } //end if
            j++ ;
        } //end for j loop
        if ( isPrime == 1 ) {
            printf( "%d ", i) ;
        } //end if
        i-- ;
    } //end for i loop
} // end function