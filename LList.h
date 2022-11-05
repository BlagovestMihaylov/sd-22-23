//
// Created by blago on 5.11.2022 г..
//
#include<iostream>


#ifndef SD_22_23_LLIST_H
#define SD_22_23_LLIST_H

template <typename T>
struct box
{
    box(const T, box<T>*);
    box();
    T data;
    box<T>* next;
};
template <typename T>
class LList
{
public:
    LList ();
    LList (const LList<T>&);
    LList<T>& operator = (const LList<T>&);
    void push (const T&);
    void pop ();
    void insertAt (size_t, const T&);
    void deleteAt (size_t);
    void print () const;
    ~LList ();
private:
    box<T> *first;
};


#endif //SD_22_23_LLIST_H
