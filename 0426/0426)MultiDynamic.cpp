//
// Serok, 240426, C++, Dynamic Multi Array
//

#include <iostream>

using namespace std;

// int*p;
// int num = 10;
// p = &num; ,주소값
// cout << *p

void main()
{
	int n3;
	std::cout << "숫자를 입력하세요: ";
	std::cin >> n3;
	// 동적 배열 선언 & 할당
	int** arr2 = new int* [n3];

	// *두개 사용한 이유 -> 한번 주소 찾고 해당 값이 할당된 수가 아니라 주소값으로 또 나옴 -> 다시 주소 찾아서 값 반환
	// ex) 

	// arr2[n3] : { 주소값, 주소값, 주소값, 주소값, 주소값}
	// arr2[0] : { 값, 값, 값, 값, 값 }
	// arr2[1] : { 값, 값, 값, 값, 값 }
	// ...

	///* arr2[n3][n3] = { 
	//{ 값, 값, 값, 값, 값 },
	//{ 값, 값, 값, 값, 값 },
	//{ 값, 값, 값, 값, 값 },
	//{ 값, 값, 값, 값, 값 },
	//{ 값, 값, 값, 값, 값 }
	//	}*




	for (int i = 0; i < n3; i++) {
		arr2[i] = new int[n3];
		for (int i = 0; i < n3; i++) {
			for (int j = 0; j < n3; j++) {
				arr2[i][j] = 0; // 동적 배열 사용
			}
		}
		// 동적 배열 해제(반납)
		for (int i = 0; i < n3; i++) {
			delete[] arr2[i];
		}
		delete[] arr2;
}