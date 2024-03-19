#include <stdio.h>

int main()
{
  int i; // int type ���� i ����
  int *ptr; // int type pointer ���� ptr ���� => �ʱ�ȭ ���̹Ƿ� null pointer
  int **dptr; // int type double pointer ���� dptr ���� => �ʱ�ȭ ���̹Ƿ� null pointer
  i = 1234; // ���� i �ʱ�ȭ

  printf("[----- ������ 2020069031 -----]\n\n");

  printf("[checking values before ptr = &i] \n");
  printf("value of i == %d\n", i); // ���� i�� ��(1234) ���
  printf("address of i == %p\n", &i); // ���� i�� �޸� �ּ� ���
  printf("value of ptr == %p\n", ptr); // ������ ���� ptr�� ��(0) ���
  printf("address of ptr == %p\n", &ptr); // ������ ���� ptr�� �޸� �ּ� ���

  ptr = &i; /* ptr is now holding the address of i */
  
  printf("\n[checking values after ptr = &i] \n");
  printf("value of i == %d\n", i); // ���� i�� ��(1234) ��� : ���� ����
  printf("address of i == %p\n", &i); // ���� i�� �޸� �ּ� ��� : ���� ����
  printf("value of ptr == %p\n", ptr); // ptr�� ��(i�� �޸� �ּ�) ���
  printf("address of ptr == %p\n", &ptr); // ptr�� �޸� �ּ� ��� : ���� ����
  printf("value of *ptr == %d\n", *ptr); // ptr�� ����Ű�� �޸� �ּ��� ���� i�� ������ �ִ� ��(1234) ���

  dptr = &ptr; /* dptr is now holding the address of ptr */
  
  printf("\n[checking values after dptr = &ptr] \n");
  printf("value of i == %d\n", i); // ���� i�� ��(1234) ��� : ���� ����
  printf("address of i == %p\n", &i); // ���� i�� �޸� �ּ� ��� : ���� ����
  printf("value of ptr == %p\n", ptr); // ptr�� ��(i�� �޸� �ּ�) ���
  printf("address of ptr == %p\n", &ptr); // ptr�� �޸� �ּ� ��� : ���� ����
  printf("value of *ptr == %d\n", *ptr); // ptr�� ����Ű�� �޸� �ּ��� ���� i�� ������ �ִ� ��(1234) ���
  printf("value of dptr == %p\n", dptr); // dptr�� ��(ptr�� �ּ�) ���
  printf("address of dptr == %p\n", &dptr); // dptr�� �޸� �ּ� ���
  printf("value of *dptr == %p\n", *dptr); // dptr�� ����Ű�� �޸� �ּ��� ���� ptr�� ������ �ִ� ��(i�� �ּ�) ���
  printf("value of **dptr == %d\n", **dptr); // ���� i�� ��(1234) ���
  
  *ptr = 7777; /* changing the value of *ptr */
  
  printf("\n[after *ptr = 7777] \n");
  printf("value of i == %d\n", i); // ���� i�� ��(7777) ���
  printf("value of *ptr == %d\n", *ptr); // ptr�� ����Ű�� ���� i�� ��(7777) ���
  printf("value of **dptr == %d\n", **dptr); // dptr�� ����Ű�� �ּҰ� ����Ű�� ���� i�� ��(7777) ���
  
  **dptr = 8888; /* changing the value of **dptr */
  
  printf("\n[after **dptr = 8888] \n"); 
  printf("value of i == %d\n", i); // ���� i�� ��(8888) ���
  printf("value of *ptr == %d\n", *ptr); // ptr�� ����Ű�� ���� i�� ��(8888) ���
  printf("value of **dptr == %d\n", **dptr); // dptr�� ����Ű�� �ּҰ� ����Ű�� ���� i�� ��(8888) ���
  
  return 0;
}