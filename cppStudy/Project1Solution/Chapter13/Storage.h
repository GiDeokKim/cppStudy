#pragma once

#include <iostream>

template<class T>
class Storage
{
private:
	T m_value;

public:
	Storage(T value)
	{
		m_value = value;
	}

	~Storage()
	{}

	void print()
	{
		std::cout << m_value << '\n';
	}
};

template<> // cpp로 옮길 수 없다. // cpp로 옮기고 cpp 자체를 #include하는 방법도 있긴하다.
void Storage<double>::print()
{
	std::cout << "Double Type ";
	std::cout << std::scientific << m_value << '\n';
}