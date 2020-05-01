#include "pch.h"
#include "DoublyLL.h"

template <typename T>
DoublyLL<T>::DoublyLL()
{
}

template <typename T>
T* DoublyLL<T>::getHead() {
	return head;
}

template <typename T>
T* DoublyLL<T>::getTail() {
	return tail;
}


template <typename T>
int DoublyLL<T>::getSize() {
	return size;
}

template <typename T>
void DoublyLL<T>::addNodeAsHead(T* node) {

}

template <typename T>
void DoublyLL<T>::addNodeAsTail(T* node) {

}

template <typename T>
void DoublyLL<T>::push(T* new_node) {
	
}

template <typename T>
T* DoublyLL<T>::pop() {
	return head;
}

template <typename T>
T* DoublyLL<T>::peek() {
	return head;
}

template <typename T>
void DoublyLL<T>::enqueue(T* new_node) {

}

template <typename T>
T* DoublyLL<T>::dequeue() {
	return head;
}

template <typename T>
T* DoublyLL<T>::get(int index) {
	return head;
}

template <typename T>
void DoublyLL<T>::printList() {

}

template <typename T>
void DoublyLL<T>::printListBackwards() {

}

template <typename T>
DoublyLL<T>::~DoublyLL()
{
}
