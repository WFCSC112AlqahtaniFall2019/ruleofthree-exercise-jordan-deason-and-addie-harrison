//
// Created by Addie Harrison on 10/17/19.
//
#include <iostream>

using namespace std;

#include "IntList.h"


IntList::IntList(int size, int initvalue) {
    if (size > 0) {
        list_ = new int[size];
        size_ = size;
        for (int i = 0; i < size_; i++)
            list_[i] = initvalue;
    } else {
        list_ = 0;
        size_ = 0;
    }

}

//1) write a definition for the destructor
IntList::~IntList() {
    cout << "Destroying IntList" << endl;
    delete[] list_;

}

void swap(int *th, int *rhs, int size) {

    for (int i = 0; i < size; i++) {
        th[i] = rhs[i];
    }

}

//2) fix the copy constructor
IntList::IntList(const IntList &L) {
    cout << "Copy constructor called." << endl;
    list_ = new int;
    for (int i = 0; i < 5; i++) {
        (list_[i]) = (L.list_[i]);
    }
    size_ = L.size_;
}


//3) rewrite the copy assignment operator using an optimized method
IntList &IntList::operator=(IntList &rhs) {
    swap(this->list_, rhs.list_, rhs.size_);
    return *this;
}
