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
		strcpy(_str, str);//将源指针指向的C字符串复制到目标指针指向的数组中，包括终止空字符（并在此处停止）。
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


}

