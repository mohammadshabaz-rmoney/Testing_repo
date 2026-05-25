#include <iostream>
#include <vector>
using namespace std;


struct Node{
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = right = nullptr;
    }
};



int main(){
    //int arr[] = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    vector<int> preorder_vec = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    
    cout<<"Hello"<<endl;
    return 0;
}

