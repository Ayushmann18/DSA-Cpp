#include <bits/stdc++.h>
using namespace std;

class CircularQueue{
    int* arr;
    int currSize, cap;
    int f, r;
    
    public: 
    CircularQueue(int size){
        cap = size;
        arr = new int[cap];
        f = 0;
        r = -1;
        currSize = 0;
    }

    void push(int data){//O(1)
        if(currSize == cap){
            cout<<"Queue is full"<<endl;
            return;
        }

        r = (r + 1) % cap;
        arr[r] = data;
        currSize++;
    }

    void pop(){//O(1)
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        f = (f + 1) % cap;
        currSize--;
    }

    int front(){//O(1)
        if(empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[f];
    }

    bool empty(){//O(1)
        return currSize == 0;
    }

    void printArr(){
        for(int i = 0; i < currSize; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main() {
    CircularQueue q(3);
    q.push(1);      
    q.push(2);
    q.push(3);  
    q.pop();
    q.push(4);

    q.printArr();
    return 0;
}