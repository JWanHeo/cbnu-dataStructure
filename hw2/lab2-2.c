#include <stdio.h>

int main()
{
  int i; // int type 변수 i 선언
  int *ptr; // int type pointer 변수 ptr 선언 => 초기화 전이므로 null pointer
  int **dptr; // int type double pointer 변수 dptr 선언 => 초기화 전이므로 null pointer
  i = 1234; // 변수 i 초기화

  printf("[----- 허제완 2020069031 -----]\n\n");

  printf("[checking values before ptr = &i] \n");
  printf("value of i == %d\n", i); // 변수 i의 값(1234) 출력
  printf("address of i == %p\n", &i); // 변수 i의 메모리 주소 출력
  printf("value of ptr == %p\n", ptr); // 포인터 변수 ptr의 값(0) 출력
  printf("address of ptr == %p\n", &ptr); // 포인터 변수 ptr의 메모리 주소 출력

  ptr = &i; /* ptr is now holding the address of i */
  
  printf("\n[checking values after ptr = &i] \n");
  printf("value of i == %d\n", i); // 변수 i의 값(1234) 출력 : 변동 없음
  printf("address of i == %p\n", &i); // 변수 i의 메모리 주소 출력 : 변동 없음
  printf("value of ptr == %p\n", ptr); // ptr의 값(i의 메모리 주소) 출력
  printf("address of ptr == %p\n", &ptr); // ptr의 메모리 주소 출력 : 변동 없음
  printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 메모리 주소의 변수 i가 가지고 있는 값(1234) 출력

  dptr = &ptr; /* dptr is now holding the address of ptr */
  
  printf("\n[checking values after dptr = &ptr] \n");
  printf("value of i == %d\n", i); // 변수 i의 값(1234) 출력 : 변동 없음
  printf("address of i == %p\n", &i); // 변수 i의 메모리 주소 출력 : 변동 없음
  printf("value of ptr == %p\n", ptr); // ptr의 값(i의 메모리 주소) 출력
  printf("address of ptr == %p\n", &ptr); // ptr의 메모리 주소 출력 : 변동 없음
  printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 메모리 주소의 변수 i가 가지고 있는 값(1234) 출력
  printf("value of dptr == %p\n", dptr); // dptr의 값(ptr의 주소) 출력
  printf("address of dptr == %p\n", &dptr); // dptr의 메모리 주소 출력
  printf("value of *dptr == %p\n", *dptr); // dptr이 가리키는 메모리 주소의 변수 ptr가 가지고 있는 값(i의 주소) 출력
  printf("value of **dptr == %d\n", **dptr); // 변수 i의 값(1234) 출력
  
  *ptr = 7777; /* changing the value of *ptr */
  
  printf("\n[after *ptr = 7777] \n");
  printf("value of i == %d\n", i); // 변수 i의 값(7777) 출력
  printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 변수 i의 값(7777) 출력
  printf("value of **dptr == %d\n", **dptr); // dptr이 가리키는 주소가 가리키는 변수 i의 값(7777) 출력
  
  **dptr = 8888; /* changing the value of **dptr */
  
  printf("\n[after **dptr = 8888] \n"); 
  printf("value of i == %d\n", i); // 변수 i의 값(8888) 출력
  printf("value of *ptr == %d\n", *ptr); // ptr이 가리키는 변수 i의 값(8888) 출력
  printf("value of **dptr == %d\n", **dptr); // dptr이 가리키는 주소가 가리키는 변수 i의 값(8888) 출력
  
  return 0;
}