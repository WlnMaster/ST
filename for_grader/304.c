#include<stdio.h>
void PrintArray(int r, int c, int arr[110][110])
{
    int i, j;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int r,c,i,j;
    int arr[110][110];
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        int sum = 0;
        for(j=0;j<c;j++){
            sum+=arr[i][j];
        }
        arr[i][c]=sum;
    }
    c++;
    for(i=0;i<c;i++){
        int sum = 0;
        for(j=0;j<r;j++){
            sum+=arr[j][i];
        }
        arr[r][i]=sum;
    }
    r++;
    PrintArray(r, c, arr);
}