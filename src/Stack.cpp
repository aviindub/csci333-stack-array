#include "Stack.h"
#include <iostream>

Stack::Stack(int initialSize) {
  theStack = new int[initialSize];
  top = 0;
  capacity = initialSize;
}

Stack::~Stack() {
  delete[] theStack;
}

void Stack::push(int value) {
  //if theStack is full
  // create new stack twice as big
  // copy all elements to new stack
  // delete old stack
  // point old stack pointer to new stack
  if (top >= capacity) {
    int* newStack = new int[capacity * 2];
    for (int i = 0; i < capacity; i++) {
      newStack[i] = theStack[i]; 
      int* stackToDelete = theStack;
      theStack = newStack;
      delete[] stackToDelete;
      capacity *= 2;
    }
  }
  theStack[top] = value;
  top++;
}

int Stack::pop() {
  top--;
  return theStack[top];
}

int Stack::peek() {
  return theStack[top-1];
}

int Stack::size() {
  return top;
}
