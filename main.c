#include <stdio.h>
#include <stdlib.h>

void swap (int *x, int *y)
{
     int temp;
     
     temp = *x; //*붙여줘야 한다.  
     *x = *y;
     *y = temp;
}

int main(int argc, char *argv[])
{
     int a = 3;
     int b = 5;
     
     swap(&a, &b); //a,b가 아닌,, 이제 함수를 포인터로 받는 형태이기 때문에 변수 주소값(&a, &b)을 넣어줘야 한다.  
     printf("a : %i, b : %i\n", a, b);

  
  system("PAUSE");	
  return 0;
}

