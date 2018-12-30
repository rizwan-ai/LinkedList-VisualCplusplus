#include <iostream>
#include <string>
using namespace std;

namespace LinkedList 
{
	struct Node   // Declare Node struct type
	{
		int roll_no;	   
		string name;
		Node *next_link;  // Define pointer variable "next_link"
	};   

	class SLL     // Declare SLL class type
	{
		private:
			Node *start;
			// Define pointer variable "start"
			// that points to the struct type object "Node"
		public:
			SLL() {                 // Constructor 
				start = NULL;
			}
			void AddNewNode(int r, string n) {
				start = new Node;   // Node is created during program execution (run-time) or dynamically **
				start->roll_no = r; // Operator -> is uesd to access the data of pointer type object 
				start->name = n;
				start->next_link = NULL;
			}
			void DisplayNode() {
				cout << "List is ..." << endl;
				cout << start->roll_no << " , ";
				cout << start->name << endl;
			}
	};
}