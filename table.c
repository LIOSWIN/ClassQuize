#include<stdio.h>
int main()
{
    int i,num,table;
    printf("how many mulitples do u want\n");
    scanf("%d",&num);
    printf("which table do u want\n");
    scanf("%d",&table);
    for(i = 0;i<=num;i++)
    { int mult= table * i;
        printf("%d * %d = %d\n",table,i,mult);
    }
    printf("thanks dude");
    return 0;
}
