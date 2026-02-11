#define _CRT_SECURE_NO_WARNINGS 


namespace lzq
{
	template<class T>

	struct list_node
	{
		T _data;
		list_node<T>* _next;
		list_node<T>* _prev;
		list_node(const T& x=T())
			:_data(x)
			,_next(nullptr)
			,_prev(nullptr)
		{}
	};


	template<class T>
	struct  __list_iterator
	{
		typedef list_node<T> Node;
		Node* _node;
		__list_iterator(Node* node)
			:_node(node)
		{}

         
		T& operator*()
		{
			return _node->_data;
		}
		__list_iterator<T>& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		bool operator!=(const __list_iterator<T>& it)
		{
			return _node != it._node;
		}

	};


   template<class T>

	class list
	{
		typedef list_node<T> Node;
	public:
		typedef __list_iterator<T> iterator;	

		iterator begin()
		{
			return iterator(_head->_next);
		}

		iterator end()
		{
			return iterator(_head);
		}

		list()
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
		}

		void push_back(const T& x)
		{
			Node* newnode = new Node(x);
			Node* tail = _head->_prev;

			tail->_next = newnode;
			newnode->_prev = tail;
			newnode->_next = _head;
			_head->_prev = newnode;
		}

	private:
		Node* _head;
	};
}




