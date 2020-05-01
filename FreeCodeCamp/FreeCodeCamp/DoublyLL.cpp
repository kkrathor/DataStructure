#include "pch.h"
#include "DoublyLL.h"

template <typename T>
DoublyLL<T>::DoublyLL()
{
}

template <typename T>
T* DoublyLL<T>::getHead();

template <typename T>
T* DoublyLL<T>::getTail();

template <typename T>
int DoublyLL<T>::getSize();

template <typename T>
void DoublyLL<T>::addNodeAsHead(T* node);

template <typename T>
void DoublyLL<T>::addNodeAsTail(T* node);

template <typename T>
void DoublyLL<T>::push(T* new_node);

template <typename T>
T* DoublyLL<T>::pop();

template <typename T>
T* DoublyLL<T>::peek();

template <typename T>
void DoublyLL<T>::enqueue(T* new_node);

template <typename T>
T* DoublyLL<T>::dequeue();

template <typename T>
T* DoublyLL<T>::get(int index);

template <typename T>
void DoublyLL<T>::printList();

template <typename T>
void DoublyLL<T>::printListBackwards();

template <typename T>
DoublyLL<T>::~DoublyLL()
{
}
