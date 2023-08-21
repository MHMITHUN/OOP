#include<bits/stdc++.h>
using namespace std;
class Car
{
    public:
    string brand;
    string model;
    int year;
};
int main(){
    Car obj1,obj2;

    obj1.brand = "BMW";
    obj1.model = "X5";
    obj1.year =  2002;

    obj2.brand = "Toyota";
    obj2.model = "Corolla";
    obj2.year =  2009;

    cout << obj1.brand << endl << obj1.model << endl << obj1.year <<endl<<endl;
    cout << obj2.brand << endl << obj2.model << endl << obj2.year;
}
