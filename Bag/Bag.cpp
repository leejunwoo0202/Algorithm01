#include <stdio.h>
#include <algorithm>
using namespace std;


int W[100], V[100];
int N, K;
int dp[101][10001];

int go(int i, int w)
{
	if (dp[i][w] > 0) return dp[i][w];

	if (i == N) return 0;

	int n1 = 0;

	if (w + W[i] <= K)
		n1 = V[i] + go(i + 1, w + W[i]); // 포함
	int n2 = 0 + go(i + 1, w); //미포함
	return dp[i][w] = max(n1, n2);
}

int main(void)
{
	scanf_s("%d %d", &N, &K);
	for (int i = 0; i < N; i++) scanf_s("%d %d", W + i, V + i);
	printf("%d\n", go(0, 0));
	return 0;
	
}