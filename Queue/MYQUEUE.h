#include<bits/stdc++.h>
using namespace std;

template <typename N> class Node{
public:
    N value;
    Node *next;

    Node(N val){
        value = val;
        next = NULL;
    }
};

template <typename Q> class Queue{
public:
    Node <Q>*front = NULL;
    Node  <Q>*rear = NULL;
    
    // Enqueue Elements 

    void enqueue(Q val){
        Node <Q>*newNode = new Node<Q>(val);
        if(front==NULL){
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = rear->next;
        return;
    }

    Q dequeue(){
        Q chk;
        if(rear == NULL){
            cout<<"Queue Underflow....!"<<endl;
            return chk;
        }
        if(rear == front){
            Node <Q>*delNode = front;
            chk = delNode->value;
            front = rear = NULL;
            return chk;
        }

        Node <Q>*delNode = front;
        chk = delNode->value;
        front = front->next;
        delete delNode;
        return chk;
    }

    Q Front(){
        Q chk;
        if(front!=NULL){
            return front->value;
        }

       cout<<"Queue Underflow....!"<<endl;
       return chk;
    }

    Q Back(){
        Q chk;
        if(rear!=NULL){
            return rear->value;
        }

       cout<<"Queue Underflow....!"<<endl;
       return chk;
    }

    bool Empty(){
        if(front == NULL && rear == NULL){
            return true;
        }
        else{
            return false;
        }
    }

};
