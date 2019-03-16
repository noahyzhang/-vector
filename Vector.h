////1. 熟悉vector的接口使用
////2. 完成vector章节的在线OJ题
////3. vector的模拟实现
//#include<iostream>
//using namespace std;
//
//template<class T>
//class vector
//{
//public:
//	typedef T* iterator;
//	typedef T* reverse_iterator;
//public:
//	vector()
//		: _start(nullptr)
//		, _last(nullptr)
//		, _endOfStorage(nullptr)
//	{}
//
//	vector(size_t n, const T& data = T())
//		: _start(new T[n])
//		, _last(_start + n)
//		, _endOfStorage(_last)
//	{
//		for (size_t i = 0; i < n; ++i)
//			_start[i] = data;
//
//		// 有问题 
//		//memset(_start, data, sizeof(T)*n); 
//	}
//
//	// [first, last)代表一段连续的空间 
//	vector(T* first, T* last)
//	{
//		int i = 0;
//		while (first < last)
//		{
//			this->_start[i++] = *first;
//			first++;
//		}
//		this->_last = i;
//	}
//
//	vector(const vector& v)
//	{
//		if (*this == v)
//			return;
//		if (this->_start != nullptr)
//			delete[] this->_start;
//		this->_start = new T[v._endOfStorage];
//		strcpy(this->_start, v._start);
//		this->_last = v._last;
//		this->_endOfStorage = v._endOfStorage;
//	}
//
//	~vector()
//	{
//		if (_start)
//		{
//			delete[] _start;
//			_start = _last = _endOfStorage = nullptr;
//		}
//	}
//
//	// 注意：深浅拷贝的问题 
//	vector& operator=(const vector v)
//	{
//		if (*this == v)
//			return;
//		if (this->_start != nullptr)
//			return;
//		this->_start = new T[v._endOfStorage];
//		strcpy(this->_start, v._start);
//		this->_last = v._last;
//		this->_endOfStorage = v._endOfStorage;
//	}
//
//	///////////////////////////////////////////////////// 
//	// itearor 
//	iterator begin()
//	{
//		return _start;
//	}
//
//	iterator end()
//	{
//		return _last;
//	}
//
//	reverse_iterator rbegin()
//	{
//		return end();
//	}
//
//	reverse_iterator rend()
//	{
//		return rbegin();
//	}
//
//	////////////////////////////////////////////// 
//	// capacity 
//	size_t size()const
//	{
//		return _last - _start;
//	}
//
//	size_t capacity()const
//	{
//		return _endOfStorage - _start;
//	}
//
//	bool empty()const
//	{
//		return _start == _last;
//	}
//
//	void resize(size_t newSize, const T& data = T())
//	{
//		if (newSize < *(this->_endOfStorage))
//			return;
//		T* tempV = new T[newSize];
//		memcpy(tempV, this->_start,this->size());
//		delete[] this->_start;
//		this->_start = tempV;
//		*(this->_endOfStorage) = newSize;
//		for (T* i = this->_last; i < this->_endOfStorage; i++)
//			*i = data;
//	}
//
//	void reserve(size_t newcapacity)
//	{
//		if (newcapacity > *(this->_endOfStorage))
//			return;
//		this->_last = newcapacity;
//	}
//	/////////////////////////////////////////// 
//	// acess 
//	T& operator[](size_t index)
//	{
//		return this->_start[index];
//
//	}
//
//	const T& operator[](size_t index)const
//	{
//		return this->_start[index];
//	}
//
//	T& front()
//	{
//		return this->_start[0];
//	}
//
//	const T& front()const
//	{
//		return this->_start[0];
//	}
//
//	T& back()
//	{
//		return this->_start[this->_last - 1];
//	}
//
//	const T& back()const
//	{
//		return this->_start[this->_last - 1];
//	}
//
//	///////////////////////////////////////// 
//
//	void push_back(T data)
//	{
//		ChickCapacity();
//		*(this->_last)++ = data;
//		//this->_start[this->_last++] = data;
//	}
//
//	void pop_back()
//	{
//		if(this->_last != nullptr)
//			this->_last--;
//	}
//
//	// 将data插在pos的位置 
//	// 返回新插入元素的位置 
//	iterator insert(iterator pos, const T& data)
//	{
//		this->_last++;
//		ChickCapacity();
//		for (T* i = this->_last; i > pos; i--)
//			*i = *(i - 1);
//		*pos = data;
//		return pos;
//	}
//
//	// 删除pos位置的元素 
//	// 返回pos下一个元素所在的位置(搬移后) 
//	iterator erase(iterator pos)
//	{
//		if (pos >= this->_last)
//			return nullptr;
//		for (T* i = pos + 1; i < this->_last; i++)
//			*(i - 1) = *i;
//		this->_last--;
//		return pos;
//	}
//
//	void clear()
//	{
//		this->_last = 0;
//	}
//
//	void swap(vector& v)
//	{
//		T* tempV = this->_start;
//		this->_start = v._start;
//		v._start = tempV;
//		tempV = this->_last;
//		this->_last = v._last;
//		v._last = tempV;
//		tempV = this->_endOfStorage;
//		this->_endOfStorage = v._endOfStorage;
//		v._endOfStorage = tempV;
//	}
//	void ChickCapacity()
//	{
//		if (this->_last >= this->_endOfStorage)
//		{
//			this->_endOfStorage = this->_endOfStorage * 2 + 3;
//			T* tempV = new T[this->_endOfStorage];
//			memcpy(tempV, this->_start,this->size());
//			this->_start = tempV;
//		}
//	}
//
//
//private:
//	iterator _start;
//	iterator _last; // _size 
//	iterator _endOfStorage; // _capacity 
//};
//
//
//
//
