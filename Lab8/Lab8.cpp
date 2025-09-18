#include <stdio.h>
#include <stdlib.h>

int main() {
    int position ;
    int year ;
    int project ;
    int salary ;
    int yerbonus ;
    int projectbonus ;

    printf( "Position ( 1 =  Junior Programmer, 2 = Mid-Level Programmer, 3 = Senior Programmer ) : \n" ) ;
    scanf( "%d", &position ) ;
    printf( "Years of Experience : \n" ) ;
    scanf( "%d", &year ) ;
    printf( "Number of Projects Completed this Year : \n" ) ;
    scanf( "%d", &project ) ;

    if( position == 1 ) {
        salary = 20000 ;
        printf( "Base Salary : %d THB\n", salary ) ;
    } // end if
    else if( position == 2 ) {
        salary = 35000 ;
        printf( "Base Salary : %d THB\n", salary ) ;
    } // end else if
    else if(position == 3) {
        salary = 50000 ;
        printf( "Base Salary : %d THB\n", salary ) ;
    } //end else if



    if (year > 5) {
        yerbonus = salary * 20 / 100 ;
        printf( "Experience Bonus : %d THB\n", yerbonus ) ;
    } // end if
    else if (year >= 4 && year<= 5) {
        yerbonus = salary * 15 / 100 ;
        printf( "Experience Bonus : %d THB\n", yerbonus ) ;
    } // end else if
    else if (year >= 1 && year <= 3) {
        yerbonus = salary * 10 / 100 ;
        printf( "Experience Bonus : %d THB\n", yerbonus ) ;
    } // end else if
    else if (year < 1) {
        yerbonus = 0 ;
        printf( "Experience Bonus : %d THB\n", yerbonus ) ;
    } // end else if
    
    if (project > 5 ) {
        projectbonus = salary * 5 /100 ;
        printf( "Special Bonus : %d THB\n", projectbonus ) ;
    } // end if
    else {
        projectbonus = 0 ;
        printf( "Special Bonus : %d THB\n", projectbonus ) ;
    } // end else

    printf( "Net Salary : %d THB\n", salary + yerbonus + projectbonus ) ;
    
  
} // end main