#include "pch.h"
#include "NodeLL.h"
#include <string>
#include <sstream>


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
	return this->data;
};

template <typename T>
std::string NodeLL<T>::toString() {
	std::stringstream s;
	s << this->getData;
	return s.str(); 
}

template <typename T>
NodeLL<T>::~NodeLL()
{
}
