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
int main() {
    char input[ 100 ] ; //เก็บค่าที่ผู้ใช้ป้อนเข้ามา
    int text[ 256 ] = {0} ; //เก็บจำนวนของแต่ละตัวอักษร
    int sum = 0 ; //เก็บจำนวนรวมของตัวอักษรทั้งหมด

    printf( "INPUT : " ) ;
    gets( input ) ;

// เปรียบเทียบ input ว่าว่างเปล่าหรือไม่
    for ( int i = 0 ; input[ i ] != '\0' ; i++ ) {
        text[ input[ i ] ] ++ ;
        sum++ ;
    }//end for

    printf( "OUTPUT : %d characters \n" , sum ) ; //แสดงจำนวนตัวอักษรทั้งหมด

//ตรวจสอบและนับจำนวนของแต่ละตัวอักษรที่ป้อนเข้ามา นับจำนวนรวมของตัวอักษรทั้งหมด
    for ( int i = 0 ; i < 256 ; i++ ) {
        if ( input[ i ] == ' ' ) {
            printf ( "White space" ) ;
        }//end if
    
        if ( text[ i ] > 0 ) {
            printf( "%c -> %d\n" , i, text[ i ] ) ;
        }//end if
    }//end for

    return 0 ;
}//end main

