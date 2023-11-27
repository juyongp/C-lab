#define _CRT_SECURE_NO_WARNINGS
#define SIZE 3

#include <stdio.h>
struct student {
	int number;
	char name[20];
	double grade;
};

int main(void)
{
	struct student list[SIZE], temp;
	double sum = 0;
	double average;
	int max;
	int i, j;
	for (i = 0; i < SIZE; i++)
	{
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &list[i].grade);
	}
	for (i = 0; i < SIZE; i++)
	{
		sum += list[i].grade;
	}
	average = sum / SIZE;
	printf("\n");
	printf("평균학점: %f\n", average);
	printf("\n");


	for (i = 0; i < SIZE - 1; i++) {
		max = i;
		for (j = i + 1; j < SIZE; j++) {
			if (list[j].grade > list[max].grade)
				max = j;
		}
		temp = list[i];
		list[i] = list[max];
		list[max] = temp;
	}

	for (i = 0; i < SIZE; i++)
		printf("학번: %d, 이름: %s, 학점: %f\n", list[i].number, list[i].name, list[i].grade);

	
	return 0;
}
