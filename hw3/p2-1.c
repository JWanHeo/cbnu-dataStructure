#include <stdio.h>

#define MAX_SIZE 100 // 매크로 정의

float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);

float input[MAX_SIZE], answer; // 길이가 100인 float형 배열 input과 float형 변수 answer 선언
int i; // int형 변수 i 선언
void main(void)
{
  for(i=0; i < MAX_SIZE; i++) 
    input[i] = i; // 0 ~ 99까지 각 인덱스에 요소 저장

  printf("[----- 허제완 2020069031 -----]\n");

  /* for checking call by reference */
  printf("--------------------------------------\n");
  printf(" sum1(input, MAX_SIZE) \n");
  printf("--------------------------------------\n");
  printf("input \t= %p\n", input); // input의 시작 주소 출력

  answer = sum1(input, MAX_SIZE); // float형 배열 input을 순회하며 요소 100개를 모두 더한 값을 answer에 저장
  printf("The sum is: %f\n\n", answer); // answer의 값(0 ~ 99까지의 합) 출력
  
  printf("--------------------------------------\n");
  printf(" sum2(input, MAX_SIZE) \n");
  printf("--------------------------------------\n");
  printf("input \t= %p\n", input); // 배열 input의 시작 주소 출력
  
  answer = sum2(input, MAX_SIZE); // 베이스 포인터인 input으로부터 100*4byte의 주소까지 순회하며 각 주소에 저장된 값들을 합하여 answer에 저장
  printf("The sum is: %f\n\n", answer); // answer의 값(0 ~ 99까지의 합) 출력
  
  printf("--------------------------------------\n");
  printf(" sum3(MAX_SIZE, input) \n");
  printf("--------------------------------------\n");
  printf("input \t= %p\n", input); // input의 시작 주소 출력
  
  answer = sum3(MAX_SIZE, input); // 베이스 포인터인 input으로부터 100*4byte의 주소까지 순회하며 각 주소에 저장된 값들을 합하여 answer에 저장
  printf("The sum is: %f\n\n", answer); // answer의 값(0 ~ 99까지의 합) 반환
  
}

float sum1(float list[], int n) // float형 배열 list와 순회할 최종 인덱스 n을 파라미터로 받는 함수
{
  printf("list \t= %p\n", list); // list의 시작 주소 출력
  printf("&list \t= %p\n\n", &list); // list의 주소 출력

  int i; // 반복 변수 i 선언
  float tempsum = 0; // 최종 반환값을 0으로 초기화
  
  for(i = 0; i < n; i++)
    tempsum += list[i]; // 배열의 0번째부터 n-1번째 요소까지 순회하며 tempsum에 합산
    
  return tempsum; // list의 n-1번째까지 요소들의 합 반환
}

float sum2(float *list, int n) // float형 포인터 list와 반복 횟수 n을 파라미터로 받는 함수
{
  printf("list \t= %p\n", list); // list의 시작 주소를 출력
  printf("&list \t= %p\n\n", &list); // list의 주소 출력

  int i; // 반복 변수 i
  float tempsum = 0; // 최종 반환값을 0으로 초기화
  
  for(i = 0; i < n; i++) // n번 반복 수행
    tempsum += *(list + i); // list로부터 i*4byte 떨어진 곳에 저장된 값들을 합산
  
  return tempsum; // 반복문을 수행하고 난 후의 합계를 반환
}

/* stack variable reuse test */
float sum3(int n, float *list) // sum2와 동일한 내용의 함수
{
  printf("list \t= %p\n", list);
  printf("&list \t= %p\n\n", &list);

  int i;
  float tempsum = 0;

  for(i = 0; i < n; i++)
    tempsum += *(list + i);

  return tempsum;
}