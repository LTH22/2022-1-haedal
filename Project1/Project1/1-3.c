#include<stdio.h>
int cp(int arr1[], int arr2[]) {
	for (int i = 0;i < 5;i++) {
		if (arr1[i] != arr2[i])
			return 0;
	}
	return 1;
}
int main() {
	int arr1[5] = { 0 }, arr2[5] = { 0 };
	printf("ù ��° �迭�� �Է��Ͻÿ� :");
	for (int i = 0;i < 5;i++) {
		scanf("%d", &arr1[i]);
	}
	printf("�� ��° �迭�� �Է��Ͻÿ� :");
	for (int i = 0;i < 5;i++) {
		scanf("%d", &arr2[i]);
	}
	if(cp(arr1,arr2)){
		printf("�� �迭�� �����ϴ�.");
	}
	else {
		printf("�� �迭�� �ٸ��ϴ�.");
	}
}