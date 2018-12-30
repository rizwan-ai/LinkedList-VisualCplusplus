//   Linked-List - Implementation in Visual C++
//2: Insert a one Node at the beginning of a Singly-Linked-List

#include <iostream>
#include <string>
#include "SinglyLinkedList.cpp"
//using namespace std;
//using namespace LinkedList;

int main() {

	std::string name;
	LinkedList::SLL obj;     

	for (int i = 0; i < 2; i++)
	{
		std::cout << "Enter Name " << i + 1 << " : ";
		std::getline(cin, name);
		obj.InsertNodes(name);
		obj.DisplayNodes();
	}

	std::system("pause");
	return 0;
}