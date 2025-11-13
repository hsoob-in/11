#include <stdio.h>
#include <stdlib.h>

void main(void)
{
  int i = 300; //300으로 변경해서도 해보기 
  
  int *pi=&i;
  char *pc=&i;
  
  
  printf("%i, %i, %i\n", i, *pi, *pc);
  // 마지막이 44로 나오는 이유: byte 1개로 나타낼 수 없어서 byte를 2개 씀 

  system("PAUSE");	
  return 0;
}
