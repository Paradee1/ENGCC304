#include <stdio.h>
#include <string.h> // สำหรับฟังก์ชัน strlen()
#include <ctype.h> // สำหรับฟังก์ชัน tolower()

int main() {
    char str [50] ;
    int len ;
    int ispalindrome = 1 ;

    printf( "Enter word: \n" ) ;
    scanf( "%s", str ) ;

    len = strlen( str ) ;

    for ( int i = 0 ; i < len/2 ; i++ ) {
        if ( tolower(str[i] ) != tolower( str[len - i - 1] )) { // // ใช้ tolower() เพื่อแปลงตัวอักษรเป็นตัวพิมพ์เล็กก่อนเปรียบเทียบ
            ispalindrome = 0 ;
            break ;
        } // end if
    } // end for

    if ( ispalindrome ) {
        printf( "Pass.\n" ) ;
    } else {
        printf( "Not Pass.\n" ) ;
    } // end if
    
} // end main