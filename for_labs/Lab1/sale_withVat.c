#include <stdio.h>
int main(){
    double a,b,c,vat;
    float promotion1 = 0.05, promotion2 = 0.15, promotion3 = 0.30;
    scanf("%lf",&a);
    a = a - (a * promotion1);
    vat = a * 0.07;
    printf("%.2f\n",a + vat);
    scanf("%lf",&b);
    b = b + a;
    b = b - (b * promotion2);
    vat = b * 0.07;
    printf("%.2f\n",b + vat);
    scanf("%lf",&c);
    c = c + b;
    c = c - (c * promotion3);
    vat = c * 0.07; 
    printf("%.2f",c + vat);
    return 0;
}
