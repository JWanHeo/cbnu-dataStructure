#include <stdio.h>

int main()
{
  char charType; // char type 1byte 변수 선언
  int integerType; // int type 4byte 변수 선언
  float floatType; // float type 4byte 변수 선언
  double doubleType; // double type 8byte 변수 선언
 
  printf("[----- 허제완 2020069031 -----]\n\n");

  printf("Size of char: %ld byte\n",sizeof(charType)); // charType 변수의 크기(byte) 출력 => 1byte
  printf("Size of int: %ld bytes\n",sizeof(integerType)); // integerType 변수의 크기(byte) 출력 => 4byte
  printf("Size of float: %ld bytes\n",sizeof(floatType)); // floatType 변수의 크기(byte) 출력 => 4byte
  printf("Size of double: %ld bytes\n",sizeof(doubleType)); // doubleType 변수의 크기(byte) 출력 => 8byte
  printf("-----------------------------------------\n"); 
  printf("Size of char: %ld byte\n",sizeof(char)); // charType의 크기(byte) 출력 => 1byte
  printf("Size of int: %ld bytes\n",sizeof(int)); // integerType의 크기(byte) 출력 => 4byte
  printf("Size of float: %ld bytes\n",sizeof(float)); // floatType의 크기(byte) 출력 => 4byte
  printf("Size of double: %ld bytes\n",sizeof(double)); // doubleType의 크기(byte) 출력 => 8byte
  printf("-----------------------------------------\n");
  printf("Size of char*: %ld byte\n",sizeof(char*)); // char 타입 포인터의 크기 출력 => 4byte
  printf("Size of int*: %ld bytes\n",sizeof(int*)); // int 타입 포인터의 크기 출력 => 4byte
  printf("Size of float*: %ld bytes\n",sizeof(float*)); // float 타입 포인터의 크기 출력 => 4byte
  printf("Size of double*: %ld bytes\n",sizeof(double*)); // double 타입 포인터의 크기 출력 => 4byte
  /* 32bit 컴파일러에서 컴파일 했으므로 모든 포인터의 크기는 4byte(32bit)이다. */

  return 0;  
}
