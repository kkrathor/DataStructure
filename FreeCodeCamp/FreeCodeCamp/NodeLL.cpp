#include "pch.h"
#include "NodeLL.h"
#include <string>


template <typename T>
NodeLL<T>::NodeLL()
{
}

template <typename T>
NodeLL<T>::NodeLL(T data) {
	this->data = data;
};

template <typename T>
T NodeLL<T>::getData() {
	
};

template <typename T>
std::string NodeLL<T>::toString() {
	return "";
};

template <typename T>
NodeLL<T>::~NodeLL()
{
}
