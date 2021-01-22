#include<stdio.h>
int main()
{
    int i=0,num,table;
    printf("how many mulitples do u want\n");
    scanf("%d",&num);
    printf("which table do u want\n");
    scanf("%d",&table);
    while(i<=num){
        int mult= table * i;
        printf("%d * %d = %d\n",table,i,mult);
        i++;
    }
printf("thanks dude");
return 0;
}
