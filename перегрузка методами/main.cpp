#include <iostream>
using namespace std;
#include <windows.h>    
#include "roundCone.h"

int main(void) {
    setlocale(LC_ALL, "russian");
    
    int key = 0;
    cout << "¬ведите 1 если хотите протестировать <=>\n¬ведите 2 если хотите протестировать </=>\n¬ведите 3 если хотите протестировать <<=>: ";
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
        cout << "\n¬ведите число на которое нужно поделить: ";
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