#include <stdio.h>
#include <math.h>

int main() {
    char id[10] ;
    int work ;
    int amount ;
    float salary ;

    printf( "Input the Employees ID(Max. 10 chars): \n" ) ;
    scanf( "%s" , id ) ;
    printf( "Input the working hrs: \n" ) ;
    scanf( "%d" , &work ) ;
    printf( "Salary amount/hr: \n" ) ;
    scanf( "%d" , &amount ) ;

    salary = work * amount ;

    printf( "Expected Output: \n" ) ;
    printf( "Employees ID = %s \n" , id ) ;
    printf( "Salary = U$%10.2f \n" , salary ) ;

    return 0 ;
}  // end main