#include <stdio.h>

int main()
{
    int sub1,sub2,sub3,total,average;
    printf("Enter the marks");
    scanf("%d",&sub1);
    scanf("%d",&sub2);
     scanf("%d",&sub3);
     total=sub1+sub2+sub3;
    printf("\nMarks:%d %d %d\n",sub1,sub2,sub3);
     printf("Total marks: %d\n", total); 
     average=total/3;
      printf("Average: %d\n", average); 
     if(average>=90)
     {
         printf("Grade:A");
     }
     else if(average>=75&&average<90)
     {
         printf("Grade:B");
     }
else if(average<75&&average>=50)
{
printf("Grade:C");
}
else
{
printf("Grade:F");
}
}
