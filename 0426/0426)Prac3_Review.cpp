//
// Serok, 240425, C++ Practice Dynamic Array
//

#include <iostream>

using namespace std;

void main()
{
	int n2;
	cout << "insert the number : " << endl;
	cin >> n2;

	int* arrStudent = new int[n2];
	// 동적배열 사용 new라는 함수를 사용해서 만듬

	for (int i = 0; i < n2; i++)
	{
		arrStudent[i] = i + 1; // ?¿?? ¹?¿­ ??¿?


	}
	int Score;
	int SumScore = 0;
	int* arrScore = new int[n2];
	for (int i = 0; i < n2; i++)
	{
		cout << "insert the " << i + 1 << "student's Score :";
		cin >> Score;
		arrScore[i] = Score;
		cout << arrScore[i] << endl;
		SumScore += Score;


	}

	for (int i = 0; i < n2; i++)
	{
		cout << "Student" << i + 1 << "'s Score is : " << arrScore[i] << endl;
	}

	cout << "Mean of the Total Score is : " << float(SumScore) / float(n2);

	delete[] arrStudent; // 동적 배열 해제(반납). 동적 메모리는 사용 후 꼭 해제하기
	delete[] arrScore; // 동적 배열 해제(반납). 동적 메모리는 사용 후 꼭 해제하기
}