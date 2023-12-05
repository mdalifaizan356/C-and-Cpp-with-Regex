#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=NULL;
    }
};

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList(){
        head=NULL;
    }
    void push_back(int data){
        Node* newNode = new Node(data); 
        if(head==NULL){
            head=newNode;
            return;
        }
        Node* current=head;
        while(current->next!=NULL){
            current = current->next;
        }
        current->next=newNode;
    }

    void display(){
        Node* current=head;
        while(current !=NULL){
            cout<<current->data<<"->";
            current=current->next;
        }
        cout<<"N"<<endl;
    }
};
int main(){
    LinkedList mylist;
    mylist.push_back(3);
    mylist.push_back(3);
    mylist.push_back(3);
    mylist.display();
}
