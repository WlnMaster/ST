#include <stdio.h>
int main(){
    int n,r;
    char c;
    scanf("%c %d %d",&c,&n,&r);
    int i = 0;
    while (i < r)
    {
        for(int j = 0; j < n;j++){
            printf("%c",c);
        }
        printf("\n");
        i++;
    }
    
}