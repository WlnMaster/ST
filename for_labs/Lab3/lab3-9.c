#include <stdio.h>
int main() {
	int month;
	scanf("%d",&month);
	switch (month) {
		case 12 : 
		case 1	:
		case 2	: printf("Winter"); break;
        case 3  : 
		case 4	:
		case 5	: printf("Spring"); break;
        case 6  : 
		case 7	:
		case 8	: printf("Summer"); break;
        case 9  : 
		case 10	:
		case 11	: printf("Autumn"); break;
		default : printf("Invalid");
	}

return 0;
}
// #include <stdio.h>
// int main (void)
// {
//     int month;
//     scanf("%d",&month);
//     if (month == 12||month == 1||month == 2){
//         printf("Winter");
//     }
        
//     else if (month == 3||month == 4||month == 5){
//     printf("Spring");
//     }

//     else if (month == 6||month == 7||month == 8)
//     printf("Summer");
//     else if (month == 9||month == 10||month == 11)
//     printf("Autumn");
//     else printf(" No season");
//     return 0;
// }