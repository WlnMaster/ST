#include <stdio.h>
int main(){
    int maxtax,wage,hour;
    double tax1 = 0.08 ,tax2 = 0.10;
    scanf("%d %d",&hour,&wage);
    double income ,tax = 0;
    income = hour * wage;
    if(income <= 10000) {
        tax = 0;
    }
    else if(income <= 20000){
        tax = (income - 10000) * 0.08;
    }
    else {
        tax = 800 + ((income - 20000 ) * 0.10);
    }
    printf("%.1f",income - tax);
    return 0;
}