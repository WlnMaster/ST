#include<stdio.h> //aws11
#include<math.h>
#include<stdlib.h>
void PrintArray(int arr[],int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
}
void a(int arr[],int s){
    int i;
    for(i = 0 ;i<4;i++){
        printf("%d",arr[i]);
        printf(" ");
    }
}
void b(int arr[], int s){
    int i;
    for(i=0;i<s;i++){
        if(arr[i]>arr[2]){
            printf("%d",arr[i]);
            printf(" ");
        }
    }
}
void c(int arr[], int s){
    int i;
    for (i = 0; i < s; i++){
        if (arr[i] > arr[2]){
            printf("%d", i);
            printf(" ");
        }
    }
}
void f(int arr[], int s){
        if(arr[2-1] > arr[6-1]){
            printf("2");
        }
        else{
            printf("6");
        }
}
void g(int arr[], int s){
    int temp;
    temp = arr[1];
    arr[1] = arr[s-1];
    arr[s-1] = temp;

}
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("a) ");
    a(arr, n);printf("\n");
    printf("b) ");
    b(arr,n);printf("\n");
    printf("c) ");
    c(arr,n);printf("\n");
    printf("d) ");
    arr[n] = arr[2]+arr[3];
    n++;
    PrintArray(arr, n);printf("\n");
    printf("e) ");
    arr[3] = abs(arr[2]-arr[4]);
    PrintArray(arr, n);printf("\n");
    printf("f) ");
    f(arr,n);printf("\n");
    printf("g) ");
    g(arr,n);
    PrintArray(arr,n);printf("\n");
    printf("h) ");
    int new[n] , new_ind = 0;
    for(i=0;i<n;i++){
        if(arr[i]%2 == 0){
            new[new_ind] = arr[i];
            new_ind++;
        }
    }
    printf("new=[");
    for (int i = 0; i < new_ind; i++){
        printf("%d", new[i]);
        if (i < new_ind - 1){
            printf(" ");
        }
    }
    printf("]\n");
}