#include <stdio.h>
#include <math.h>

int main() {
    int score ;

    printf( "Enter score: \n" ) ;
    if ( scanf("%d", &score) != 1 ) {
        printf( "Invalid input. Please enter a number.\n" ) ;
        return 1 ;
    } // end if

    if ( score >= 80 ) {
        printf( "A !\n" ) ;
    } //end if
    else if ( score >= 75 && score <= 79 ) {
        printf("B+ !\n");
    } // end else if
    else if ( score >= 70 && score <= 74 ) {
        printf("B !\n");
    } // end else if
    else if ( score >= 65 && score <= 69 ) {
        printf("C+ !\n");
    } // end else if
    else if ( score >= 60 && score <= 64 ) {
        printf("C !\n");
    } // end else if
    else if ( score >= 55 && score <= 59 ) {
        printf("D+ !\n");
    } // end else if
    else if ( score >= 50 && score <= 54 ) {
        printf("D !\n");
    } // end else if
    else if ( score < 50 ) {
        printf("F !\n");
    } // end else if
    else {
        printf("F !\n");
    } // end else
    
    
} // end main