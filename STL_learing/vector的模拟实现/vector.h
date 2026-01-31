//#define _CRT_SECURE_NO_WARNINGS  
#pragma once
//#include<iostream>
//#include<vector>

#include<assert.h>
#include <initializer_list> 

namespace lzq
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;

		typedef const T* const_iterator;

		//强制编译器生成默认构造
		vector() = default;
		

		vector(std::initializer_list<T> il)
		{
			reserve(il.size());
			for (auto& e : il)
			{
				push_back(e);
			}
		}

		//v2(v1)
		vector(const vector<T>& v)
		{
			reserve(v.capacity());
			for (auto& e : v)
			{
				push_back(e);
			}
		}

		//
		template<class InputIterator>
		vector(InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		vector(int n, T val = T())
		{
			resize(n, val);
		}


		~vector()
		{
			if (_start)
			{
				delete[]_start;
				_start = _finish = _endofstorage=nullptr;
			}
		}

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


		void resize(size_t n, T val = T())//内置类型也可以构造   resize函数的目的是改变容器中元素的数量，而不改变容器的容量（除非需要扩容）
		{
			if (n > size())
			{
				reserve(n);
				while (_finish != _start + n)
				{
					(*_finish) = val;
					++_finish;
				}
			}
			else
			{
				_finish = _start + n;
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
		void clear()
		{
			_finish=_start;
		}
		

		T& operator[](size_t i)
		{
			assert(i < size());
			return _start[i];
		}

		void swap(vector<T>& v)
		{
			std::swap(_finish, v._finish);
			std::swap(_start, v._start);
			std::swap(_endofstorage, v._endofstorage);
		}

		//v1=v7
		vector<T>& operator=(vector<int>& v)
		{
			swap(v);
			return *this;
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
		 
		iterator insert(iterator p, const T& x)
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
			return p;
		}

		iterator erase(iterator p)
		{
			assert(p >= _start);
			assert(p <= _finish);
			iterator it = p + 1;
			while (it != _finish)
			{
				*(it-1) = *it;
				++it;
			}
			--_finish;
			return p;
		}


	private:
		iterator _start=nullptr;//指向数组起始位置的迭代器（实际为T*类型）
		iterator _finish= nullptr;//指向最后⼀个元素的下⼀个位置
		iterator _endofstorage= nullptr;//指向存储空间末尾
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



