#include <bits/stdc++.h> 
// Stack class.
class Stack {
    int *arr;
    int peek;
    int size;
public:
    
    Stack(int capacity) {
         arr = new int[capacity];
        size = capacity;
        peek = -1;
    }

    void push(int num) {
         if(isFull()) return;
        peek++;
        arr[peek] = num;
    }

    int pop() {
        
        if(isEmpty()) return -1;
        int ans = arr[peek];
        peek--;
        return ans;
    }
    
    int top() {
         if(isEmpty()) return -1;

        return arr[peek]; 
    }
    
    int isEmpty() {
         return peek==-1;
    }
    
    int isFull() {
         return (peek-1) == size;
    }
    
};