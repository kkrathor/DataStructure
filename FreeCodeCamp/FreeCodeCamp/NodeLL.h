#pragma once

#include <string>
template <typename T>
class NodeLL
{
private:
	T data;	
public:
	T * next;
	T* prev;
	NodeLL(T data);
	NodeLL();
	//T getData();
	//string toString();
	~NodeLL();
};

