#include <iostream>
#include <string>
using namespace std;

class Car{
    string name;
    int *mileage;
public:
    Car(string name, int mileage){
        this->name = name;
        this->mileage = new int(mileage); //dynamic memory allocation
    }
    ~Car(){
        cout<<"We are destroying this object"<<endl;
        if(mileage != nullptr){
            delete mileage;
            mileage = nullptr;
        }
    }
};

int main(){
    Car c("BMW", 120);
    return 0;
}