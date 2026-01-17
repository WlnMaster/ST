#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score;
    int i = 0,n;
    scanf("%d",&n);
        while (i < n)
        {
            scanf("%d",&score);
            if(score >= 68){
                if(score > 100){
                    printf("error score\n");
                    return 0;
                }
                if(score >= 85)printf("%d(A)\n",score); 
                else if(score >= 75)printf("%d(B)\n",score);
                else if(score >= 68){
                    printf("%d(C)\n",score);
                }
                
            }
            else{
                if(score < 0){
                    printf("error score\n");
                    return 0;
                }
                if(score < 55){
                    printf("%d(F)\n",score); 
                }
                else{
                    printf("%d(D)\n",score);
                }
            }
            i++;
        }
        
        


    return 0;
}
// ข้อ 6 จาก S.15 ไม่ใช้ && || !  ให้ตรวจสอบคะแนน >=68 ก่อน และให้ผลลัพธ์คงเดิม

// CASE 6A
// CASE 6B
// scanf(“%d”,&score);
// if (score >= 68) {
// 	// A B C
// } else {
// // D F
// }
// scanf(“%d”,&score);
// if (score < 68) {
// 	// D F
// } else {
// // A B C
// }


// กำหนดข้อมูลทดสอบดังนี้ 87(A),63(D),79(B),12(F),71(C)

// ***Bonus1 คนที่ได้เกรด C ขาดอีกกี่คะแนนได้ B 
// ***Bonus2 คะแนนไม่อยู่ระหว่าง 0-100 แจ้ง error score

// scanf("%d",&score);
// if (score >= 85)
// printf("A");
// else if (score >= 75)
// printf("B");
// else if (score >= 68)
// printf("C");
// else if (score >= 55)
// printf("D");
// else printf("F");
