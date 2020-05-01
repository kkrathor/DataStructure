#pragma once

#include "NodeLL.h"

template <typename T>
class DoublyLL
{	
private:
	T *head;
	T *tail; 
	int size;
public:
	DoublyLL();
	T* getHead();
	T* getTail();

	int getSize();

	void addNodeAsHead(T* node);
	void addNodeAsTail(T* node);
	void push(T* new_node);
	T* pop();
	T* peek();
	void enqueue(T* new_node);
	T* dequeue();
	T* get(int index);
	void printList();
	void printListBackwards();
	~DoublyLL();	
};

