#pragma once
#include <string>
#include <iostream>
using namespace std;

class Animal
{
protected:
	string name;
public:
	Animal(string name)
		: name(name)
	{
	}

	virtual void Say() = 0;
	virtual void Nick() = 0;
};

class Dog : public Animal
{
public:
	Dog(string name) : Animal(name)
	{
	}

	void Say()
	{
		cout << name << " speak gav-gav" << endl;
	}
	void Nick()
	{
		cout << name << " name Dog#1" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat(string name) : Animal(name)
	{
	}

	void Say()
	{
		cout << name << " speak may-may" << endl;
	}
	void Nick() 
	{
		cout << name << " name Cat#1" << endl;
	}
};

class Bird : public Animal
{
public:
	Bird(string name) : Animal(name)
	{
	}

	void Say() override
	{
		cout << name << " speak kray-kray" << endl;
	}
	void Nick() override
	{
		cout << name << " name Bird#1" << endl;
	}
};