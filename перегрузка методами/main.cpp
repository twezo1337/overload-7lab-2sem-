#include <iostream>
using namespace std;
#include <windows.h>    
#include "roundCone.h"

int main(void) {
    setlocale(LC_ALL, "russian");
    
    int key = 0;
    cout << "������� 1 ���� ������ �������������� <=>\n������� 2 ���� ������ �������������� </=>\n������� 3 ���� ������ �������������� <<=>: ";
    cin >> key;

    switch (key) {
    case 1: {
        roundCone A, B;
        A.In();
        B.In();

        cout << "\nCone A: ";
        A.Out();

        cout << "\nCone B: ";
        B.Out();

        A = B;
        cout << "\nCone A=B: ";
        A.Out();
    }
    break;
    
    case 2: {
        roundCone A;
        double B;

        A.In();
        cout << "\n������� ����� �� ������� ����� ��������: ";
        cin >> B;

        cout << "\nCone A: ";
        A.Out();

        A /= B;
        cout << "\nCone A/=B: ";
        A.Out();
    }
    break;

    case 3: {
        roundCone A, B;

        A.In();
        B.In();

        cout << "\nCone A: ";
        A.Out();

        cout << "\nCone B: ";
        B.Out();

        if (A <= B)
            cout << "\nCone A<=B ";
        else
            cout << "\nNo";
    }
    break;
}   
}