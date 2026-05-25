#include <iostream>
#include <string>
using namespace std;

int main(){
    string *var = new string;
    *var = "Hello";
    int *a = new int(10);
    cout<<sizeof(*a)<<endl;
    return 0;
}