#include <stdio.h>

struct student1 { // student1 구조체 정의
  char lastName; // char형 멤버변수 lastName 
  int studentId; // int형 멤버 변수 studentId
  char grade; // char형 멤버변수 grade
};

typedef struct {  // typedef를 통한 student2 구조체 정의
  char lastName; // char형 멤버변수 lastName
  int studentId; // int형 멤버 변수 studentId
  char grade; // char형 멤버변수 grade
} student2;

int main() {

  // student1의 인스턴스 st1 선언 및 초기화. typedef를 통해 정의하지 않았으므로 struct student1 형태로 선언
  struct student1 st1 = {'A', 100, 'A'}; 

  printf("[----- 허제완 2020069031 -----]\n"); 
 
  printf("st1.lastName = %c\n", st1.lastName); // st1의 lastName 출력
  printf("st1.studentId = %d\n", st1.studentId); // st1의 studentId 출력
  printf("st1.grade = %c\n", st1.grade); // st1의 grade 출력
 
  // student2의 인스턴스 st2 선언 및 초기화. typedef를 통해 정의했으므로 선언 시 student2 st2 형태로 선언 가능
  student2 st2 = {'B', 200, 'B'}; 
 
  printf("\nst2.lastName = %c\n", st2.lastName); // st2의 lastName(A) 출력
  printf("st2.studentId = %d\n", st2.studentId); // st2의 studentId(200) 출력
  printf("st2.grade = %c\n", st2.grade); // st2의 grade(B) 출력
 
  student2 st3; // student2 구조체 타입 st3 선언
  
  st3 = st2; // st2의 멤버변수들의 값을 st3의 멤버 변수에 각각 복사
 
  printf("\nst3.lastName = %c\n", st3.lastName); // st3의 lastName(== st2의 lastName) 출력
  printf("st3.studentId = %d\n", st3.studentId); // st3의 studentId(== st2의 studentId) 출력
  printf("st3.grade = %c\n", st3.grade); // st3의 grade(== st2의 grade) 출력
 
  /* equality test */
  if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) // st2와 st3의 요소가 모두 같은 지 검사
   printf("equal\n"); // 같으면 equal 출력
  else
   printf("not equal\n"); // 다르면 not equal 출력
  
  return 0;
}