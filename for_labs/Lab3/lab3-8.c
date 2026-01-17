#include <stdio.h>

int main() {
    int h, m, s, next_minute;
    if (scanf("%d:%d:%d", &h, &m, &s) != 3) return 1;
    printf("hour:%d\nminute:%d\nsecond:%d\n", h, m, s);
    printf("Next minutes: ");
    scanf("%d", &next_minute);
    m = m + next_minute;
    h = h + (m / 60);
    m = m % 60;
    h = h % 24;
    printf("hour:%d\nminute:%d\nsecond:%d\n", h, m, s);
    return 0;
}

// จงแก้ไขโปรแกรมให้รับจำนวนนาทีที่ต้องการตรวจสอบ และให้แสดงผลลัพธ์เป็นเวลาที่ถูกต้องหลังจากเพิ่มจำนวนนาที เช่น
// 10:59:30 (ป้อน)
// 10:30:30 (ป้อน)

// Hour:10
// Minute:59
// second:30
// Next minutes: 10 (ป้อน 10)
// Hour:11
// Minute:9
// second:30

// โดยกำหนดให้ Hour(0-23) Minute(0-59) Second(0-59) และ Next minutes (0-120) และให้แสดงเวลาข้ามวันได้
