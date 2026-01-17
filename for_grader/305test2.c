#include<stdio.h>
#define max 150
int main(){
    char ans[max];
    int k,n,score[max];
    scanf("%d",&k);
    int i,j;
    if(k>=1 && k<=50){
        for(i=0;i<k;i++){
            scanf(" %c", &ans[i]);
        }
        scanf("%d",&n);
        char stu_ans[max][max];
        score[n];
        
        if(n>=1 && n<=100){
            for(i=0;i<n;i++){
                int sum = 0;
                for(j=0;j<k;j++){
                    scanf(" %c",&stu_ans[i][j]);
                    if(stu_ans[i][j] == ans[j]){
                        sum++;
                    }
                }
                score[i] = sum;
            }
            for(i=0 ;i<n;i++){
                printf("std %d => %d\n",i+1,score[i]);
            }
        }
    }
}