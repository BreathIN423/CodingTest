/*
[������]
����)
	� �ڿ��� N�� ���� ��, �� �ڿ��� N�� �������� N�� N�� �̷�� �� �ڸ����� ���� �ǹ��Ѵ�.
	� �ڿ��� M�� �������� N�� ���, M�� N�� �����ڶ� �Ѵ�. ���� ���, 245�� �������� 256(=245+2+4+5)�� �ȴ�. 
	���� 245�� 256�� �����ڰ� �ȴ�. ����, � �ڿ����� ��쿡�� �����ڰ� ���� ���� �ִ�.
	�ݴ��, �����ڰ� ���� ���� �ڿ����� ���� �� �ִ�.
	�ڿ��� N�� �־����� ��, N�� ���� ���� �����ڸ� ���س��� ���α׷��� �ۼ��Ͻÿ�.

�Է�)
	ù° �ٿ� �ڿ��� N(1 �� N �� 1,000,000)�� �־�����.

���)
	ù° �ٿ� ���� ����Ѵ�. �����ڰ� ���� ��쿡�� 0�� ����Ѵ�. */

#include<iostream>
#include<string>

using namespace std;

int main(void) {
	int N, sum;

	cin >> N;

	for (int i = 1; i < N; i++) {
		sum = i;
		string s = to_string(i);
		for (char c : s)
			sum += c - '0';

		if (sum == N) {
			cout << i;
			break;
		}
	}

	if (sum != N)
		cout << 0;

	return 0;
}