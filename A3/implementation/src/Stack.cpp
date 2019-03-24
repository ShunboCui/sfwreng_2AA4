﻿// Implementation here
#include "Stack.h"
#include "CardTypes.h"
#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

template <class T>
Stack<T>::Stack() {

}

template <class T>
Stack<T>::Stack(vector<T> s){
	this->s = s;
}

template <class T>
Stack<T> Stack<T>::push(T t){
	s.push_back(t);
	Stack newstack(s);
    return newstack;
}

template <class T>
Stack<T> Stack<T>::pop(){
	s.pop_back();
	Stack newstack(s);
    return newstack;
}

template <class T>
T Stack<T>::top(){
    return s[s.size() - 1];
}


template <class T>
unsigned int Stack<T>::size(){
    return s.size();
}

template <class T>
vector<T> Stack<T>::toSeq(){
    return s;
}
// Keep this at bottom
template class Stack<CardT>;

