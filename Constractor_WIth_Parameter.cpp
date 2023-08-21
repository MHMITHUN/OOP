#include<bits/stdc++.h>
using namespace std;
class Car {
    public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z ){
        brand = x;
        model = y;
        year = z;
    }
};
int main(){
    Car obj1("Bmw" ,"rock and roll" , 2006);
    Car obj2("Toyota" ,"Corolla X Baseband" , 2009);

    cout << obj1.brand << endl << obj1.model << endl << obj1.year << endl ;
    cout << obj2.brand << endl << obj2.model << endl << obj2.year << endl ;
}
