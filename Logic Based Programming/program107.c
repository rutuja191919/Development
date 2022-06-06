//triangle 


#include<stdio.h>

void Display(int iRow, int iCol)
{
  int i = 0, j = 0;
  
  for(i = 1; i<= iRow; i++)
  {
   for(j = 1; j <= i; j++)
   {
      printf("* ");
   }
   printf("\n");
  }
  
  for(i = iRow-1; i>=1; i--)
  {
   for(j = 1; j <= i; j++)
   {
      printf("* ");
   }
      printf("\n");
  }
  

}

int main()
{
 int iValue1= 0, iValue2 = 0;
 
 printf("Enter rows\n");
 scanf("%d",&iValue1);
 
 printf("Enter columns\n");
 scanf("%d",&iValue2);
 
 Display(iValue1, iValue2);
 
 return 0;
}


//time complexity : O(N\2)   ...N = N*N
