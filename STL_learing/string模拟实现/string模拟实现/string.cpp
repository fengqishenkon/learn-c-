#define _CRT_SECURE_NO_WARNINGS 
#include"string.h"
namespace lzq
{
	/*string::string()
		:_str(new char[1]{'\0'})
		,_size(0)
		, _capacity(0)
	{

	}  */



	string::string(const char* str) 
		:_size(strlen(str))//长度不包括\0
	{
		_capacity=_size;
		_str=new char[_size+ 1];
		//strcpy(_str, str);//将源指针指向的C字符串复制到目标指针指向的数组中，包括终止空字符（并在此处停止）。
		memcpy(_str, str, _size+ 1);

	}


	string::~string()
	{
		delete[]_str;
		_capacity = 0;
		_size = 0;
	}
	 
	string::iterator string::begin()
	{
		return _str;
	}

	string::iterator string:: end()
	{
		return _str + _size;
	}

	string::const_iterator string:: begin() const
	{
		return _str;
	}

	string::const_iterator string ::end() const
	{
		return _str + _size;
	}


	size_t string::size() const
	{
		return _size;
	}

	char& string::operator[](size_t i)
	{
		assert(i < _size);
		return _str[i];
	}

	const char& string::operator[](size_t i) const
	{
		assert(i < _size);
		return _str[i];
	}



	const char* string::c_str() const
	{
		return _str;
	}



	void string::reserve(size_t n)
	{
		if (n > _capacity)
		{
			char* str = new char[n + 1];
			//strcpy(str,_str);
			memcpy(str, _str, _size + 1);
			delete[]_str;
			_str = str;
			_capacity = n;
		}
	}


	void string::push_back(char ch)
	{
		if (_size >= _capacity)
		{
			size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
			reserve(newcapacity);
		}
		_str[_size] = ch;
		++_size;
		_str[_size]='\0';
	}


	void string::append(const char* str)
	{
		size_t len = strlen(str);
		if (_size + len > _capacity)
		{
			size_t newcapacity = _size + len < 2 * _capacity ? 2 * _capacity : _size + len;
			reserve(newcapacity);
			//strcat(_str+len, str);
		}
		//strcpy(_str + _size, str);
		memcpy(_str + _size,str, len +1);
		_size += len;
	}

	string& string::operator+=(char ch)
	{
		push_back(ch);
		return *this;
	}



	string& string::operator+=(const char* str)
	{
		append(str);
		return *this;
	} 

	ostream& operator<<(ostream& out, const string& s)
	{

		for (auto i : s)
		{
			out << i;
		}
		return out;
	}

	void string::insert(size_t pos, char c)
	{
		assert(pos <= _size);
		if (_size >= _capacity)
		{
			size_t newcapacity = _capacity == 0 ? 4 : 2 * _capacity;
			reserve(newcapacity);
		}

		size_t end = _size + 1;
		while(end > pos)
		{
			_str[end] = _str[end -1];
			--end;
		}
		_str[pos] = c;
		++_size;
	}

	void string::insert(size_t pos, const char* str)
	{
		size_t len = strlen(str);
		if (_size + len > _capacity)
		{
			size_t newcapacity = _size + len < 2 * _capacity ? 2 * _capacity : _size + len;
   			reserve(newcapacity);
		}


		size_t end =len+_size;
		int size =_size;
		while (size>=(int)pos) 
		{
			_str[end]=_str[size];    
			--end;
			--size;
		}


		int a = len - 1;
		while (a>=0)
		{
			int i = 0;
			_str[pos] = str[i];
			++i;
			++pos;
			--a;
		}
		_size += strlen(str); 
	}

}

