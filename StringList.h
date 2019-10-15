#include <iostream>
#include <string>

class StringList
{
	private:
	size_t _size;
	typedef struct llist
       	{
		std::string str;
		struct llist *next;
		struct llist *prev;} llist;
	llist *_front;
	llist *_back;
	//llist *_data;

	public:
	
	// default constructor
	StringList()
	{
		_size = 0;
		_front = 0;
		_back = 0;	
	}

	// copy constructor
	StringList(const StringList&);

	// destructor
	~StringList()
	{
		while(!empty())
			pop_front();
	}

	// copy operator
	StringList& operator=(const StringList&);

	std::string& front()
	{

		return _front->str;
	}

	void push_front(std::string str)
	{
		llist *newItem = new llist;
		newItem->str = str;
		newItem->next = _front;
		newItem->prev = 0;
		newItem->next->prev = newItem;
		_front = newItem;
		_size++;
	}

	void pop_front()
	{
		_front = _front->next;
		delete _front->prev;
		_size--;
	}

	bool empty() const
	{
		return _front == 0;
	}

		
	void push_back(std::string str)
	{
		llist *newItem = new llist;
		newItem->str = str;
		newItem->next = _back;
		newItem->prev = 0;
		newItem->next = newItem;
		_size++;
	}
	
	size_t size()
	{	
		return _size;
	}

	void pop_back()
	{
		_back = _back->prev;
		delete _back->next;
		_back->next = 0;
		_size--;
	}

	std::string& back()
	{
		
		return _back->str;
	}

	
};

