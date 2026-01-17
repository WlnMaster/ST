#include<stdio.h>
#define max 150
int main(){
    char ans[max];
    int  k = 20,n, score[max];
    int i, j;
    for(i=0;i<20;i++){
        scanf(" %c",&ans[i]);
    }
    scanf("%d", &n);
    if(n>=1 && n<=100){
        char stu_ans[max][max];
        score[n];
        for(i=0;i<n;i++){
            for(j=0;j<k;j++){
                scanf(" %c",&stu_ans[i][j]);   // input ans student
            }
        }

        for(i=0;i<n;i++){
            int sum = 0;
            for(j=0;j<k;j++){
                if(stu_ans[i][j] == ans[j]){ //check ans student
                    if(j>17){
                        sum+=3;
                    }
                    else if(j>14){
                        sum+=2;
                    }
                    else{
                        sum+=1;
                    }
                }
            }
            score[i] = sum;
        }
        for(i=0;i<n;i++){
            printf("std %d => %d\n",i+1,score[i]); 
        }
    }
}