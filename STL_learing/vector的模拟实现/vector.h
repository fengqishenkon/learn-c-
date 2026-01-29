//#define _CRT_SECURE_NO_WARNINGS  
#pragma once
//#include<iostream>
//#include<vector>
#include<assert.h>
namespace lzq
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;

		typedef const T* const_iterator;
		vector()
			:_start(nullptr)
			, _finish(nullptr)
			, _endofstorage(nullptr)
		{}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				size_t old_size = size();
				T* tmp = new T[n];
				if (_start)
				{
					memcpy(tmp, _start, sizeof(T) * size());
					delete[]_start;
				}
				_start = tmp;
				_finish = _start + old_size;
				_endofstorage = _start + n;	
			}
		}

		iterator begin()
		{
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

		const_iterator begin() const
		{
			return _start;
		}

		const_iterator end() const
		{
			return _finish;
		}
		

		T& operator[](size_t i)
		{
			assert(i < size());
			return _start[i];
		}

		const T& operator[](size_t i) const
		{
			assert(i < size());
			return _start[i];
		}



		size_t size() const
		{
			return _finish - _start;	
		}


		size_t capacity() const
		{
			return _endofstorage - _start;
		}



		void push_back(const T& x)
		{
			if (_finish == _endofstorage)
			{
				reserve(capacity() == 0 ? 4 : capacity() * 2);
			}
			(*_finish) = x;
			++_finish;
		}

		bool empty()
		{
			return _start == _finish;
		}

		void pop_back()
		{
			assert(!empty());
			--_finish;
		}

		void insert(iterator p, const T& x)
		{
			assert(p >= _start);
			assert(p <=_finish);
			if (_finish == _endofstorage)
			{
				size_t len = p - _start;
				reserve(capacity() == 0 ? 4 : capacity() * 2);
				p = _start + len;
			}
			iterator end = _finish - 1;
		
			while (end >= p)
			{
				*(end + 1) = *end;
				--end;
			}
			*p = x;
			++_finish;
		}

	private:
		iterator _start;
		iterator _finish;
		iterator _endofstorage;
	};
}


//模板 声明和定义不能分离定义到两个文件.h  .cpp
//template<class T>
//class vector
//{
//private:s
//	T* _a;
//	size_t _size;
//	size_t _capacity;
//};



