#include<stdio.h>

int main() {
	double sum = 0, arr[1000], n;
	int cnt = 0;
	printf("수를 입력하시오: ");
	while (1) {
		scanf("%lf", &n);
		if (n == 0.0)
			break;
		arr[cnt] = n;
		sum += n;
		cnt++;

	}
	printf("평균값: %.1f\n평균보다 작은 값: ", sum / cnt);
	for (int i = 0;i < cnt;i++) {
		if (arr[i] < sum / cnt) {
			printf("%.1lf ", arr[i]);
		}
	}
}