#include<stdio.h>
#include<stdlib.h>

void main()
{
  int **x; // int형 2중 포인터 x 선언

  printf("[----- 허제완 2020069031 -----]\n");

  printf("sizeof(x) = %lu\n", sizeof(x)); // x의 크기(포인터의 크기) 출력
  printf("sizeof(*x) = %lu\n", sizeof(*x)); // x가 가리키는 값의 크기(포인터의 크기) 출력
  printf("sizeof(**x) = %lu\n", sizeof(**x)); // *x가 가리키는 값(int의 크기) 출력

}
