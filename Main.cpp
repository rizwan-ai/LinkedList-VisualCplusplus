//   Linked-List - Implementation in Visual C++
//1: Create a new Node in Singly-Linked-List

#include <iostream>
#include <string>
#include "SLL1.cpp"
using namespace std;
using namespace LinkedList;

int main() {
	
	int rollNo;
	string name;
	cout << "Enter Your Roll-No : ";
	cin >> rollNo;
	cout << "Enter Your Name : ";
	cin >> name;
	
	SLL obj;
	obj.AddNewNode(rollNo, name);
	obj.DisplayNode();

	system("pause");
	return 0;
}