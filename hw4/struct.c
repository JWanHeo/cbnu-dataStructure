#include <stdio.h>

struct student1 { // student1 ����ü ����
  char lastName; // char�� ������� lastName 
  int studentId; // int�� ��� ���� studentId
  char grade; // char�� ������� grade
};

typedef struct {  // typedef�� ���� student2 ����ü ����
  char lastName; // char�� ������� lastName
  int studentId; // int�� ��� ���� studentId
  char grade; // char�� ������� grade
} student2;

int main() {

  // student1�� �ν��Ͻ� st1 ���� �� �ʱ�ȭ. typedef�� ���� �������� �ʾ����Ƿ� struct student1 ���·� ����
  struct student1 st1 = {'A', 100, 'A'}; 

  printf("[----- ������ 2020069031 -----]\n"); 
 
  printf("st1.lastName = %c\n", st1.lastName); // st1�� lastName ���
  printf("st1.studentId = %d\n", st1.studentId); // st1�� studentId ���
  printf("st1.grade = %c\n", st1.grade); // st1�� grade ���
 
  // student2�� �ν��Ͻ� st2 ���� �� �ʱ�ȭ. typedef�� ���� ���������Ƿ� ���� �� student2 st2 ���·� ���� ����
  student2 st2 = {'B', 200, 'B'}; 
 
  printf("\nst2.lastName = %c\n", st2.lastName); // st2�� lastName(A) ���
  printf("st2.studentId = %d\n", st2.studentId); // st2�� studentId(200) ���
  printf("st2.grade = %c\n", st2.grade); // st2�� grade(B) ���
 
  student2 st3; // student2 ����ü Ÿ�� st3 ����
  
  st3 = st2; // st2�� ����������� ���� st3�� ��� ������ ���� ����
 
  printf("\nst3.lastName = %c\n", st3.lastName); // st3�� lastName(== st2�� lastName) ���
  printf("st3.studentId = %d\n", st3.studentId); // st3�� studentId(== st2�� studentId) ���
  printf("st3.grade = %c\n", st3.grade); // st3�� grade(== st2�� grade) ���
 
  /* equality test */
  if(st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) // st2�� st3�� ��Ұ� ��� ���� �� �˻�
   printf("equal\n"); // ������ equal ���
  else
   printf("not equal\n"); // �ٸ��� not equal ���
  
  return 0;
}