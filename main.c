#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
     int i;                         //������ i ���� 
     int grade[5];                  //������ grade[5] ����  
     int average = 0;               //������ average ����, 0���� �ʱ�ȭ 
     
     for (i=0; i<5; i++)            //i�� 0,1,2,3,4, �ݺ��ϸ� for�� Ż�� 
     {
         printf("input value (%i) : ", i); //grade[0],[1],[2],[3],[4] ��� 
         scanf("%d", &grade[i]);    //���� �Է��ϸ� grade[0],[1],[2],[3],[4]�� ���� 
     }
   
   
   //�ݺ��� �� ������ ������ ���� grade �迭�� ��� �� ��� �� ���
     //�ݺ��� ������, grade �迭�� ��� 
     for (i=0; i<5; i++)
     {
         printf("grade[%i] = %i\n", i, *(grade+i));
         average = average + *(grade+i); 
     } 
   
     //��հ� ��� 
     printf("\n"); 
     printf("average : %i\n ", average/5);

  
  system("PAUSE");	
  return 0;
}

