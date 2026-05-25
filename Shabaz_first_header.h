#include <iostream>
#include <typeinfo>
using namespace std;

class Test{
string name;
public:
    Test();
    string get_name() const;
    void set_name(const string &n);
};