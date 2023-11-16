#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
     int i;                         //정수형 i 선언 
     int grade[5];                  //정수형 grade[5] 선언  
     int average = 0;               //정수형 average 선언, 0으로 초기화 
     
     for (i=0; i<5; i++)            //i가 0,1,2,3,4, 반복하면 for문 탈출 
     {
         printf("input value (%i) : ", i); //grade[0],[1],[2],[3],[4] 출력 
         scanf("%d", &grade[i]);    //수를 입력하면 grade[0],[1],[2],[3],[4]에 저장 
     }
   
   
   //반복문 및 포인터 문법을 통해 grade 배열값 출력 및 평균 값 계산
     //반복문 돌리기, grade 배열값 출력 
     for (i=0; i<5; i++)
     {
         printf("grade[%i] = %i\n", i, *(grade+i));
         average = average + *(grade+i); 
     } 
   
     //평균값 출력 
     printf("\n"); 
     printf("average : %i\n ", average/5);

  
  system("PAUSE");	
  return 0;
}

