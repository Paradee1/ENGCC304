#include <stdio.h> //<stdio.h> ไม่มีตัว u
#include <conio.h> //<conio.h> ตัว o หาย

int main() {
    float a, b = 3 ;
    int i      = 0 ;
    bool _1    = 0 ;

    printf( "%d " ,_1 ) ;
    if( _1 != 0 ) {
        printf("ok ") ;
        } 
        else while( i <= 5 ) {
            printf(" not-okey-%d ", ++i) ;
        }

    for( i = 3 ; i < 10 ; i += 1 ) {
        if( i % 2 == 1 ){
            printf( "see see " ) ;
        } else {
            printf( "haha " ) ;
        }
 
    }
    return 0;
}