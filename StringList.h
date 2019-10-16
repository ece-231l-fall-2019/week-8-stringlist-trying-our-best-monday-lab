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
		this->_front = other._front;
		this->_back = other._back;
		_size = other._size;
		return *this;

	}
	std::string& front()
	{
		return _front->str;
	}

	void push_front(std::string str)
	{
		llist *ptr = new llist;
		ptr->str = str;
		ptr->next = _front;
		_front = ptr;
		if(_front->next == NULL)
		{
			_back = ptr;
			ptr->next = ptr;
		}
		else
		{
			ptr->next->prev = ptr;
		}
		_front = ptr;
		Delete(ptr);
		_size++;
	}

	void pop_front()
	{
		_front = _front->next;
		delete _front->prev;
		_size = _size - 1;
	}

	bool empty() const
	{
		if(_front == NULL && _back == NULL)
			return false;
		return true; 
	}

		
	void push_back(std::string str)
	{
		llist *ptr = new llist;
		ptr->str = str;
		ptr->prev= _back;
		_back = ptr;
		if(_back->prev == NULL)
		{
			_front = ptr;
			ptr->prev = ptr;
		}
		else
		{
			ptr->prev->next = ptr;
		}
		_back = ptr;
		Delete(ptr);
		_size++;
	}
	
	size_t size()
	{	
		return _size;
	}

	void pop_back()
	{
		_back = _back->prev;
		_back->next = NULL;
		if(_size == 0)
			_size = _size;
		else 
			_size = _size -1;
		delete _back->next;
	} 

	std::string& back()
	{
		return _back->str;
	}

	void clear()
	{
		while(empty() == false)
			pop_front();
	}
	void printData()
	{
		llist *ptr = new llist;
		for(ptr = _front; ptr != 0; ptr = ptr->next)
			std::cout << ptr->str << '\n';
	}
	void Delete(llist *ptr)
	{
		ptr = NULL;
		delete ptr;

	}
};

