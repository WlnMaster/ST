#include <stdio.h>
#include <stdbool.h>

// ฟังก์ชันสำหรับตรวจสอบว่าเป็นจำนวนเฉพาะหรือไม่
bool isPrime(int n) {
    if (n <= 1) return false; // เลข <= 1 ไม่ใช่จำนวนเฉพาะ
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false; // ถ้าหารลงตัว ไม่ใช่จำนวนเฉพาะ
    }
    return true;
}

int main() {
    int num;
    if (scanf("%d", &num) != 1) return 0;

    if (isPrime(num)) {
        printf("Yes\n");
    } else {
        printf("No\n");
        // วนลูปตั้งแต่เลข 2 จนถึงตัวเลขที่น้อยกว่า num
        bool first = true;
        for (int i = 2; i < num; i++) {
            // ถ้าไม่ใช่จำนวนเฉพาะ ให้พิมพ์ออกมา
            if (!isPrime(i)) {
                if (!first) printf(" "); // เว้นวรรคระหว่างตัวเลข
                printf("%d", i);
                first = false;
            }
        }
        printf("\n");
    }
    return 0;
}