#include <stdio.h>
#include <math.h> // สำหรับฟังก์ชัน pow()

int isArmstrong(int num) {
    int original = num ;
    int sum      = 0 ;
    int count    = 0 ;
    int temp     = num ;
    int digit ;

       // นับจำนวนหลัก
    while ( temp != 0 ) {
        temp /= 10 ;
        count++ ;
    } // end while

    temp = num ;
    // คำนวณผลรวมของแต่ละหลักยกกำลังจำนวนหลัก
    while ( temp != 0 ) {
        digit = temp % 10 ;
        sum += pow( digit, count ) ;
        temp /= 10 ;
    } // end while

    // เปรียบเทียบกับค่าต้นฉบับ
    return sum == original ;
} // end isArmstrong

int main() {
    int number ;

    printf( "Enter number: \n" ) ;
    if ( scanf( "%d", &number ) != 1 ) {
        printf( "Please enter a number.\n" ) ;
        return 1 ;
    } // end if

    if ( isArmstrong(number) ) {
        printf( "Pass.\n" ) ;
    } else {
        printf( "Not Pass.\n" ) ;
    } // end if
    
} // end main