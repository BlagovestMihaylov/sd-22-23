#include <iostream>

template <typename T>
struct Node
{
    Node(const T, Node<T>*);
    Node();
    T data;
    Node<T>* next;
};




int main()
{




    return 0;
}
