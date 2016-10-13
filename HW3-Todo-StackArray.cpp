//
//Christian Hill
//HW3 _ 9/29/16
//CSCi 2270 - Boese
//This program simulates a Stacked Array
//In collaboration with Chase Whyte, Michael Chifala, Colt Couture
//
#include <iostream>
#include "HW3-Todo-StackArray.hpp"

using namespace std;

TodoStackArray::TodoStackArray() { //default constructor
    stackTop = -1;
}
//Function to check if array is empty
bool TodoStackArray::isEmpty() {
    if (stackTop == -1){
        return true;
    }
    return false;
}
//Function to check if array is full
bool TodoStackArray::isFull() {
    if (stackTop == MAX_STACK_SIZE - 1) {
        return true;
    }
    return false;
}

void TodoStackArray::push(string todoItem){
    if (isFull() == false) {
        stackTop++;
        stack[stackTop] = new TodoItem;
        stack[stackTop]->todo = todoItem; //insert string into struct
    }
    else{
        cout << "Stack full, cannot add new todo item." << endl;
    }
}

void TodoStackArray::pop() {
    if (isEmpty() == true){
        cout << "Stack empty, cannot pop an item." << endl;
    }
    else{
        stackTop--;
    }
}

TodoItem* TodoStackArray::peek() {
    if (isEmpty() == true){
        cout << "Stack empty, cannot peek." << endl;
        return NULL;
    }
    else{
        cout << stack[stackTop]-> todo << endl;
        return stack[stackTop];
    }
}

int main(){

push("one");
push("two");
pop();
peek();

return 0;
}
