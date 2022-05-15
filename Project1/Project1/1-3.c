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
	printf("첫 번째 배열을 입력하시오 :");
	for (int i = 0;i < 5;i++) {
		scanf("%d", &arr1[i]);
	}
	printf("두 번째 배열을 입력하시오 :");
	for (int i = 0;i < 5;i++) {
		scanf("%d", &arr2[i]);
	}
	if(cp(arr1,arr2)){
		printf("두 배열은 같습니다.");
	}
	else {
		printf("두 배열은 다릅니다.");
	}
}