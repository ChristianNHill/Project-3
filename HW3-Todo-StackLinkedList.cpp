//
//Christian Hill
//HW3 _ 9/29/16
//CSCi 2270 - Boese
//This program simulates a Stacked LinkedList
//In collaboration with Chase Whyte, Michael Chifala, Colt Couture
//
#include <iostream>
#include "HW3-Todo-StackLinkedlist.hpp"

using namespace std;

TodoStackLinkedList::TodoStackLinkedList()
{
    stackHead = NULL;
}
//checks if there are no nodes in the list
bool TodoStackLinkedList::isEmpty()
{
    if (stackHead == NULL){
        return true;
    }
    return false;
}

void TodoStackLinkedList::push (string todoItem)
{
    //Inserts a new node and sets head to it
    TodoItem *temp = stackHead;
    stackHead = new TodoItem;
    stackHead->next = temp;
    stackHead -> todo = todoItem;
}

void TodoStackLinkedList::pop()
    {
        if (stackHead == NULL){
            cout << "Stack empty, cannot pop an item." << endl;
        }
        TodoItem *temp = stackHead;
        // Deletes the node after head (Last in first out)
        stackHead = stackHead->next;
        //Deletes temp pointer to avoid a memory leak
        delete temp;
    }

//A peek function that prints/returns the value in the stackHead
TodoItem* TodoStackLinkedList::peek()
{
    if (stackHead == NULL){
        cout << "Stack empty, cannot peek." << endl;
        return stackHead;
    }
    cout << stackHead -> todo << endl;
    return stackHead;
}
