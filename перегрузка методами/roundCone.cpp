#include <iostream>
using namespace std;
#include <math.h>
#include "roundCone.h"


void roundCone::In(void) {

    cout << "\n������� ���������� ������ ����������: ";
    cin >> x >> y >> z;

    cout << "\n������� ������: ";
    cin >> r;

    cout << "\n������� ������: ";
    cin >> h;

    return;
}

void roundCone::Out(void) {
    cout << "\n���������� ������ ����������: ";
    cout << "(" << x << "; " << y << "; " << z << ")" << endl;

    cout << "������: ";
    cout << r << endl;

    cout << "������: ";
    cout << h << endl;

    return;
}

double roundCone::Volume()const {

    return 3.14 * r * r * h / 3;
}

const roundCone& roundCone::operator=(const roundCone& R) {

    if (this == &R)  //��������, �� ���������� �� ������������ ������ ���� ���� A=A
        return *this;

    x = R.x;
    y = R.y;
    z = R.z;
    r = R.r;
    h = R.h;

    return *this;
}

const roundCone& roundCone::operator/=(double R) { 
    x /= R;
    y /= R;
    z /= R;
    r /= R;
    h /= R;

    return *this;
}

bool roundCone::operator<=(const roundCone&R) {

    double V1, V2;

    V1 = this->Volume();  
    V2 = R.Volume();   

    if (V1 <= V2)
        return true;
    else
        return false;
}