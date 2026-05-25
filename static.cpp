#include <iostream>
using namespace std;

class Example{
public:
    Example(){
        cout<<"Constructor"<<endl;
    }
    ~Example(){
        cout<<"Destructor"<<endl;
    }
    int x = 0;
};


class A{
public:
    void print_something(){
        cout<<"1"<<endl;
    }
};


class B{
public:
    void print_something(){
        cout<<"1"<<endl;
    }
};

class Base:virtual public A, virtual public B{
public:
};

int main(int count, char *argv[]){
    // Example e1;
    // Example e2;
    // Example e3;

    // cout<<e1.x++<<endl;
    // cout<<e2.x++<<endl;
    // cout<<e3.x++<<endl;
    // int a = 0;
    // if(a==0){
    //     static Example e;
    //     cout<<"before the destructor"<<endl;
    //     cout<<"Within the block of code"<<e.x<<endl;
    // }
    // cout<<"Out from here"<<endl;
    //cout<<e.x<<endl;
    Base obj;
    obj.A::print_something(); 
    return 0;
}