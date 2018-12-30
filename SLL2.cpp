#include <iostream>
#include <string>
using namespace std;

namespace LinkedList 
{
	struct Node
	{
		string name;
		Node *link;
	};

	class SLL
	{
		private:
			Node * start, *temp;
		public:
			SLL() {
				start = NULL;
			}
			// Insertion in SLL
			void InsertNodes(string _name) {
				temp = new Node;
				temp->name = _name;  // or    (*temp).name = _name;
				temp->link = start;  //       (*temp).link = start;
				start = temp;
			}
			// Traversing in SLL
			void DisplayNodes() {
				temp = start;
				cout << "List is : ";
				while (temp != NULL)
				{
					cout << temp->name << " ";
					temp = temp->link;
				}
				cout << std::endl;
			}
	};
}

// Important Links  ...  Microsoft Visual C++

// #include <iostream>  I/O and formatting
// #include <string>    Strings and character data
// https://docs.microsoft.com/en-us/cpp/standard-library/cpp-standard-library-header-files?view=vs-2017

// using namespace std;
// https://docs.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=vs-2017

// struct C++
// https://docs.microsoft.com/en-us/cpp/cpp/struct-cpp?view=vs-2017

// class C++
// https://docs.microsoft.com/en-us/cpp/cpp/class-cpp?view=vs-2017

// Functions C++
// https://docs.microsoft.com/en-us/cpp/cpp/functions-cpp?view=vs-2017

// String and Character Literals
// https://docs.microsoft.com/en-us/cpp/cpp/string-and-character-literals-cpp?view=vs-2017

// Pointers C++
// https://docs.microsoft.com/en-us/cpp/cpp/pointers-cpp?view=vs-2017
// https://docs.microsoft.com/en-us/cpp/cpp/new-and-delete-operators?view=vs-2017
// https://docs.microsoft.com/en-us/cpp/cpp/new-operator-cpp?view=vs-2017

// Member Access Operators: . and ->
// https://docs.microsoft.com/en-us/cpp/cpp/member-access-operators-dot-and?view=vs-2017	


//..............................................................................


// Visual C++ Team Blog
// https://blogs.msdn.microsoft.com/vcblog/


// Getting Started with Visual Studio for C and C++ Development
// https://blogs.msdn.microsoft.com/vcblog/2017/04/21/getting-started-with-visual-studio-for-c-and-cpp-development/


// Object Oriented Programming in Microsoft Visual C++ Book
// by Robert Lafore
// https://drive.google.com/file/d/1IPFKhWFDEOA1twc7xeuPsTwQNDtrpVi3/view?usp=sharing


// Books on C++17
// https://blogs.msdn.microsoft.com/vcblog/2018/09/25/books-on-c17/


// Visual C++ Language Reference
// https://docs.microsoft.com/en-us/cpp/cpp/cpp-language-reference?view=vs-2017


// Visual C++ Documentation
// https://docs.microsoft.com/en-us/cpp/?view=vs-2017#pivot=langlib
