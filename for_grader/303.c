#include <stdio.h> //basic array 2D
void PrintArray(int r, int c, int arr[100][100])
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
int main()
{
    int r, c, i, j,num;
    int arr[100][100];
    scanf("%d %d", &r, &c);
    
    arr[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    scanf("%d", &num);

    // a) print member last row
    printf("a) ");
    for (i = 0; i < c; i++)
    {
        printf("%d", arr[r - 1][i]);
        printf(" ");
    }
    printf("\n");

    // b) print first colums
    printf("b) ");
    for (i = 0; i < r; i++)
    {
        printf("%d", arr[i][0]);
        printf(" ");
    }
    printf("\n");

    // c)print member > row 1 3
    printf("c) ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (arr[i][j] > arr[0][2])
            {
                printf("%d", arr[i][j]);
                printf(" ");
            }
        }
    }
    printf("\n");

    printf("d)");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (arr[i][j] > arr[0][2])
            {
                printf(" %d,%d", i, j);
            }
        }
    }
    printf("\n");

    printf("e)\n");
    for (i = 0; i < r; i++)
    {
        arr[i][c] = arr[i][2] + arr[i][3];
    }
    c++;
    PrintArray(r, c, arr);

    printf("f)\n");
    for (i = 0; i < r; i++)
    {
        int temp = arr[i][1];
        arr[i][1] = arr[i][c - 1];
        arr[i][c - 1] = temp;
    }
    PrintArray(r, c, arr);

    printf("g)\n");
    for (i = 0; i < c; i++)
    {
        int temp = arr[0][i];
        arr[0][i] = arr[r - 1][i];
        arr[r - 1][i] = temp;
    }
    PrintArray(r, c, arr);
    printf("h) ");
    int new[30], new_ind = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (arr[i][j] % 2 == 0)
            {
                new[new_ind] = arr[i][j];
                new_ind++;
            }
        }
    }
    printf("new=[");
    for (i = 0; i < new_ind; i++)
    {
        printf("%d", new[i]);
        if (i < new_ind - 1)
        {
            printf(" ");
        }
    }
    printf("]\n");

    printf("i)\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(arr[i][j] == num){
                printf("<%d> ",arr[i][j]);
            }
            else{
                printf("%d ",arr[i][j]);
            }
        }
        printf("\n");
    }
}