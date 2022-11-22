#include <iostream>
#include <string>

// pure virtual function
class Animal
{
protected:
	std::string m_name;

public:
	Animal(std::string name)
		: m_name(name)
	{}

public:
	std::string getName()
	{
		return m_name;
	}

	virtual void speak() const = 0; // pure virtual function
	// ���� ���� �Լ��� ������ instance�� ���� �� ����.
	// �ڽ� Ŭ������ override�ϵ��� �����Ѵ�.
};

class Cat : public Animal
{
public:
	Cat(std::string name)
		: Animal(name)
	{}

	void speak() const
	{
		std::cout << m_name << " Meow" << std::endl;
	}
};

class Dog : public Animal
{
public:
	Dog(std::string name)
		: Animal(name)
	{}

	void speak() const
	{
		std::cout << m_name << " Woof" << std::endl;
	}
};

class Cow : public Animal
{
public:
	Cow(std::string name)
		: Animal(name)
	{}
};

// interface
class IErrorLog // interface class : ��� �Լ��� virtual ft
{
public:
	virtual bool reportError(const char* errorMessage) const = 0;

	virtual ~IErrorLog()
	{}
};

class FileErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) const override
	{
		std::cout << "Writing error to a file" << std::endl;
		return true;
	} 
};

class ConsoleErrorLog : public IErrorLog
{
public:
	bool reportError(const char* errorMessage) const override
	{
		std::cout << "Printing error to a console" << std::endl;
		return true;
	}
};

void doSomething(const IErrorLog& log)
{
	log.reportError("Runtime error!!");
}

int main()
{
	//Animal animal("my animal"); // error
	//Cow cow("hello"); // error

	FileErrorLog file_log;
	ConsoleErrorLog console_log;

	doSomething(file_log);
	doSomething(console_log);

	return 0;
}