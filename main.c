#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i =300; //300으로 변경해서도 해보기.
    
    //정수형 포인터 변수 pi 선언. 
    //pi가 i를 가리키게 함. 
    int* pi = &i; 
    
    //문자형 포인터 변수 pc 선언.
    //pc가 i를 가리키게 함. 
    char* pc = &i;
    
    printf("%i, %i, %i\n", i, *pi, *pc);
  
  system("PAUSE");	
  return 0;
}
