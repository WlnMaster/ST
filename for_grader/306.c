#include <stdio.h>
#include <string.h>
int main(){
    int n = 20,s;
    char result[1000];
    char ans[1000][1000];
    int std[1000];
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
    // 1-15 1p 
    // 16-18 2p 
    // 19-20 3p
    for(int i = 0; i < s;i++){
        for (int j = 0; j < n; j++)
        {
            if(result[j] == ans[i][j]){ // Check Correct
                if(j > 17){ //Check index
                    std[i] += 3;
                }else if(j > 14){
                    std[i] += 2;
                }else{
                    std[i] += 1;
                    // printf("1");
                }
                    
            }else{
                    // printf("0");
            }
            

        }
        // printf("\n");
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

    // DBDCCDAEADDBDCCDAEAD

// ABACCDEEADABAVCAEEAD
// DBABCAEEADDBABCAEEAD
// EDDACBEEADEDDACBEEAD


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