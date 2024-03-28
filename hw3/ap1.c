#include <stdio.h>
#include <stdlib.h>

void main()
{
  int list[5]; // ���̰� 5�� int�� �迭 ����
  int *plist[5] = {NULL,}; // ���̰� 5�� int�� ������ �迭 ���� �� null�� �ʱ�ȭ

  plist[0] = (int *)malloc(sizeof(int)); // 4����Ʈ ���� ���� �Ҵ� �� plist�� 0��° ��ҿ� �ּ� ����
  
  list[0] = 1; // list�� 0��° ��ҷ� 1 ����
  list[1] = 100; // list�� 1��° ��ҷ� 100 ����
  
  *plist[0] = 200; // ������ �迭 plist�� 0��° ��Ұ� ����Ű�� ������ 200 ����

  printf("[----- ������ 2020069031 -----]\n");
  
  printf("list[0] = %d\n", list[0]); // list�� 0��° ����� �� 1 ���
  printf("&list[0] = %p\n", &list[0]); // list�� ���� �ּ� ���
  printf("list = %p\n", list); // list�� ���� �ּ� ���
  printf("&list = %p\n", &list); // list�� ���� �ּ� ���
  
  printf("----------------------------------------\n\n");
  printf("list[1] = %d\n", list[1]); // list�� 1��° ����� �� 100 ���
  printf("&list[1] = %p\n", &list[1]); // list�� 1��° ����� �ּ� ���
  printf("*(list+1) = %d\n", *(list + 1)); // list�� ���� �ּҷκ��� 4����Ʈ ���� �ּ��� �� ���
  printf("list+1 = %p\n", list+1); // list�� ���� �ּҷκ��� 4����Ʈ ���� �ּ� ���
  
  printf("----------------------------------------\n\n");
  
  printf("*plist[0] = %d\n", *plist[0]); // plist�� 0��° ��Ұ� ����Ű�� �ּ��� �� 200 ���
  printf("&plist[0] = %p\n", &plist[0]); // plist�� 0��° �ε����� �ּ� ���
  printf("&plist = %p\n", &plist); // plist�� ���� �ּ� ���
  printf("plist = %p\n", plist); // plist�� ���� �ּ� ���
  printf("plist[0] = %p\n", plist[0]); // plist�� 0��° ��(���� �Ҵ�� ������ �ּ�) ���
  printf("plist[1] = %p\n", plist[1]); // plist�� 1��° ��� 0 ���
  printf("plist[2] = %p\n", plist[2]); // plist�� 2��° ��� 0 ���
  printf("plist[3] = %p\n", plist[3]); // plist�� 3��° ��� 0 ���
  printf("plist[4] = %p\n", plist[4]); // plist�� 4��° ��� 0 ���
  
  free(plist[0]); // �Ҵ��ߴ� ���� ����
}