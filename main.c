#include <stdio.h>
#include <stdlib.h>

void swap (int *x, int *y)
{
     int temp;
     
     temp = *x; //*�ٿ���� �Ѵ�.  
     *x = *y;
     *y = temp;
}

int main(int argc, char *argv[])
{
     int a = 3;
     int b = 5;
     
     swap(&a, &b); //a,b�� �ƴ�,, ���� �Լ��� �����ͷ� �޴� �����̱� ������ ���� �ּҰ�(&a, &b)�� �־���� �Ѵ�.  
     printf("a : %i, b : %i\n", a, b);

  
  system("PAUSE");	
  return 0;
}

