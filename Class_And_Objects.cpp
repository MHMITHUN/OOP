#include<bits/stdc++.h>
using namespace std;
class Myclass{
    public:
    int mynum;
    string mystring;
};
int main(){
    Myclass myobj;

    myobj.mynum = 234278;
    myobj.mystring = "Mahamudul Hasan Mithun";

    cout << myobj.mynum << " " << myobj.mystring << endl;
    return 0;
}