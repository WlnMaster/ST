#include <stdio.h>
#include <string.h>
int main(){
    int n,s;
    char result[1000];
    char ans[1000][1000];
    int std[1000];
    scanf("%d",&n);
    for(int i = 0; i < n;i++){
        scanf(" %c",&result[i]);

        
    }
    scanf("%d",&s);
    for(int i = 0; i < s;i++){
        for (int j = 0; j < n; j++)
        {
            scanf(" %c",&ans[i][j]);
        }
        
    }
    for(int i = 0; i < s; i++){
        std[i] = 0;
    }
    // int correct = strcmp(result,ans);
    for(int i = 0; i < s;i++){
        for (int j = 0; j < n; j++)
        {
            if(result[j] == ans[i][j]){
                std[i]++;
                // printf("1");
            }else{
                // printf("0");
            }

        }
    }
    for (int i = 0; i < s; i++)
    {
        printf("std %d => %d\n",i+1,std[i]);
    }
    
    // for(int i = 0; i < s;i++){
    //     for (int j = 0; j < n; j++)
    //     {
    //         printf("%c",ans[i][j]);
    //     }
    //     printf("\n");
    // }
    // DBDCCDAEAD

    // ABACCDEEAD
    // DBABCAEEAD
    // EDADCBEAAD
    // CBAEDCEEAD
    // ABCDCCEEAD
    // BBECCDEEAD
    // BBACCDEEAD
    // EBECCDEEAD
    return 0;

    // for(int i = 0; result[i] != '\0';i++){
    //     printf("%c",arr[i]);
    // }
    
}