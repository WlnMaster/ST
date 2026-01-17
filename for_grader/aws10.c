
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,de,temp;
    scanf("%d",&n);
    int arr[100];
    if(n <= 20){
        for (int i = 0; i < n ;i++){
            scanf("%d",&arr[i]);
        }
        printf("a) ");// a)
        for (int i = 0; i < 4 ;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        printf("b) ");// b)
        for (int i = 0; i < n ;i++){
            if(arr[i] > arr[2]) {
                printf("%d\n",arr[i]);
                de = i;
                break;
            }
        }
        printf("c) ");// c) 
        printf("%d\n",de);
        printf("d) ");// d)
        temp = arr[2] + arr[3];
        n++;
        arr[n-1] = temp;
        for (int i = 0; i < n ;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        printf("e) ");// e).......
        temp =   arr[2] -  arr[4];
        int result = abs(temp);
        arr[3] = result;
        for (int i = 0; i < n ;i++){
            printf("%d ",arr[i]);
        }
        
        printf("\n");
        printf("f) ");// f) 
        if (arr[1] > arr[5]){
            printf("%d\n",2);
        }else{
            printf("%d\n",6);
        }
        printf("g) ");// g) 
        temp = arr[1];
        arr[1] = arr[n-1];
        arr[n-1] = temp;
        for (int i = 0; i < n ;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        printf("h) ");// h)
        int new[100],j = 0;
        int count = 0;
        for (int i = 0; i < n ;i++){
            if(arr[i] % 2 != 0){
                continue;
            }
            else{
                count++;
                new[j] = arr[i];
                j++;
            }
        }
        printf("new=[");
        for (int i = 0; i < count; i++)
        {
            printf("%d",new[i]);
            if(i < count - 1){
                printf(" ");
            }
        }
        printf("]");
    }else{return 0;}
}

// จงเขียนโปรแกรมรับอาร์เรย์ think ให้เก็บข้อมูลจานวนเต็ม n ค่า และเขียนค าสั ่งเพื ่อจัดการข้อมูลในอาร์เรย์ think ดังนี ้ 
// a) แสดงสมาชิกตัวที ่ 1 ถึง 4 ด้วยการท าซ ้า 
// b) แสดงสมาชิกที ่มีค่ามากกว่าสมาชิกตัวที ่ 3 
// c) แสดงดัชนี (index) ของสมาชิกที ่มีค่ามากกว่าสมาชิกตัวที ่ 3 
// d) เพิ ่มสมาชิกตัวต่อไป ให้มาจากผลรวมของสมาชิกตัวที ่ 3 และ 4 
// e) เปลี ่ยนค่าสมาชิกตัวที ่ 4 เป็นผลต่างของสมาชิกตัวที ่ 3 กับ 5 
// f) 
// สมาชิกตัวที ่ 2 กับตัวที ่ 6 ตัวใดมีค่ามากกว่ากัน 
// g) สลับสมาชิกตัวที ่ 2 กับสมาชิกตัวสุดท้าย 
// h) ส าเนาเฉพาะเลขคู ่ ไปลงอาร์เรย์ใหม่ชื ่อ new 

// ตัวอย่าง Input
// 8
// 3 13 34 4 85 8 17 9

// ตัวอย่าง Output
// a) 3 13 34 4
// b) 85
// c) 4
// d) 3 13 34 4 85 8 17 9 38
// e) 3 13 34 51 85 8 17 9 38
// f) 2
// g) 3 38 34 51 85 8 17 9 13

// h) new=[38 34 8]