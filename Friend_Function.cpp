#include <bits/stdc++.h>
using namespace std;
#define str string
class Box
{
private:
    int Length;
public:
    Box() : Length (0) {}
    friend int print_length(Box);
};

int print_length(Box obj){
    obj.Length+=10;
    return obj.Length;
}
int main(){
    Box obj;
    cout<<"Length Of the Box : " << print_length(obj) <<endl;
    return 0;
}