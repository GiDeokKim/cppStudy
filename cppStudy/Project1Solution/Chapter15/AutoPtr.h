#pragma once

#include <iostream>
// std::auto_ptr<int> // C++ 98 ~ 11, 17(deprecated)
// 15-01
//template<class T>
//class AutoPtr
//{
//public:
//	T* m_ptr = nullptr;
//
//public:
//	AutoPtr(T* ptr = nullptr)
//		: m_ptr(ptr)
//	{}
//
//	~AutoPtr()
//	{
//		if (m_ptr != nullptr)
//		{
//			delete m_ptr;
//		}
//	}
//
//	AutoPtr(AutoPtr& a)
//	{
//		m_ptr = a.m_ptr;
//		a.m_ptr = nullptr;
//	}
//
//	AutoPtr& operator=(AutoPtr& a)
//	{
//		if (&a == this)
//		{
//			return *this;
//		}
//
//		delete m_ptr;
//		m_ptr = a.m_ptr;
//		a.m_ptr = nullptr;
//		return *this;
//	}
//
//	T& operator*() const
//	{
//		return *m_ptr;
//	}
//
//	T* operator->() const
//	{
//		return m_ptr;
//	}
//
//	bool isNull() const
//	{
//		return m_ptr == nullptr;
//	}
//};

// 15-03
template<class T>
class AutoPtr
{
public:
	T* m_ptr;

public:
	AutoPtr(T* ptr = nullptr)
		: m_ptr(ptr)
	{
		std::cout << "AutoPtr default constructor " << std::endl;
	}

	~AutoPtr()
	{
		std::cout << "AutoPtr destructor " << std::endl;

		if (m_ptr != nullptr)
		{
			delete m_ptr;
		}
	}

	AutoPtr(const AutoPtr& a)
	{
		std::cout << "AutoPtr copy constructor " << std::endl;

		// deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;
	}

	AutoPtr(const AutoPtr&& a)
		: m_ptr(a.m_ptr)
	{
		a.m_ptr = nullptr; // really necessary?

		std::cout << "AutoPtr move constructor " << std::endl;
	}

	AutoPtr& operator=(AutoPtr&& a)
	{
		std::cout << "AutoPtr move assignment " << std::endl;

		if (&a == this) // prevent self-assignment
		{
			return *this;
		}

		if (m_ptr != nullptr)
		{
			delete m_ptr;
		}

		// shallow copy
		m_ptr = a.m_ptr;
		a.m_ptr = nullptr; // really necessary?

		return *this;
	}

	AutoPtr& operator=(const AutoPtr& a)
	{
		std::cout << "AutoPtr copy assignment " << std::endl;

		if (&a == this) // prevent self-assignment
		{
			return *this;
		}

		if (m_ptr != nullptr)
		{
			delete m_ptr;
		}

		// deep copy
		m_ptr = new T;
		*m_ptr = *a.m_ptr;

		return *this;
	}

	T& operator*() const
	{
		return *m_ptr;
	}

	T* operator->() const
	{
		return m_ptr;
	}

	bool isNull() const
	{
		return m_ptr == nullptr;
	}
};