#include<stdio.h>
int main(){
    int Year;float Grade ;char Help;
    scanf("%d %f %c",&Year,&Grade,&Help);
    if(Grade >= 3.00){
        printf("approved");
    }
    else if(Help != 'Y') {
        printf("no help");
    }
    else if(Year < 2 ) {
        printf("not approved\n");
        printf("year < 2");
    }
    else if(Grade < 2.50 ) {
        printf("not approved\n");
        printf("grade < 2.50");
    }
    else {
        printf("approved");
    }
   
    return 0;
}