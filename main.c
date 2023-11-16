#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
     char *pc;
     int *pi;
     double *pd;
     
     pc = (char*)10000; //10000대입. 형변환. 결국 메모리주소(10000번지)를 가리키는 것. 
     pi = (int*)10000;
     pd = (double*)10000;
     
     printf("증가 전 : pc = %p, pi = %p, pd = %p\n", pc, pi, pd);
     
     pc++; //+1씩 해보기 
     pi++;
     pd++;
     
     printf("증가 후 : pc = %p, pi = %p, pd = %p\n", pc, pi, pd); 

  system("PAUSE");	
  return 0;
}

