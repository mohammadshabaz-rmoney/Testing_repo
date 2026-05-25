#include "Shabaz_first_header.h"

Test::Test(){
    string name ="";
}
string Test::get_name() const{
    return name;
}
void Test::set_name(const string &name_value){
    name = name_value;
}
int shabaz; //this will store deafult 0 val
int main(){
    int ashok; //garbage val
    cout<<ashok<<" "<<shabaz<<endl;

    int a = 10;
    int *ptr = &a;
    cout<<ptr + 2<<endl;
    int b = 20;
    int *ptr2 = &b;
    ptrdiff_t result = ptr2 - ptr;
    cout <<result<<endl;

    int arr[5] = {1,2,3,4,5};
    int *ptr11 = arr +2;
    int *ptr22 = arr + 4;
    ptrdiff_t same_as_ptr11 = ptr22 - ptr11;

    cout<<typeid(same_as_ptr11).name()<<","<<same_as_ptr11<<endl; 
    if (ptr11 == ptr22) {
        cout<<"Hello"<<endl;
    }

    return 0;
}