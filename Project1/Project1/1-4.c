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
	printf("�迭�� ũ�⸦ �Է��Ͻÿ�: ");
	scanf("%d", &n);
	printf("ù ��° �迭�� �Է��Ͻÿ� :");
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr1[i]);
	}
	printf("�� ��° �迭�� �Է��Ͻÿ� :");
	for (int i = 0;i < n;i++) {
		scanf("%d", &arr2[i]);
	}
	sum_array(arr1, arr2, res_sum, n);
	sub_array(arr1, arr2, res_abs, n);\
	printf("a �迭 - ");
	print_array(arr1, n); 
	printf("b �迭 - ");
	print_array(arr2, n); 
	printf("a b �� - ");
	print_array(res_sum, n);
	printf("a b �� - ");
	print_array(res_abs, n);
}