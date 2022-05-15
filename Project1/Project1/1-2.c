#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	srand(time(NULL));
	int n, arr[6] ={0};
	printf("주사위를 던 질 횟수는 :");
	scanf("%d", &n);
	for (int i = 0;i < n;i++) {
		arr[rand() % 6]++;
	}
	for (int i = 0;i < 6;i++) {
		printf("%d\t%d\n", i + 1, arr[i]);
	}
}