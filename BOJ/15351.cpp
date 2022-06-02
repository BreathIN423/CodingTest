/*
[인생 점수]
문제)
	어떤 사람이 무엇을 즐기느냐에 따라 그 사람의 인생 점수를 측정할 수 있다. A를 1점, B를 2점, ... , Z를 26점으로 해, 즐기는 것의 이름의 알파벳 점수를 모두 더하면 된다.
	예를 들어, "OTAKU LIFE" 는 O = 15, T = 20, A = 1, K = 11, U = 21, L = 12, I = 9, F = 6, E = 5 로 모두 더하면 100점이 된다(띄어쓰기는 무시).
	하지만 "GAMING LIFE"는 총 83점으로 부족한 삶이고, "PROGRAMMING"은 131점으로 너무 힘든 삶을 살고 있다.
	여러분이 할 것은 여러 개의 즐기는 것 리스트를 입력받아, 그것이 각 몇 점짜리 인생인지를 계산하는 것이다.

입력)
	첫 번째 줄에 즐기는 것의 개수 N이 주어진다. 뒤의 N개 줄에는 즐기는 것의 이름이 모두 영어 대문자와 띄어쓰기로 적혀 있다.
	이는 30자를 넘지 않는다.

출력)
	각 줄에 인생 점수를 입력받은 대로 출력한다.
	만약 100점이라면 100 대신 "PERFECT LIFE" 를 출력한다. */

#include<iostream>
#include<string>
using namespace std;

int main(void) {
	int N, sum;
	string s;

	cin >> N;
	getchar();

	for (int i = 0; i < N; i++)
	{
		sum = 0;
		getline(cin, s);
		for (char c : s) {
			if(c != ' ')
				sum += c - 'A' + 1;
		}

		if (sum == 100) cout << "PERFECT LIFE" << endl;
		else cout << sum << endl;
	}

	return 0;
}