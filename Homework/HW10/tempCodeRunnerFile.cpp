/*
    จงเขียนโปรแกรมเพื่อรับค่า String ที่สามารถรับชื่อและนามสกุลไว้ในตัวแปรเดียวกันได้ พร้อมกับแสดงผลบนหน้าจอคอมพิวเตอร์

    Test case:
        Kittinan Noimanee
    Output:
        Name: Kittinan Noimanee

    Test case:
        Visual Studio Code
    Output:
        Name: Visual Studio Code

*/
#include <stdio.h>
//section 1
int main() {
    char input[ 100 ] ;
    int sum[ 26 ] = {0} ;
    printf( "INPUT : " ) ;
    gets( input ) ;

    // นับจำนวนแต่ละตัวอักษร
    for ( int i = 0 ; input[i] != '\0'; i++ ) { 
        if ( input[i] >= 'a' && input[i] <= 'z' ) {
            sum[input[i] - 'a']++;
        }//end for
    }//end for

    // แสดงผลลัพธ์
    printf("OUTPUT : \n") ;
    for (int i = 0; i < 26; i++) {
        if ( sum[i] > 0 ) {
            printf( "'%c' มี %d ตัว\n", 'a' + i, sum[i] ) ;
        }//end if
    }//end for

    return 0;
}



