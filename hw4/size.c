#include<stdio.h>
#include<stdlib.h>

void main()
{
  int **x; // int�� 2�� ������ x ����

  printf("[----- ������ 2020069031 -----]\n");

  printf("sizeof(x) = %lu\n", sizeof(x)); // x�� ũ�� ���
  printf("sizeof(*x) = %lu\n", sizeof(*x)); // x�� ����Ű�� ���� ũ�� ���
  printf("sizeof(**x) = %lu\n", sizeof(**x)); // *x�� ����Ű�� �� ���

}
