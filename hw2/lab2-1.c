#include <stdio.h>

int main()
{
  char charType; // char type 1byte ���� ����
  int integerType; // int type 4byte ���� ����
  float floatType; // float type 4byte ���� ����
  double doubleType; // double type 8byte ���� ����
 
  printf("[----- ������ 2020069031 -----]\n\n");

  printf("Size of char: %ld byte\n",sizeof(charType)); // charType ������ ũ��(byte) ��� => 1byte
  printf("Size of int: %ld bytes\n",sizeof(integerType)); // integerType ������ ũ��(byte) ��� => 4byte
  printf("Size of float: %ld bytes\n",sizeof(floatType)); // floatType ������ ũ��(byte) ��� => 4byte
  printf("Size of double: %ld bytes\n",sizeof(doubleType)); // doubleType ������ ũ��(byte) ��� => 8byte
  printf("-----------------------------------------\n"); 
  printf("Size of char: %ld byte\n",sizeof(char)); // charType�� ũ��(byte) ��� => 1byte
  printf("Size of int: %ld bytes\n",sizeof(int)); // integerType�� ũ��(byte) ��� => 4byte
  printf("Size of float: %ld bytes\n",sizeof(float)); // floatType�� ũ��(byte) ��� => 4byte
  printf("Size of double: %ld bytes\n",sizeof(double)); // doubleType�� ũ��(byte) ��� => 8byte
  printf("-----------------------------------------\n");
  printf("Size of char*: %ld byte\n",sizeof(char*)); // char Ÿ�� �������� ũ�� ��� => 4byte
  printf("Size of int*: %ld bytes\n",sizeof(int*)); // int Ÿ�� �������� ũ�� ��� => 4byte
  printf("Size of float*: %ld bytes\n",sizeof(float*)); // float Ÿ�� �������� ũ�� ��� => 4byte
  printf("Size of double*: %ld bytes\n",sizeof(double*)); // double Ÿ�� �������� ũ�� ��� => 4byte
  /* 32bit �����Ϸ����� ������ �����Ƿ� ��� �������� ũ��� 4byte(32bit)�̴�. */

  return 0;  
}
