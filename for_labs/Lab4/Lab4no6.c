#include <stdio.h>
int main(){
    int s,n;
    scanf("%d %d",&s,&n);
    int i = 0;
    while (i < n)
    {
        for(int j = 0; j < n;j++){
            printf("%d",s);
        }
        printf("\n");
        i++;
    }
    
}