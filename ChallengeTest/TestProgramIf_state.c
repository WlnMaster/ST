#include <stdio.h>
typedef struct {
    int age ,salary;
    char n;
} Student ;
int isApprove(Student s){
    if(s.age >= 18  && s.age <= 25 && s.salary <= 10000 && s.n == 'Y' ||s.age >= 26  && s.age <= 35 && s.salary >= 10000 && s.salary <= 20000 && s.n == 'Y'){
        return 1;
    }
    return 0;
}
int isReason(Student s){
    if(s.age < 18){
        printf(":age<18");
        if(s.salary > 10000){
            printf(":salary>10000");
        }
        if(s.n == 'N'){
            printf(":WorkPermit");
        }
    }
    else if(s.age > 35){
        printf("age>35");
        if(s.salary > 20000){
            printf(":salary>20000");
        }
        if(s.n == 'N'){
            printf(":WorkPermit");
        }
    }
    if(s.age >= 18  && s.age <= 25 ){
        if(s.salary > 10000){
            printf(":salary>10000");
        }
        if(s.n == 'N'){
            printf(":WorkPermit");
        }
    }
    else if(s.age >= 26  && s.age <= 35 ){
        if(s.salary > 20000){
            printf(":salary>20000");
        }
        if(s.n == 'N'){
            printf(":WorkPermit");
        }
    }
    return 0;
}
int main(){
    Student s;
    scanf("%d %d %c",&s.age,&s.salary,&s.n);
    if(isApprove(s)){
        printf("Approve");
    }else{
        printf("NotApprove");
        isReason(s);
        
    }
    return 0;
}
// อายุ 18 – 25 ปี และ รายได้ ไม่เกิน 10,000

// อายุ 26 – 35 ปี และ รายได้ 10,000 – 20,000

// ต้องเป็นสมาชิกมาแล้วอย่างน้อย 1 ปี

// Y = ผ่าน

// N = ไม่ผ่าน