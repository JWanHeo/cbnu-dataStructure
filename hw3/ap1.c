#include <stdio.h>
#include <stdlib.h>

void main()
{
  int list[5]; // 길이가 5인 int형 배열 선언
  int *plist[5] = {NULL,}; // 길이가 5인 int형 포인터 배열 선언 및 null로 초기화

  plist[0] = (int *)malloc(sizeof(int)); // 4바이트 공간 동적 할당 후 plist의 0번째 요소에 주소 저장
  
  list[0] = 1; // list의 0번째 요소로 1 저장
  list[1] = 100; // list의 1번째 요소로 100 저장
  
  *plist[0] = 200; // 포인터 배열 plist의 0번째 요소가 가리키는 영역에 200 저장

  printf("[----- 허제완 2020069031 -----]\n");
  
  printf("list[0] = %d\n", list[0]); // list의 0번째 요소의 값 1 출력
  printf("&list[0] = %p\n", &list[0]); // list의 시작 주소 출력
  printf("list = %p\n", list); // list의 시작 주소 출력
  printf("&list = %p\n", &list); // list의 시작 주소 출력
  
  printf("----------------------------------------\n\n");
  printf("list[1] = %d\n", list[1]); // list의 1번째 요소의 값 100 출력
  printf("&list[1] = %p\n", &list[1]); // list의 1번째 요소의 주소 출력
  printf("*(list+1) = %d\n", *(list + 1)); // list의 시작 주소로부터 4바이트 뒤의 주소의 값 출력
  printf("list+1 = %p\n", list+1); // list의 시작 주소로부터 4바이트 뒤의 주소 출력
  
  printf("----------------------------------------\n\n");
  
  printf("*plist[0] = %d\n", *plist[0]); // plist의 0번째 요소가 가리키는 주소의 값 200 출력
  printf("&plist[0] = %p\n", &plist[0]); // plist의 0번째 인덱스의 주소 출력
  printf("&plist = %p\n", &plist); // plist의 시작 주소 출력
  printf("plist = %p\n", plist); // plist의 시작 주소 출력
  printf("plist[0] = %p\n", plist[0]); // plist의 0번째 값(동적 할당된 영역의 주소) 출력
  printf("plist[1] = %p\n", plist[1]); // plist의 1번째 요소 0 출력
  printf("plist[2] = %p\n", plist[2]); // plist의 2번째 요소 0 출력
  printf("plist[3] = %p\n", plist[3]); // plist의 3번째 요소 0 출력
  printf("plist[4] = %p\n", plist[4]); // plist의 4번째 요소 0 출력
  
  free(plist[0]); // 할당했던 영역 해제
}