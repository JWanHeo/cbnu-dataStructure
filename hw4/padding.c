#include <stdio.h>

struct student { // ����ü student ����
  char lastName[13]; /* 13 bytes */ // ���ڿ� ������� lastName
  int studentId; /* 4 bytes */ // int�� ������� studentId
  short grade; /* 2 bytes */ // short�� ������� grade
};

int main()
{
  struct student pst; // student�� �ν��Ͻ� pst ����

  printf("[----- ������ 2020069031 -----]\n");
  
  printf("size of student = %ld\n", sizeof(struct student)); // student ����ü�� ũ�� ���
  printf("size of int = %ld\n", sizeof(int)); // int�� ũ�� ��� 
  printf("size of short = %ld\n", sizeof(short)); // short�� ũ�� ���
  
  return 0;
}
