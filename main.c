#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i = 10;
  char c = 'a';
  
  //������ ������ ���� iptr ����.
  //iptr�� i�� ����Ű�� ��.
  int* iptr = &i;

  //������ ������ ���� cptr ����.
  //cptr�� c�� ����Ű�� ��.
  char* cptr = &c; 
  //������ ������ ���� iptr2 ����.
  //iptr2�� iptr�� ����Ű�� ���� �����ϰ� ����Ű�� ��.
  int* iptr2 = iptr; //�������̱� ������ �����ּҸ� �̹� ���� �־ &�Ⱥٿ��൵ ��. 
 
  
  
  
  printf("i : %p\n%p(size : %i)\n", iptr, &i, sizeof(iptr));
  printf("c : %p\n%p(size : %i)\n", cptr, &c, sizeof(cptr));
  printf("iptr2 ; %p, %i\n", iptr2, *iptr2);
  
  system("PAUSE");	
  return 0;
}
