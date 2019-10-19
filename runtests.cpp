#include <iostream>
using namespace std;

// change the value below to 1 to run tests against your StringList class.
// change the value below to 0 to run tests against the built in std::list.

#if 1
#include "StringList.h"

#else
#include <list>
#include <string>
typedef std::list<std::string> StringList;
#endif

int main()
{

// --- StringLists ---

	StringList a;
	StringList b;
	StringList c;
	StringList d;
	StringList e;
	StringList f;


// --- Test Push Front ---
	
	cout<<"[Testing Push_Front]"<<endl;

	a.push_front("O");
	a.push_front("L");
	a.push_front("L");
	a.push_front("E");
	a.push_front("H");

	a.print();



// --- Test Push Back ---

	cout<<endl;
	cout<<"[Testing Push_Back]"<<endl;

	b.push_back("W");
	b.push_back("O");
	b.push_back("R");
	b.push_back("L");
	b.push_back("D");

	b.print();



// --- Test Pop Front ---

	cout<<endl;
	cout<<"[Testing Pop_Front]"<<endl;
	cout<<"------------------"<<endl;

	cout<<"Test String: "<<endl;

	c.push_back("P");
	c.push_back("O");
	c.push_back("P");
	c.push_back("");
	c.push_back("D");
	c.push_back("O");
	c.push_back("G");

	c.print();
	
	cout<<endl;
	
	cout<<"Pop_Front: "<<endl;

	c.pop_front();
	
	c.print();
	


// --- Test Pop_Back ---
	
	cout<<endl;
	cout<<"[Testing Pop_Back]"<<endl;
	cout<<"------------------"<<endl;

	cout<<"Test String: "<<endl;

	d.push_back("P");
	d.push_back("O");
	d.push_back("P");
	d.push_back("");
	d.push_back("D");
	d.push_back("O");
	d.push_back("G");

	d.print();
	
	cout<<endl;
	
	cout<<"Pop_Back: "<<endl;

	d.pop_back();
	
	d.print();



// --- Test Reverse ---
	
	cout<<endl;
	cout<<"[Testing Reverse]"<<endl;
	cout<<"-----------------"<<endl;

	cout<<"Test String: "<<endl;

	e.push_back("P");
	e.push_back("A");
	e.push_back("L");
	e.push_back("I");
	e.push_back("N");
	e.push_back("D");
	e.push_back("R");
	e.push_back("O");
	e.push_back("M");
	e.push_back("E");

	e.print();
	
	cout<<endl;

	cout<<"Reverse: "<<endl;

	e.reverse();

	e.print();



// --- Unique ---

	cout<<endl;
	cout<<"[Testing Unique]"<<endl;
	cout<<"----------------"<<endl;

	cout<<"Test String: "<<endl;

	f.push_back("M");
	f.push_back("I");
	f.push_back("S");
	f.push_back("S");
	f.push_back("I");
	f.push_back("S");
	f.push_back("S");
	f.push_back("I");
	f.push_back("P");
	f.push_back("P");
	f.push_back("I");

	f.print();

	cout<<endl;

	cout<<"Unique: "<<endl;

	f.unique();
	
	f.print();

/*
	a.push_back("A");
	a.push_back("B");
	a.push_front("C");
	a.push_front("D");
	a.push_back("E");
	
	StringList rev;
	rev.push_front("R");
	rev.push_back("Q");
	rev.push_back("Q");
	rev.push_back("Q");
	rev.push_back("Q");
	rev.pop_back();

	rev.print();
	a.reverse();
	a.print();
	rev.unique();
	rev.print();
*/
	return 0;
}
/*	
	Assert(a.size() == 5, "size method");
	Assert(a.front() == "D", "front method");
	a.pop_front();
	std::cout << "Size " << a.size() << std::endl;
 
	Assert(a.front() == "C", "pop_front method");
	Assert(a.back() == "E", "back method");
	a.pop_back();
	std::cout << "Size " << a.size() << std::endl;

	Assert(a.back() == "B", "pop_back method");
	a.pop_front();
	std::cout << "Size " << a.size() << std::endl;
	
	Assert(a.front() == "A", "front method");
	a.pop_back();
	std::cout << "Size " << a.size() << std::endl;

	
	Assert(a.back() == "A", "back method");
	std::cout << "Size " << a.size() << std::endl;

*/

