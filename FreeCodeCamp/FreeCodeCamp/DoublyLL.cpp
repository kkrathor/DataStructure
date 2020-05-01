#include "pch.h"
#include "DoublyLL.h"
#include "NodeLL.h"

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
	
	node->next = this->head; 
	head->prev = node; 
	head = node;

	this->size += 1;
}

template <typename T>
void DoublyLL<T>::addNodeAsTail(T* node) {
	tail->next = node; 
	node->prev = tail; 
	return tail; 
	this->size += 1; 
}

template <typename T>
void DoublyLL<T>::push(T* new_node) {
	addNodeAsTail(new_node);
}

template <typename T>
T* DoublyLL<T>::pop() {
	T* myNode; 
	myNode = tail; 
	this->tail = tail->prev; 
	this->next = nullptr; 
	return myNode; 
}

template <typename T>
T* DoublyLL<T>::peek() {
	return this->head;
}

template <typename T>
void DoublyLL<T>::enqueue(T* newNode) {
	this->addNodeAsTail(newNode);
}

template <typename T>
T* DoublyLL<T>::dequeue() {
	this->pop();
}

template <typename T>
T* DoublyLL<T>::get(int index) {
	if (head == nullptr) {
		return nullptr; 
	}
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
