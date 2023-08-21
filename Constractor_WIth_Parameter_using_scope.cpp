#include<bits/stdc++.h>
using namespace std;
#define str string
class Car{
    public:
    str Brand;
    str Model;
    int Year;

    Car (str x , str y , int z);
};
Car::Car(str x , str y , int z){

    Brand = x;
    Model = y;
    Year = z;
}
int main(){
    Car obj1("Bmw" ,"rock and roll" , 2006);
    Car obj2("Toyota" ,"Corolla X Baseband" , 2009);

    cout << obj1.Brand << endl << obj1.Model << endl << obj1.Year << endl ;
    cout << obj2.Brand << endl << obj2.Model << endl << obj2.Year << endl ;

}
