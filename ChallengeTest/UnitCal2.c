#include <stdio.h>

int main() {
    int unit;

    while (1) {
        scanf("%d", &unit);
        if (unit == -1)
            break;

        double cost = 0.0;

        if (unit <= 50) {
            cost = 0.0;
        }
        else if (unit <= 15) {
            cost = unit * 1.50;
        }
        else if (unit <= 55) {
            cost = (15 * 1.50) + (unit - 15) * 2.00;
        }
        else if (unit <= 100) {
            cost = (15 * 1.50) + (40 * 2.00) + (unit - 55) * 2.50;
        }
        else {
            cost = (15 * 1.50) + (40 * 2.00) + (45 * 2.50)
                 + (unit - 100) * 3.00;
        }

        printf("%.2f\n", cost);
    }

    return 0;
}