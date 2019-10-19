#include <iostream>
#include <string>

class StringList
{
	private:
	int _size;
	typedef struct llist
       	{
		std::string str;
		struct llist *next;
		struct llist *prev;} llist;
	llist *_front;
	llist *_back;


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
		clear();
	}

	// copy operator
	StringList& operator=(const StringList& other)
	{
		for(const llist *b = other._front; b != 0; b = b->next)
			push_back(b->str);
		return *this;
	}

	// Front, Back, and Size Methods
	std::string& front()
	{
		return _front->str;
	}

	std::string& back()
	{
		return _back->str;
	}

	size_t size()
	{	
		return _size;
	}
	// End Front, Back, and Size Methods

	// Push Methods
	void push_front(std::string str)
	{
		llist *ptr = new llist;
		ptr->str = str;
		ptr->prev = NULL;
		ptr->next = _front;
		ptr->next->prev = ptr;
		_front = ptr;
		if(_back == NULL)
		{
			_back = ptr;
		}
		else
		{
			ptr->next->prev = ptr;
		}
		_front = ptr;
		_size++;
	}

	void push_back(std::string str)
	{
		llist *ptr = new llist;
		ptr->str = str;
		ptr->next = 0;
		ptr->prev = _back;
		if(_back != 0)
			_back->next = ptr;
		if(_front == 0)
			_front = ptr;
		_back = ptr;
		_size++;
	}
	// End Push Methods

	// Pop Methods
	void pop_front()
	{
		llist *saveptr = _front;
		_front = _front->next;
		if(_front)
			_front->prev = _front->prev->prev;
		else
			_back = 0;
		delete saveptr;
		_size--;
	}

	void pop_back()
	{
		llist *saveptr = _back;
		_back = _back->prev;
		if(_back)
			_back->next = _back->next->next;
		else
			_front = 0;
		delete saveptr;
		_size--;
	}
	// End Pop Methods

	// Emptying The Double Linked List
	bool empty() const
	{
		return (_front == 0)&&(_back == 0);
	}

	void clear()
	{
		while(!empty())
		{
			pop_front();
		}	
	}
	// End of Emptying
	
	// Unique and Reverse
	void unique()
	{
		for(llist *ptr = _front; ptr != 0; ptr = ptr->next)
		{
			while(ptr->next != 0 && ptr->str == ptr->next->str)
			{
				llist *saveptr = ptr->next;
				ptr->next = saveptr->next;
				if(saveptr->next == 0)
					saveptr->next->prev = ptr;
				else
					_back = ptr;
				delete saveptr;
				_size--;
			}
		}	
	}

	void reverse()
	{
		for(llist *z = _front; z != 0; z = z->prev)
		{
			llist *temp = z->next;
			z->next = z->prev;
			z->prev = temp;
		}
		llist *save;
		save = _back;
		_back = _front;
		_front = save;
	}

	// Useful Functions For Testing Probably will Delete when finished with testing
	void printData()
	{
		llist *ptr = new llist;
		for(ptr = _front; ptr != 0; ptr = ptr->next)
			std::cout << ptr->str << '\n';
	}
};

