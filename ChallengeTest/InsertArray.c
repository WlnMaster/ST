#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;          // จำนวนสมาชิกปัจจุบัน
    int pos = 2;        // ตำแหน่งที่จะแทรก
    int value = 99;

    // เลื่อนข้อมูลจากท้ายมาข้างหน้า
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    n++; // เพิ่มจำนวนสมาชิก

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}