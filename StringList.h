#include <iostream>
#include <string>

class StringList
{
	private:

	typedef struct llist 
	{
		std::string str;
		struct llist *next;
		struct llist *prev;
	} llist;
	
	size_t _size;
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
	int size()
	{
		return _size;
	}

	// destructor
	~StringList()
	{
		while(!empty())
			pop_front();
	}

	// operator =
	StringList& operator=(const StringList& a)
	{
		for(const llist* b = a._front; b != 0; b = b -> next)
		{
			push_back(b->str);
		}
	
		return *this;
	}
	
	// front
	std::string& front()
	{
		return _front->str;
	}

	// back
	std::string& back()
	{
		return _back->str;
	}
	
	// push_back
	void push_back(std::string str)
	{
		llist *newBackItem = new llist;
		newBackItem -> str = str;
		newBackItem -> prev = _back;
		newBackItem -> next = 0;
		_back = newBackItem;
		_size++;
	}

	// push_front
	void push_front(std::string str)
	{
		if (_front == 0)
		{
			llist *newNode = new llist;
			newNode -> str = str;
			newNode -> next = 0;
			newNode -> prev = 0;
			_front = newNode;
			_back = newNode;
		}
		else
		{
			llist *newFrontItem = new llist;
			newFrontItem -> str = str;
			newFrontItem -> next = _front;
			newFrontItem -> prev = 0;
			_front = newFrontItem;	
			newFrontItem -> next -> prev = newFrontItem;
		}
		_size++;
	}
	
	// pop_front
	void pop_front()
	{
		_front = _front -> next;
		delete _front -> prev;
		_front -> prev = 0;
		_size = _size - 1;
	}
	
	// pop_back
	void pop_back()
	{
		_back = _back -> prev;
		delete _back -> next;
		_back -> next = NULL;
		_size = _size - 1;		
	}

	// empty
	bool empty() const
	{
		return _back == 0;
	}

	// reverse
	void reverse()
	{
		for (llist *z = _front; z != _back; z = z -> prev)
		{
			llist *temp = z -> next;
			z -> next = z -> prev;
			z -> prev = temp;
		}
		
		llist *_save;
		*_save = *_back;
		*_back = *_front;
		*_front = *_save;
	}

	// unique
	void unique()
	{
		for (llist *i = _front; i != 0; i = i -> next)
		{
			while (i -> next != 0 && i -> str == i -> next -> str)
			{
				llist *save = i -> next;
				i -> next = save -> next;
				
				if (save -> next != 0)
				{
					save -> next -> prev = i;
					delete save;
				}
				else 
				{
					_back = i;
					delete save;
				}
			}
		}
	}
	/*
	std::ostream& operator<<(std::ostream& out, const StringList& a)
	{
		a.unique;
		
	}
	*/
};

