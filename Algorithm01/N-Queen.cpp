#include <iostream>
using namespace std;

int N;
int vx[15 + 1], vy[15 + 1];
int go(int y, int x)
{
	// ����ġ��(back tracking)
	for (int i = 0; i < y; i++)
	{
		// ������ħ
		if (y == vy[i]) return 0; // ������ġ ��ħ
		if (x == vx[i]) return 0; // ������ġ ��ħ
		if (abs(x - vx[i]) == abs(y - vy[i])) return 0; // �밢�� ��ħ

	}

	// ��������
	if (y == N - 1)
	{
		//���ܿ��� �� �迭�� ���������� üũ
		//���� �������̸� 1����
		return 1;
	}

	// ���� ��ġ�� ���
	vy[y] = y, vx[y] = x;

	int r = 0;
	for (int i = 0; i < N; i++)
	{
		r += go(y + 1, i);
	}
	return r;
}

int main(void)
{
	scanf_s("%d", &N);
	int r = 0;
	for (int i = 0; i < N; i++) r += go(0, i);
	printf("%d\n", r);
	return 0;
}