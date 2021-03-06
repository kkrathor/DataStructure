// FreeCodeCamp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "DoublyLL.cpp"

using namespace std;

void fillDoublyListInt() {
	DoublyLL<NodeLL<int>> stack;
	
	int i = 0;
	cout << "Integer Stack:" << endl;

	for (i = 1; i < 27; i++) {
		stack.push(new NodeLL<int>(i));
	}

	cout << "List Size: " << stack.getSize() << endl;

	stack.printList();

	cout << stack.pop()->toString() << endl;
	cout << "List Size: " << stack.getSize() << endl;

	stack.printList();
}


int main()
{
    std::cout << "Hello World!\n"; 
	fillDoublyListInt();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
