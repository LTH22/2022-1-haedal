#include<stdio.h>

int main() {
	double sum = 0, arr[1000], n;
	int cnt = 0;
	printf("���� �Է��Ͻÿ�: ");
	while (1) {
		scanf("%lf", &n);
		if (n == 0.0)
			break;
		arr[cnt] = n;
		sum += n;
		cnt++;

	}
	printf("��հ�: %.1f\n��պ��� ���� ��: ", sum / cnt);
	for (int i = 0;i < cnt;i++) {
		if (arr[i] < sum / cnt) {
			printf("%.1lf ", arr[i]);
		}
	}
}