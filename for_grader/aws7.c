#include <stdio.h>
int main(){
    char s[10];
    scanf("%s",s);
    for(int i = 0 ; s[i] !=  '\0';i++){
        if(s[i] == '0') printf("Zero");
        else if (s[i] == '1') printf("One");
        else if (s[i] == '2') printf("Two");
        else if (s[i] == '3') printf("Three");
        else if (s[i] == '4') printf("Four");
        else if (s[i] == '5') printf("Five");
        else if (s[i] == '6') printf("Six");
        else if (s[i] == '7') printf("Seven");
        else if (s[i] == '8') printf("Eight");
        else if (s[i] == '9') printf("Nine");
        if(s[i] != '\0') printf(" ");
    }
    return 0;
}