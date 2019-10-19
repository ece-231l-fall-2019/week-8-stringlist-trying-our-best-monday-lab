#include <iostream>
using namespace std;

#include "StringList.h"

int main()
{


// --- StringLists ---

	StringList a;
	StringList b;
	StringList c;
	StringList d;
	StringList e;
	StringList f;
	StringList g;
	StringList cpy;
	StringList dst;

// --- Test Push Front ---
	
	cout<<"[Testing Push_Front]"<<endl;
	cout<<"--------------------"<<endl;

	a.push_front("O"); //adds nodes to the front
	a.push_front("L");
	a.push_front("L");
	a.push_front("E");
	a.push_front("H");

	a.print();

	cout<<endl;	
	cout<<"Size = "<<a.size()<<endl; //print size
	cout<<endl;



// --- Test Push Back ---

	cout<<endl;
	cout<<"[Testing Push_Back]"<<endl;
	cout<<"-------------------"<<endl;

	b.push_back("W"); //add nodes to the back
	b.push_back("O");
	b.push_back("R");
	b.push_back("L");
	b.push_back("D");

	b.print();

	cout<<endl;	
	cout<<"Size = "<<b.size()<<endl; //print size
	cout<<endl;



// --- Both Push Front and Back ---

	cout<<endl;
	cout<<"[Testing Push_Back & Push_Front]"<<endl;
	cout<<"--------------------------------"<<endl;

	g.push_front("O"); //add nodes to the front
	g.push_front("L");
	g.push_front("L");
	g.push_front("E");
	g.push_front("H");

	g.push_back("W"); //add nodes to the back
	g.push_back("O");
	g.push_back("R");
	g.push_back("L");
	g.push_back("D");

	g.print();

	cout<<endl;	
	cout<<"Size = "<<g.size()<<endl; //print size
	cout<<endl;

// --- operator= ---

	cout<<endl;
	cout<<"[Operator=]"<<endl;
	cout<<"-----------"<<endl;
	
	cout<<"Initial Text: "<<endl;
	cpy.push_back("C");
	cpy.push_back("O");
	cpy.push_back("P");
	cpy.push_back("I");
	cpy.push_back("E");
	cpy.push_back("D");
	
	cpy.print();
	
	cout<<endl;
	cout<<"Destination: "<<endl;

	dst = cpy; //copy operation
	dst.print();
	
	cout<<endl;
	cout<<"Size = "<<b.size()<<endl; //print size
	cout<<endl;


// --- Test Pop Front ---

	cout<<endl;
	cout<<"[Testing Pop_Front]"<<endl;
	cout<<"-------------------"<<endl;

	cout<<"Test String: "<<endl;

	c.push_back("P");
	c.push_back("O");
	c.push_back("P");
	c.push_back("D");
	c.push_back("O");
	c.push_back("G");

	c.print();
	
	cout<<endl;
	
	cout<<"Pop_Front: "<<endl;

	c.pop_front(); //removes one node from the front
	
	c.print();
	
	cout<<endl;	
	cout<<"Size = "<<c.size()<<endl; //print size
	cout<<endl;



// --- Test Pop_Back ---
	
	cout<<endl;
	cout<<"[Testing Pop_Back]"<<endl;
	cout<<"------------------"<<endl;

	cout<<"Test String: "<<endl;

	d.push_back("P");
	d.push_back("O");
	d.push_back("P");
	d.push_back("D");
	d.push_back("O");
	d.push_back("G");

	d.print();
	
	cout<<endl;
	
	cout<<"Pop_Back: "<<endl;

	d.pop_back(); //removes one node from back
	
	d.print();

	cout<<endl;	
	cout<<"Size = "<<d.size()<<endl; //print size
	cout<<endl;



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

	e.reverse(); //reverse

	e.print();

	cout<<endl;	
	cout<<"Size = "<<e.size()<<endl; //print size
	cout<<endl;



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

	f.unique(); //removes any identical pairs next to each other
	
	f.print();

	cout<<endl;	
	cout<<"Size = "<<f.size()<<endl; //print size
	cout<<endl;


// --- End Tests ---

	return 0;
}

