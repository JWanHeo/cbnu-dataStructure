#include <stdio.h>
#include <stdlib.h>

void main()
{
  int list[5]; // ���̰� 5�� int�� �迭 ����
  int *plist[5]; // ���̰� 5�� int�� ������ �迭 ����

  list[0] = 10; // list�� 0��° �ε����� 10 ����
  list[1] = 11; // list�� 1��° �ε����� 11 ����
  
  plist[0] = (int*)malloc(sizeof(int)); // 4����Ʈ ���� ���� �Ҵ� �� �Ҵ��� ������ �ּҸ� plist�� 0��° ������ ����

    printf("[----- ������ 2020069031 -----]\n");
  
  printf("list[0] \t= %d\n", list[0]); // list�� 0��° �� 10 ���
  printf("list \t\t= %p\n", list); // list�� ���� �ּҰ� ����Ű�� ���� �� 10 ���
  printf("&list[0] \t= %p\n", &list[0]); // list�� ���� �ּ� ���
  printf("list + 0 \t= %p\n", list+0); // list�� ���� �ּ� ���
  printf("list + 1 \t= %p\n", list+1); // list�� ���� �ּҷκ��� 4����Ʈ ���� �ּ� ���
  printf("list + 2 \t= %p\n", list+2); // list�� ���� �ּҷκ��� 8����Ʈ ���� �ּ� ���
  printf("list + 3 \t= %p\n", list+3); // list�� ���� �ּҷκ��� 12����Ʈ ���� �ּ� ���
  printf("list + 4 \t= %p\n", list+4); // list�� ���� �ּҷκ��� 16����Ʈ ���� �ּ� ���
  printf("&list[4] \t= %p\n", &list[4]); // list�� ������ �ε����� �ּ� ���
  
  free(plist[0]); // �������� �Ҵ��ߴ� ���� ����
}