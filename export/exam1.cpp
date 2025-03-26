/*
 * ai 소프트웨어 학과, 2025591010, 김현민
 * 저장소 : github.com/khm1380/cpp
 */

#include <iostream>

double area(int r);
int squareArea(int a, int b);
int triangleArea(int a, int b);

double area(int r) {
    return 3.14 * r * r;
}

int squareArea(int a, int b) {
    return a * b;
}

int triangleArea(int a, int b) {
    return a * b / 2;
}


int main() {
    using namespace std;

    int  x, y, r, num = 0;

    do {
        cout << "1 : 삼각형, 2 : 사각형, 3 : 원" << endl;
        cin >> num;

        switch (num) {
            case 1:
                cout << "삼각형의 밑변과 높이를 입력하세요>>> ";
            cin >> x >> y;
            cout << "삼각형의 넓이는 " << triangleArea(x, y) << "입니다." << endl;
            break;

            case 2:
                cout << "사각형의 밑변과 높이를 입력하세요>>> ";
            cin >> x >> y;
            cout << "사각형의 넓이는 " << squareArea(x, y) << "입니다." << endl;
            break;

            case 3:
                cout << "원의 반지름을 입력하세요>>> ";
            cin >> r;
            cout << "원의 넓이는 " << area(r) << "입니다." << endl;
            break;
        }
    } while (num != 0);

    cout << "프로그램을 종료합니다." << endl;

    return 0;
}
