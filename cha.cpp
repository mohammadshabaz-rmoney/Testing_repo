#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Shabaz{
    int x;
public:
    Shabaz(int val): x(val){}
    void get_x_val(){
        cout<<x<<endl;
    }
};

class Test{
public:
    Test(int a, int b, int c){
        cout<<"Hello "<<a<<b<<c<<endl;
    }
};

int main(int count, char const *argv[]){
    // char ch_arr[50] = "Shabaz";
    // string variable = ch_arr;
    // cout<<"printintg"<<endl;
    // cout<<size(variable)<<endl;
    // cout<<size(ch_arr)<<endl;
    // cout<<strlen(variable.c_str())<<endl;
   
    // Shabaz s(1);
    // s.get_x_val();
    Shabaz s2{2};
    s2.get_x_val();
    // Shabaz s3 = 3; //this is not possible if the Shabaz class constructor is explicit
    // s3.get_x_val();
    string var;
    getline(cin, var, '$');

    return 0;
}