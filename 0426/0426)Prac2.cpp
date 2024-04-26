//
// Serok, 240426, C++, Vector
//

#include <iostream>
#include <vector>

using namespace std;

// vector 함수 호출해야지 사용 가능
// vector<int> v(4); //int형 백터 생성 후 크기를 4로 할당(모든 백터요소 0으로 초기화)
//vector<int> v(5, 1); //int형 백터 생성 후 크기를 5로 할당(모든 백터요소 1로 초기화)
//int value = v[2]; // 벡터의 3번째 요소의 값을 value로 가져옴
//v[3] = 100; // 벡터의 4번째 요소에 값을 복사
//v.assign(5, 1);    //0~4인덱스의 값을 1로 초기화


//•.begin() // 백터 시작점의 iterator 반환
//•.insert(v.begin() + 3, 원소); //3번 인덱스에 원소를 삽입
//•.erase(시작 iterator, 마지막 iterator) // 시작 위치부터 마지막 위치 전까지의 원
//소를 삭제
//v.erase(v.begin() + 1, v.begin() + 3); // 1 ~ 2번 인덱스 삭제
//•.clear() // 백터의 모든 요소를 지움

//•.at(인덱스) // 인덱스에 해당하는 값 반환
//•.front() // 백터의 첫번째 요소 접근
//•.back() // 백터의 마지막 요소 접근
//•.resize(int) // 입력 정수 만큼 백터의 크기를 확보하고 초기화
//•.reserve(int) // 입력 정수 만큼 백터의 크기를 예약
//•.size() // 백터가 사용중인 크기를 반환
//•.capacity() // 백터가 예약된 크기를 반환

int main()
{
    // 1.빈 벡터 선언
    vector<int> v(5);
    //int value;

    //cout << "insert the value : " << endl;
    int value = 0;
    for (int i = 0; i < 5; ++i)
    {
        // 2. 정수 입력 받아 벡터에 추가
        cout << "insert the " << i  << "value :";
        cin >> value;
        v.insert(v.begin() + i, value);
    }
    cout << endl;

    // 3. 벡터 크기 출력
    cout << "Size of vector is :" << v.size() << endl;
    cout << endl;

    // 4. 벡터의 모든 원소 출력
    for (int i = 0; i < 5; ++i)
    {
        cout << i << " " << "value is :" << v[i] << endl;
        
    }
    cout << endl;

    // 5. 가장 큰 값 출력

    int max = *max_element(v.begin(), v.end());
    cout << "Max is : " << max << endl;
    cout << endl;


    // 6. 벡터의 모든 원소를 두배로

    for (int i = 0; i < 5; ++i)
    {
        v[i] = v[i] * 2;

    }
    // 6_1. 확인
    for (int i = 0; i < 5; ++i)
    {
        cout << i << " " << "value is :" << v[i] << endl;
        

    }
    cout << endl;

    // 7. 인덱스 입력 받고 해당 인덱스 원소 제거

    int idx = 0;
    cout << "insert the index :" << endl;
    cin >> idx;
    v.erase(v.begin() + idx);
   // v.erase(remove(v.begin(), v.end(), idex), v.end());

    // 7_1. 확인
    for (int i = 0; i < 5; ++i)
    {
        cout << i << " " << "new value is :" << v[i] << endl;
        

    }
    cout << endl;

    // 8. 인덱스 입력 받아 해당 인덱스에 새로운 원소 삽입

    int idx2 = 0;
    int value2 = 0;

    cout << "insert the index and value :" << endl;
    cin >> idx2 >> value2;
    v.emplace(v.begin() + idx2, value2);

    
    // 8_1. 확인
    for (int i = 0; i < 5; ++i)
    {
        cout << i << " " << "new value is :" << v[i] << endl;
        

    }

    return 0;

}