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
    //iterative search return index of the element
    int search_key(int val){
        if (head == nullptr){
            return -1;
        }
        Node *temp = head;
        int index_count = 0;
        while(temp != nullptr){
            if (temp->data == val){
                return index_count;
            }else{
                index_count++;
                temp = temp->nextptr;
            }
        }
        return -1;
    }
    
    void implace_reversing(){
        if (head == nullptr){
            cout<<"list is empty"<<endl;
            return;
        }
        Node *temp = head;
        Node *prev=nullptr,*next=nullptr;
        while(temp != nullptr){
            next = temp->nextptr;
            temp->nextptr = prev;
            prev = temp;
            temp = next;
            if (temp != nullptr){
                head = temp;
            }
        }
    }
    void removeNthElement(int index){
        if (head == nullptr){
            cout<<"empty"<<endl;
        }
        Node *temp = head;
        int count = 0;
        Node *prev = nullptr;
        while (temp != nullptr){
            if (count == index){
                prev->nextptr = temp->nextptr;
                delete temp;
                temp = nullptr;
                break;
            }else{
                prev = temp;
                temp = temp->nextptr;
                count++;
            }
        }
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
    cout<<l.search_key(2)<<endl;
    cout<<l.search_key(13)<<endl;
    l.push_back(5);
    l.printList();
    l.implace_reversing();
    l.printList();
    return 0;
}