#include <stdio.h>

int main() 
{
  int i, *p; // 정수형 변수 i, 정수형 포인터 변수 p 선언. 이 때 p는 null pointer
  i = 10; // i에 10 할당

  printf("value of i = %d\n", i); // i의 값 출력
  printf("address of i = %p\n", &i); // i의 메모리 주소 출력
  printf("value of p = %p\n", p); // p의 값(null) 출력
  printf("address of p = %p\n", &p); // p의 메모리 주소 출력
  
  p = &i; // 포인터 변수 p에 i의 메모리 주소 할당
  
  printf("\n\n----- after p = &i ------------\n\n");
  printf("value of p = %p\n", p); // p의 값(i의 메모리 주소) 출력
  printf("address of p = %p\n", &p); // p의 메모리 주소 출력
  printf("dereferencing *p = %d\n", *p); // p가 저장하고 있는 주소가 가리키는 값(i의 값) 출력 
  
  return 0;
}
