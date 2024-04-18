#include <iostream>

using namespace std;

class Car {
    public://全域變數
    string m_brand;
    string m_wheel;

    Car(string x, string y){
        m_brand = x;
        m_wheel = y;

    }
    
};

int main()
{
    Car car_1("BMW", "Rear-wheel");
    Car car_2("AUDI", "Front-wheel");
    Car car_3("BENZ", "Front-wheel");
    cout << "Constucting " << car_1.m_brand << "_car" << endl;
    cout << car_1.m_brand << " : Drive Mode = " << car_1.m_wheel << endl;
    
    cout << "Constucting " << car_2.m_brand << "_car" << endl;
    cout << car_2.m_brand << " : Drive Mode = " << car_2.m_wheel << endl;
    
    cout << "Constucting " << car_3.m_brand << "_car" << endl;
    cout << car_3.m_brand << " : Drive Mode = " << car_3.m_wheel << endl;

    return 0;
}
