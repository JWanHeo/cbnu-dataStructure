#include <stdio.h>
#include <stdlib.h>

void main()
{
  int list[5]; // 길이가 5인 int형 배열 선언
  int *plist[5]; // 길이가 5인 int형 포인터 배열 선언

  list[0] = 10; // list의 0번째 인덱스에 10 저장
  list[1] = 11; // list의 1번째 인덱스에 11 저쟝
  
  plist[0] = (int*)malloc(sizeof(int)); // 4바이트 공간 동적 할당 후 할당한 공간의 주소를 plist의 0번째 공간에 저장

    printf("[----- 허제완 2020069031 -----]\n");
  
  printf("list[0] \t= %d\n", list[0]); // list의 0번째 값 10 출력
  printf("list \t\t= %p\n", list); // list의 시작 주소가 가리키는 곳의 값 10 출력
  printf("&list[0] \t= %p\n", &list[0]); // list의 시작 주소 출력
  printf("list + 0 \t= %p\n", list+0); // list의 시작 주소 출력
  printf("list + 1 \t= %p\n", list+1); // list의 시작 주소로부터 4바이트 뒤의 주소 출력
  printf("list + 2 \t= %p\n", list+2); // list의 시작 주소로부터 8바이트 뒤의 주소 출력
  printf("list + 3 \t= %p\n", list+3); // list의 시작 주소로부터 12바이트 뒤의 주소 출력
  printf("list + 4 \t= %p\n", list+4); // list의 시작 주소로부터 16바이트 뒤의 주소 출력
  printf("&list[4] \t= %p\n", &list[4]); // list의 마지막 인덱스의 주소 출력
  
  free(plist[0]); // 동적으로 할당했던 공간 해제
}