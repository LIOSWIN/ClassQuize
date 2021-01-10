#include<stdio.h>
main ()
{
int i=0;
char c;
char info[20];
c = getchar();
while(c!='*'){
info[i] = c;
i++;
c = getchar();
 }
//info[i] = '\0';
printf(" Hello %s",info);
//printf("\n");
}
