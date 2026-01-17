#include <stdio.h>
#include <string.h>

int main(){
    int n, s;
    char result[1000];
    char ans[1000][1000];
    int std[1000];

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf(" %c", &result[i]);
    }

    scanf("%d", &s);
    for(int i = 0; i < s; i++){
        for(int j = 0; j < n; j++){
            scanf(" %c", &ans[i][j]);
        }
    }

    // initialize score
    memset(std, 0, sizeof(std));

    // check answers
    for(int i = 0; i < s; i++){
        for(int j = 0; j < n; j++){
            if(result[j] == ans[i][j]){
                std[i]++;
                printf("1");
            } else {
                printf("0");
            }
        }
        printf("\n");
    }

    for(int i = 0; i < s; i++){
        printf("std %d => %d\n", i + 1, std[i]);
    }

    return 0;
}
// DBDCCDAEAD

// ABACCDEEAD
// DBABCAEEAD
// EDADCBEAAD
// CBAEDCEEAD
// ABCDCCEEAD
// BBECCDEEAD
// BBACCDEEAD
// EBECCDEEAD