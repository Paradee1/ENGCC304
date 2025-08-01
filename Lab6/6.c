#include <stdio.h>
#include <math.h>

int main() {
    int num = 0 ;
    int i   = 0;

    printf( " Enter value : \n");
    if(scanf( "%d" , &num )  != 1) {
        printf("Please Input Number\n");
        return 0;
    } // end if

    printf( " Series: " ) ;

    if ( num % 2 == 0 ) {
        for(i = num ; i >= 0 ; i--) {
                printf( "%d ", i) ;
                i--;
        } //end for
    }// end if
    else {
        for(i = 1; i <= num; i++) {
            printf( "%d ", i) ;
            i++;
        } //end for
    }// end else
}
