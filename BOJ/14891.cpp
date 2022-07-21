/*
[��Ϲ���]

����)
	�� 8���� ��ϸ� ������ �ִ� ��Ϲ��� 4���� �Ʒ� �׸��� ���� �Ϸķ� ������ �ִ�.
	��, ��ϴ� N�� �Ǵ� S�� �� �ϳ��� ��Ÿ���� �ִ�.
	��Ϲ������� ��ȣ�� �Ű��� �ִµ�, ���� ���� ��Ϲ����� 1��, �� �������� 2��, �� �������� 3��, ���� ������ ��Ϲ����� 4���̴�.
	�̶�, ��Ϲ����� �� K�� ȸ����Ű���� �Ѵ�. 
	��Ϲ����� ȸ���� �� ĭ�� �������� �Ѵ�. ȸ���� �ð� ����� �ݽð� ������ �ְ�, �Ʒ� �׸��� ���� ȸ���Ѵ�.
	��Ϲ����� ȸ����Ű����, ȸ����ų ��Ϲ����� ȸ����ų ������ �����ؾ� �Ѵ�.
	��Ϲ����� ȸ���� ��, ���� �´��� �ؿ� ���� ���� �ִ� ��Ϲ����� ȸ����ų ���� �ְ�, ȸ����Ű�� ���� ���� �ִ�.
	��Ϲ��� A�� ȸ���� ��, �� ���� �ִ� ��Ϲ��� B�� ���� �´��� ����� ���� �ٸ��ٸ�, B�� A�� ȸ���� ����� �ݴ�������� ȸ���ϰ� �ȴ�.
	���� ���, �Ʒ��� ���� ��츦 ���캸��.
	�� ��Ϲ����� �´��� �κ��� �ʷϻ� �������� �����ִ� �κ��̴�. 
	���⼭, 3�� ��Ϲ����� �ݽð� �������� ȸ���ߴٸ�, 4�� ��Ϲ����� �ð� �������� ȸ���ϰ� �ȴ�.
	2�� ��Ϲ����� �´��� �κ��� S������ ���� ���� ������, ȸ������ �ʰ� �ǰ�, 1�� ��Ϲ����� 2���� ȸ������ �ʾұ� ������, ȸ������ �ʰ� �ȴ�.
	����, �Ʒ� �׸��� ���� ����� ����� �ȴ�.
	���� ���� ���¿��� 1�� ��Ϲ����� �ð� �������� ȸ����Ű��, 2�� ��Ϲ����� �ݽð� �������� ȸ���ϰ� �ǰ�, 2���� ȸ���ϱ� ������, 3���� ���ÿ� �ð� �������� ȸ���ϰ� �ȴ�.
	4���� 3���� ȸ��������, �´��� ���� ���� ������ ȸ������ �ʴ´�. ����, �Ʒ��� ���� ���°� �ȴ�.
	��Ϲ����� �ʱ� ���¿� ��Ϲ����� ȸ����Ų ����� �־����� ��, ���� ��Ϲ����� ���¸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

�Է�)
	ù° �ٿ� 1�� ��Ϲ����� ����, ��° �ٿ� 2�� ��Ϲ����� ����, ��° �ٿ� 3�� ��Ϲ����� ����, ��° �ٿ� 4�� ��Ϲ����� ���°� �־�����. 
	���´� 8���� ������ �̷���� �ְ�, 12�ù������ �ð���� ������� �־�����. N���� 0, S���� 1�� ��Ÿ���ִ�.
	�ټ�° �ٿ��� ȸ�� Ƚ�� K(1 �� K �� 100)�� �־�����.
	���� K�� �ٿ��� ȸ����Ų ����� ������� �־�����. 
	�� ����� �� ���� ������ �̷���� �ְ�, ù ��° ������ ȸ����Ų ��Ϲ����� ��ȣ, �� ��° ������ �����̴�. 
	������ 1�� ���� �ð� �����̰�, -1�� ���� �ݽð� �����̴�.

���)
	�� K�� ȸ����Ų ���Ŀ� �� ��Ϲ����� ������ ���� ����Ѵ�. ������ ������ ���� ����Ѵ�.

	1�� ��Ϲ����� 12�ù����� N���̸� 0��, S���̸� 1��
	2�� ��Ϲ����� 12�ù����� N���̸� 0��, S���̸� 2��
	3�� ��Ϲ����� 12�ù����� N���̸� 0��, S���̸� 4��
	4�� ��Ϲ����� 12�ù����� N���̸� 0��, S���̸� 8��*/

#include<iostream>
#include<string>
#include<vector>
#include<queue>

using namespace std;

void turn(vector<int>& top, int& direction) {
	int temp;
	if (direction == 1) {	// turn right
		temp = top[7];
		for (int i = 7; i > 0; i--) {
			top[i] = top[i - 1];
		}
		top[0] = temp;
	}
	else {					// turn left
		temp = top[0];
		for (int i = 0; i < 7; i++) {
			top[i] = top[i + 1];
		}
		top[7] = temp;
	}
}

int main(void) {

	string status;
	vector<vector<int>>top(4, vector<int>(8));

	for (int i = 0; i < 4; i++)
	{
		cin >> status;
		for (int j = 0; j < 8; j++)
		{
			top[i][j] = status[j] - '0';
		}
	}

	int K, Tnum, direction;
	cin >> K;
	queue<int> q;

	for (int i = 0; i < K; i++)
	{
		int flag[4] = { 0 };

		cin >> Tnum >> direction;
		q.push(Tnum - 1);
		flag[Tnum - 1] = direction;

		while (!q.empty()) {
			int now = q.front();
			int left = top[now][6];
			int right = top[now][2];

			turn(top[now], flag[now]);
			
			if (now - 1 >= 0) {		// ���� ��Ϲ��� ����
				if (flag[now - 1] == 0 && top[now - 1][2] != left) { // ���� ��Ϲ����� ���� ���ư��� �ʾҰ�, ������ ���� �ݴ�
					q.push(now - 1);
					flag[now - 1] = flag[now] * -1;
				}
			}
			if (now + 1 <= 3) {		// ������ ��Ϲ��� ����
				if (flag[now + 1] == 0 && top[now + 1][6] != right) { // ������ ��Ϲ����� ���� ���ư��� �ʾҰ�, ������ ���� �ݴ�
					q.push(now + 1);
					flag[now + 1] = flag[now] * -1;
				}
			}
			q.pop();
		}
	}

	int answer = 0;

	if (top[0][0] == 1) answer += 1;
	if (top[1][0] == 1) answer += 2;
	if (top[2][0] == 1) answer += 4;
	if (top[3][0] == 1) answer += 8;

	cout << answer;

	return 0;
}