//
// Serok, 240426, C++, Dynamic Multi Array_Practice
//

#include <iostream>
using namespace std;

int getNaturalNumber() {
    int number;
    while (true) {
        cin >> number;
        if (cin.fail() || number <= 0) {
            
            cout << "에러: 자연수를 입력해주세요." << std::endl;
        }
        else {
            return number;
        }
    }
}

int main() {
    std::cout << "x 값을 입력해주세요: ";
    int x = getNaturalNumber();

    std::cout << "y 값을 입력해주세요: ";
    int y = getNaturalNumber();

    // 이차원 동적 배열 선언
    int** arr = new int* [x];
    for (int i = 0; i < x; ++i) {
        arr[i] = new int[y];
    }

    // 배열에 값 저장
    int value = 1;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            arr[i][j] = value++;
        }
    }

    // 배열의 값 출력
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    // 동적 할당 해제
    for (int i = 0; i < x; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
