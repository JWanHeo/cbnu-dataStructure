#include <stdio.h>

void print_one(int *ptr, int rows);

int main()
{
  int one[] = {0, 1, 2, 3, 4}; // int형 배열 one 선언 및 초기화
  printf("[----- 허제완 2020069031 -----]\n");

  printf("one = %p\n", one); // one의 시작 주소 출력
  printf("&one = %p\n", &one); // one의 주소 출력
  printf("&one[0] = %p\n", &one[0]); // one의 0번째 요소의 주소(one의 시작 주소) 출력
  printf("\n");
  
  printf("------------------------------------\n");
  printf(" print_one(&one[0], 5) \n");
  printf("------------------------------------\n");
  print_one(&one[0], 5); // one의 0번째 요소부터 4번째 요소까지의 주소와 그 값을 출력 
  
  printf("------------------------------------\n");
  printf(" print_one(one, 5) \n");
  printf("------------------------------------\n");
  print_one(one, 5); // one의 0번째 요소부터 4번째 요소까지의 주소와 그 값을 출력
  
  return 0;
}

void print_one(int *ptr, int rows) // int형 포인터 ptr과 배열의 길이 rows를 파라미터로 받는 함수
{/* print out a one-dimensional array using a pointer */
  int i;// 반복 변수 선언
  printf ("Address \t Contents\n");
  for (i = 0; i < rows; i++) // row만큼 반복 수행
    printf("%p \t %5d\n", ptr + i, *(ptr + i)); // (ptr의 주소 + i*4byte)의 주소와 그 주소에 저장된 값 출력
  printf("\n");
}
