#include <stdio.h>
#include <stdlib.h>
 

int main(void)
{
  int i;
  int sum=0;
  int grade[5];
  int *p = grade;

  
  for(i=0;i<5;i++)
  {
   printf("grade[%i]=", i);
   scanf("%d", &grade[i]);
  }
  
  
  for(i=0;i<5;i++)
  {
   
   printf("grade[%i]= %i\n", i, p[i]);
   sum = sum + p[i];
   
  }
  
  printf("avg: %i\n", sum/5);


  system("PAUSE");	
  return 0;
}
