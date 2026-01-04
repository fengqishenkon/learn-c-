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
		:_size(strlen(str))
	{
		_capacity=_size;
		_str=new char[_size+ 1];
		strcpy(_str, str);
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
}

