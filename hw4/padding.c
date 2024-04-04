#include <stdio.h>

struct student { // 구조체 student 정의
  char lastName[13]; /* 13 bytes */ // 문자열 멤버변수 lastName
  int studentId; /* 4 bytes */ // int형 멤버변수 studentId
  short grade; /* 2 bytes */ // short형 멤버변수 grade
};

int main()
{
  struct student pst; // student의 인스턴스 pst 선언

  printf("[----- 허제완 2020069031 -----]\n");
  
  printf("size of student = %ld\n", sizeof(struct student)); // student 구조체의 크기 출력
  printf("size of int = %ld\n", sizeof(int)); // int의 크기 출력 
  printf("size of short = %ld\n", sizeof(short)); // short의 크기 출력
  
  return 0;
}
