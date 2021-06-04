#include<iostream>
#include<assert.h>
using namespace std;

template<typename T>
class Stack {
	T* data;
	size_t size = 0;
public:
	Stack() :data(NULL), size(NULL) {}
	//push pop peek
	void push(const T& value) {
		auto newarray = new T[size + 1]{};
		for (size_t i = 0; i < size; i++)
		{
			newarray[i] = data[i];
		}
		newarray[size] = value;
		if (size != 0) {
			delete[]data;
		}
		data = newarray;
		newarray = nullptr;
		++size;
	}

	T pop() {
		assert(size > 0);
		auto newarray = new T[size - 1]{};
		for (size_t i = 0; i < size - 1; i++)
		{
			newarray[i] = data[i];
		}
		T last = data[size - 1];
		if (size != 0) {
			delete[]data;
		}
		data = newarray;
		newarray = nullptr;
		--size;
		return last;
	}

	T peek() {
		assert(size > 0);
		return data[size - 1];
	}


	int getSize()const {
		return size;
	}
	void clear() {
		if (this->data == NULL || this->size == 0) {
			return;
		}
		delete[]data;
		this->data = NULL;
		this->size = NULL;
	}

	~Stack()
	{
		delete[]data;
	}
};

class Node {
	Node* prev;
	Node* next;
	Wagon data;

};

class Train {//linked list
	Node* front;
	Node* end;

};

class Product {
	int id;
	string name;
	double price;
	int discount;
	string company;

};

class Wagon { 
	string no;
	int product_count;
	int speed;
	string country;
	Stack<Product> products;
public:

};



void main() {





}