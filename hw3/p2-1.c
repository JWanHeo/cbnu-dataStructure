#include <stdio.h>

#define MAX_SIZE 100 // ��ũ�� ����

float sum1(float list[], int);
float sum2(float *list, int);
float sum3(int n, float *list);

float input[MAX_SIZE], answer; // ���̰� 100�� float�� �迭 input�� float�� ���� answer ����
int i; // int�� ���� i ����
void main(void)
{
  for(i=0; i < MAX_SIZE; i++) 
    input[i] = i; // 0 ~ 99���� �� �ε����� ��� ����

  printf("[----- ������ 2020069031 -----]\n");

  /* for checking call by reference */
  printf("--------------------------------------\n");
  printf(" sum1(input, MAX_SIZE) \n");
  printf("--------------------------------------\n");
  printf("input \t= %p\n", input); // input�� ���� �ּ� ���

  answer = sum1(input, MAX_SIZE); // float�� �迭 input�� ��ȸ�ϸ� ��� 100���� ��� ���� ���� answer�� ����
  printf("The sum is: %f\n\n", answer); // answer�� ��(0 ~ 99������ ��) ���
  
  printf("--------------------------------------\n");
  printf(" sum2(input, MAX_SIZE) \n");
  printf("--------------------------------------\n");
  printf("input \t= %p\n", input); // �迭 input�� ���� �ּ� ���
  
  answer = sum2(input, MAX_SIZE); // ���̽� �������� input���κ��� 100*4byte�� �ּұ��� ��ȸ�ϸ� �� �ּҿ� ����� ������ ���Ͽ� answer�� ����
  printf("The sum is: %f\n\n", answer); // answer�� ��(0 ~ 99������ ��) ���
  
  printf("--------------------------------------\n");
  printf(" sum3(MAX_SIZE, input) \n");
  printf("--------------------------------------\n");
  printf("input \t= %p\n", input); // input�� ���� �ּ� ���
  
  answer = sum3(MAX_SIZE, input); // ���̽� �������� input���κ��� 100*4byte�� �ּұ��� ��ȸ�ϸ� �� �ּҿ� ����� ������ ���Ͽ� answer�� ����
  printf("The sum is: %f\n\n", answer); // answer�� ��(0 ~ 99������ ��) ��ȯ
  
}

float sum1(float list[], int n) // float�� �迭 list�� ��ȸ�� ���� �ε��� n�� �Ķ���ͷ� �޴� �Լ�
{
  printf("list \t= %p\n", list); // list�� ���� �ּ� ���
  printf("&list \t= %p\n\n", &list); // list�� �ּ� ���

  int i; // �ݺ� ���� i ����
  float tempsum = 0; // ���� ��ȯ���� 0���� �ʱ�ȭ
  
  for(i = 0; i < n; i++)
    tempsum += list[i]; // �迭�� 0��°���� n-1��° ��ұ��� ��ȸ�ϸ� tempsum�� �ջ�
    
  return tempsum; // list�� n-1��°���� ��ҵ��� �� ��ȯ
}

float sum2(float *list, int n) // float�� ������ list�� �ݺ� Ƚ�� n�� �Ķ���ͷ� �޴� �Լ�
{
  printf("list \t= %p\n", list); // list�� ���� �ּҸ� ���
  printf("&list \t= %p\n\n", &list); // list�� �ּ� ���

  int i; // �ݺ� ���� i
  float tempsum = 0; // ���� ��ȯ���� 0���� �ʱ�ȭ
  
  for(i = 0; i < n; i++) // n�� �ݺ� ����
    tempsum += *(list + i); // list�κ��� i*4byte ������ ���� ����� ������ �ջ�
  
  return tempsum; // �ݺ����� �����ϰ� �� ���� �հ踦 ��ȯ
}

/* stack variable reuse test */
float sum3(int n, float *list) // sum2�� ������ ������ �Լ�
{
  printf("list \t= %p\n", list);
  printf("&list \t= %p\n\n", &list);

  int i;
  float tempsum = 0;

  for(i = 0; i < n; i++)
    tempsum += *(list + i);

  return tempsum;
}