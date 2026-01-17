#include <stdio.h>
int main(){
    int h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    printf("hour:%d\nminute:%d\nsecond:%d",h,m,s);
    return 0;
}

// New Repository: 268lab1

// ข้อ 1 (clock.c)
// รับข้อมูลด้วยรูปแบบ h:m:s 
// แสดงผลลัพธ์ ด้วยคำสั่ง printf() 1 คำสั่ง
// hour:h 
// minute:m 
// second:s

// เช่น รับข้อมูล 
// 10:59:30

// แสดงผลลัพธ์ 
// hour:10 
// minute:59 
// second:30
// >>commit 1 (clock.c) “input > clock > output”
