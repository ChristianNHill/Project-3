//
//Christian Hill
//HW3 _ 9/29/16
//CSCi 2270 - Boese
//This program simulates a Queue LinkedList
//In collaboration with Chase Whyte, Michael Chifala, Colt Couture
//
#include <iostream>
#include "HW3-Todo-QueueLinkedList.hpp"

using namespace std;

TodoQueueLinkedList::TodoQueueLinkedList(){
    queueFront = NULL;
    queueEnd = NULL;
}
//Checks if there are no nodes
bool TodoQueueLinkedList::isEmpty(){
    if (queueEnd == NULL && queueFront == NULL){
        return true;
    }
    return false;
}
//adds a new node to the back of the line
void TodoQueueLinkedList::enqueue(string todoItem){
    if (isEmpty() == true){
        queueEnd = new TodoItem;
        queueFront = queueEnd;
        queueEnd -> todo = TodoItem;
        queueEnd -> next = NULL;
    }
    else{
        TodoItem *temp = queueEnd;
        queueEnd = new TodoItem;
        queueEnd -> todo = TodoItem;
        queueEnd -> next = temp;
    }
}
// Finds the first node and deletes it (First in first out)
void TodoQueueLinkedList::dequeue(){
    TodoItem *temp = queueFront;
    TodoItem *current = queueEnd;
    if (isEmpty() == true){
        cout << "Queue empty, cannot dequeue an item." << endl;
    }
    if (queueEnd == queueFront){
        delete temp;
    }
    else{
        while (current -> next != queueFront){
            current = current -> next;
    }
        current -> next = NULL;
        queueFront = current;
        delete temp;
    }
}
//Peaks the first node
TodoItem* TodoQueueLinkedList::peek(){
    if (queueEnd == NULL){
        cout << "Queue empty, cannot peek." << endl;
        return queueEnd;
    }
    cout << queueFront -> todo << endl;
    return queueFront;
}



int main(){

enqueue("Hello");
enqueue("Hi");
dequeue();
dequeue();

}


