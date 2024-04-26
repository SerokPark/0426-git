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
            
            cout << "����: �ڿ����� �Է����ּ���." << std::endl;
        }
        else {
            return number;
        }
    }
}

int main() {
    std::cout << "x ���� �Է����ּ���: ";
    int x = getNaturalNumber();

    std::cout << "y ���� �Է����ּ���: ";
    int y = getNaturalNumber();

    // ������ ���� �迭 ����
    int** arr = new int* [x];
    for (int i = 0; i < x; ++i) {
        arr[i] = new int[y];
    }

    // �迭�� �� ����
    int value = 1;
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            arr[i][j] = value++;
        }
    }

    // �迭�� �� ���
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }

    // ���� �Ҵ� ����
    for (int i = 0; i < x; ++i) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
