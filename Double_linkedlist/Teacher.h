#pragma once
#include<iostream>
using namespace std;

class Techer {
public:
	string name;
	void Show()const {
		cout << "name: " << name << endl;
	}
	string GetName()const {
		return name;
	}
};


void main() {


}