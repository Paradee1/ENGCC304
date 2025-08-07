#include <stdio.h>

int main() {
    char firstname [50] ;
    char lastname  [50] ;

    printf( "First Name: " ) ;
    scanf( "%s" , firstname ) ;
    printf( "Last Name: " ) ;
    scanf( "%s" , lastname );
 
    printf( "%s %s TC, RMUTL, Chiang Mai, Thailand \n" ,firstname, lastname );
}