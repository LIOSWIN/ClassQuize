
#include<stdio.h>
#include<ctype.h>
main (){
char password[15];
//printf("Your Password: ");
puts("Ur password");
gets(password);
printf("\n");
//puts("\n");
(isdigit(password[0]))? printf("You cant start with a digit") : printf("GOOD");
printf("\n");
}
