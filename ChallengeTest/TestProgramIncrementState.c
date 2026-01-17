#include <stdio.h>

int main() {
    float unit;
    float remain;
    float cost = 0;

    scanf("%f", &unit);

    if(unit <= 50){
        remain = 0;
        printf("%.2f",remain);
    }
    else if(unit > 50){
        remain =  22.5 +((unit - 15) * 2);
        printf("%.2f",remain);
    }
    else if(unit > 55){
        remain =  102.5 + 2.5;
        // remain =  102.5 + ((unit - 55) * 2.5);
        printf("%f",remain);
    }
    else if(unit > 100){
        remain =  215 + ((unit - 100) * 3);
        printf("%.2f",remain);
    }
    return 0;
}

// ค่าไฟ 50 หร่อยเเรก
// 15 1.5
// 40 2
// 45 2.5
// 100 3

// Output
// 13 0
// 51 94.5
// You sent
