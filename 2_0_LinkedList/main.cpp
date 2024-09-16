#include <iostream>
#include "SinglyLinkedList.h"

using namespace std;

int main(void)
{
	fj::SinglyLinkedList<int> list;

	list.AppendToTail(30);
	list.AppendToTail(2);
	list.AppendToTail(5);
	list.AppendToTail(8);
	list.AppendToTail(300239);

	list.Print();
	list.DeleteNode(0);
	list.Print();

	list.DeleteNode(0);
	list.Print();

	return (0);
}