#include <bits/stdc++.h>
using namespace std;
#define str string
#define int long long int
class Sumya
{
private:
    int id = 22235103137;
    str name = "Mahamudul Hasan Mithun";

public:
    friend class Mithun;
};

class Mithun
{
public:
    void display(Sumya obj)
    {
        cout << obj.id << endl;
        cout << obj.name << endl;
    }
};
main()
{
    Sumya obj1;
    Mithun obj2;
    obj2.display(obj1);
}
