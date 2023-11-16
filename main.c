#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i = 10;
  char c = 'a';
  
  //정수형 포인터 변수 iptr 선언.
  //iptr이 i를 가리키게 함.
  int* iptr = &i;

  //문자형 포인터 변수 cptr 선언.
  //cptr이 c를 가리키게 함.
  char* cptr = &c; 
  //정수형 포인터 변수 iptr2 선언.
  //iptr2가 iptr이 가리키는 곳을 동일하게 가리키게 함.
  int* iptr2 = iptr; //포인터이기 때문에 변수주소를 이미 갖고 있어서 &안붙여줘도 됨. 
 
  
  
  
  printf("i : %p\n%p(size : %i)\n", iptr, &i, sizeof(iptr));
  printf("c : %p\n%p(size : %i)\n", cptr, &c, sizeof(cptr));
  printf("iptr2 ; %p, %i\n", iptr2, *iptr2);
  
  system("PAUSE");	
  return 0;
}
