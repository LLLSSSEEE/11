#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i =300; //300���� �����ؼ��� �غ���.
    
    //������ ������ ���� pi ����. 
    //pi�� i�� ����Ű�� ��. 
    int* pi = &i; 
    
    //������ ������ ���� pc ����.
    //pc�� i�� ����Ű�� ��. 
    char* pc = &i;
    
    printf("%i, %i, %i\n", i, *pi, *pc);
  
  system("PAUSE");	
  return 0;
}
