#include <stdio.h>

int main(void)
{
	int N, K; scanf_s("%d %d", &N, &K);
	int arr[11];
	for (int i = 1; i <= N; i++) scanf_s("%d", arr + N - 1 - i);

	int cnt = 0;
	for (int i = 0; i < N; i++)
		while (K - arr[i] >= 0) K -= arr[i], cnt++;

	printf("%d\n", cnt);

	return 0;
}