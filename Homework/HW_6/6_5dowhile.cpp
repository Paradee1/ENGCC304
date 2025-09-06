#include <stdio.h>

int main() {
    int num = 0 ;
    int i   = 0 ;
    int j   = 0 ;
    int isPrime ;

    printf( "Enter a number : " ) ;
    scanf( "%d", &num ) ;
       
    i = num;
    do {
        isPrime = 1;
        j = 2;
        if (i == 2) {
            isPrime = 1;   
        } else {
            do {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                } //end if
                j++;
            } while (j * j <= i); 
        }//end for j loop

        if (isPrime == 1) {
            printf("%d ", i);
        } //end if

        i--;
    } while (i >= 2);

    return 0;
}// end function