#include<stdio.h>
int age;
int check_leapYear(int year){ //checks whether the year passed is leap year or not
    //if(year % 400 == 0 || (year % 100!=0 && year % 4 ==0
      if(year % 4 == 0)
       return 1;
    return 0;
}
int getAge(int year){
//enter the year born to calaculate ones age
age = 2021 - year;
return age;
}

int getNumberOfDays(int month,int year){ //returns the number of days in given month
   switch(month){                          //and year
      case 1 : return(31);
      case 2 : if(check_leapYear(year)==1)
		 return(29);
	       else
		 return(28);
      case 3 : return(31);
      case 4 : return(30);
      case 5 : return(31);
      case 6 : return(30);
      case 7 : return(31);
      case 8 : return(31);
      case 9 : return(30);
      case 10: return(31);
      case 11: return(30);
      case 12: return(31);
      default: return(-1);
   }
}
int main()
{   int x,y;
    int month,year;
    printf("enter month and year to get number of days,mm yyyy\n");
    scanf("%d%d",&month,&year);
   x = getNumberOfDays(month,year);
   printf("%d\n",x);
   printf("Enter year of birth\n");
   scanf("%d",&year);
   y = getAge(year);
   printf("%d",y);

}
