#include <iostream>
#include <string>
using namespace std;

class Node{
public:
    int data;
    Node* nextptr;
    Node(int data_val):data(data_val), nextptr(nullptr){}
};

class LList{
    Node* head;
    Node* tail;
public:
    LList(){
        head = tail = nullptr;
    }
    void push_front(int front_data){
        Node *newNode = new Node(front_data);
        if(head==nullptr){
            head = tail = newNode;
        }else{
            newNode->nextptr = head;
            head = newNode;
        }
    }

    void push_back(int back_data){
        Node *newNode = new Node(back_data);
        if (head == nullptr){
            head = tail = newNode;
        }else{
            tail->nextptr = newNode;
            tail = newNode;
        }
    }

    void printList(){
        Node *temp = head;
        if (temp==nullptr){
            cout<<"The list is empty"<<endl;
            return;
        }
        while(temp!=nullptr){
            if(temp->nextptr == nullptr){
                cout<<temp->data<<endl;
                return;
            }else{
                cout<<temp->data<<"->";
                temp = temp->nextptr;
            }
        }
    }
    void pop_front(){
        Node *temp = head;
        if (temp == nullptr){
            cout<<"The list empty"<<endl;
            return;
        }
        head = head->nextptr;
        delete temp;
        temp = nullptr;
    }
    void pop_back(){
        Node *temp = head;
        if (temp == nullptr){
            cout<<"The list empty"<<endl;
            return;
        }
        while(temp->nextptr != nullptr && temp->nextptr->nextptr != nullptr){
            temp = temp->nextptr;
        }
        temp->nextptr = nullptr;
        delete tail;
        tail = temp;
    }
};

int main(int count, char *argv[]){
    LList l;
    l.printList();
    l.push_back(2);
    l.push_back(3);
    l.push_front(1);
    l.push_front(0);
    l.printList();
    l.pop_front();
    l.printList();
    l.pop_back();
    l.printList();
    return 0;
}