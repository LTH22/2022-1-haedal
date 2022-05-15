#include<stdio.h>
void sum_array(int a[], int b[], int res[], int arr_size) {
	for (int i = 0;i < arr_size;i++) {
		res[i] = a[i] + b[i];
	}
}
void sub_array(int a[], int b[], int res[], int arr_size) {
	for (int i = 0;i < arr_size;i++) {
		res[i] = a[i] - b[i];
	}
}
void print_array(int a[], int arr_size) {
	for (int i = 0;i < arr_size;i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main() {
	int arr1[1000] = { 0 }, arr2[1000] = { 0 },n,res_sum[1000]={0}, res_abs[1000] = { 0 };
	printf("배열의 크기를 입력하시오: ");
	scanf("%d", &n);
	printf("첫 번째 배열을 입력하시오 :");
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr1[i]);
	}
	printf("두 번째 배열을 입력하시오 :");
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr2[i]);
	}
	sum_array(arr1, arr2, res_sum, n);
	sub_array(arr1, arr2, res_abs, n);\
	printf("a 배열 - ");
	print_array(arr1, n); 
	printf("b 배열 - ");
	print_array(arr2, n); 
	printf("a b 합 - ");
	print_array(res_sum, n);
	printf("a b 차 - ");
	print_array(res_abs, n);
}