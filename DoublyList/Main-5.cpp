#include "DoublyList.h"

#include <iostream>

using namespace std;

int main()
{
	DoublyList intList;

	intList.insertFront(5);
	intList.insertFront(4);
	intList.insertFront(3);
	intList.insertFront(2);
	intList.insertFront(1);	

	intList.printForward();
	cout << "\n";
	intList.printReverse();

	cout << "\n";
	return 0;
}
