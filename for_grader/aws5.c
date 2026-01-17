#include <stdio.h>
char Grade(int score){
    if(score >= 80){return 'A';}
    else if(score >= 70)return 'B';
    else if(score >= 60)return 'C';
    else if(score >= 50)return 'D';
    else return 'F';
}
int main() {
    int a,b,c,score,total;
    scanf("%d/%d/%d",&a,&b,&c);
    score = a+b+c;
    total = 80 - score;
    printf("%c ",Grade(score));
    if(total > 0 && total <= 80) printf("%d",total);
    return 0;
}
