#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
     char *pc;
     int *pi;
     double *pd;
     
     pc = (char*)10000; //10000����. ����ȯ. �ᱹ �޸��ּ�(10000����)�� ����Ű�� ��. 
     pi = (int*)10000;
     pd = (double*)10000;
     
     printf("���� �� : pc = %p, pi = %p, pd = %p\n", pc, pi, pd);
     
     pc++; //+1�� �غ��� 
     pi++;
     pd++;
     
     printf("���� �� : pc = %p, pi = %p, pd = %p\n", pc, pi, pd); 

  system("PAUSE");	
  return 0;
}

