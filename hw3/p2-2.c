#include <stdio.h>

void print_one(int *ptr, int rows);

int main()
{
  int one[] = {0, 1, 2, 3, 4}; // int�� �迭 one ���� �� �ʱ�ȭ
  printf("[----- ������ 2020069031 -----]\n");

  printf("one = %p\n", one); // one�� ���� �ּ� ���
  printf("&one = %p\n", &one); // one�� �ּ� ���
  printf("&one[0] = %p\n", &one[0]); // one�� 0��° ����� �ּ�(one�� ���� �ּ�) ���
  printf("\n");
  
  printf("------------------------------------\n");
  printf(" print_one(&one[0], 5) \n");
  printf("------------------------------------\n");
  print_one(&one[0], 5); // one�� 0��° ��Һ��� 4��° ��ұ����� �ּҿ� �� ���� ��� 
  
  printf("------------------------------------\n");
  printf(" print_one(one, 5) \n");
  printf("------------------------------------\n");
  print_one(one, 5); // one�� 0��° ��Һ��� 4��° ��ұ����� �ּҿ� �� ���� ���
  
  return 0;
}

void print_one(int *ptr, int rows) // int�� ������ ptr�� �迭�� ���� rows�� �Ķ���ͷ� �޴� �Լ�
{/* print out a one-dimensional array using a pointer */
  int i;// �ݺ� ���� ����
  printf ("Address \t Contents\n");
  for (i = 0; i < rows; i++) // row��ŭ �ݺ� ����
    printf("%p \t %5d\n", ptr + i, *(ptr + i)); // (ptr�� �ּ� + i*4byte)�� �ּҿ� �� �ּҿ� ����� �� ���
  printf("\n");
}
