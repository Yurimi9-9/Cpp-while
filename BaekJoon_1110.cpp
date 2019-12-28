// 백준 1110 - 더하기 사이클
#include <iostream>

using namespace std;

int main()
{
	int N=0;
	cin >> N;
	int current=N;	// 연산을 통해 만들어진 숫자 저장
	int count=0;	// 연산을 수행한 횟수

	do
	{
		int first = current%10;	// 새로운 숫자의 10의 자리 수 = 기존 숫자의 일의 자리 수
		int second = (current/10 + current%10) %10;	// 새로운 숫자의 1의 자리 수 = 기존 숫자 연산 결과의 일의 자리 수
		current = first*10 + second;	// 연산을 통해 만들어진 새로운 숫자 업데이트
		count++;	// 루프를 돈 횟수 세기
	}
	while(N!=current);	// 원래의 수로 돌아올 때까지 루프 돌기

	cout << count;

	return 0;
}
