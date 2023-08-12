#pragma once
#include <iostream>

using namespace std;

class Passport
{
protected:
	char* name;
	int age;
	unsigned int number;
public:
	Passport(const char* _name, int _age, unsigned int _number) : age{ _age }, number{ _number } {
		int size = strlen(_name);
		name = new char[size + 1];
		for (int i = 0; i <= size; i++) {
			name[i] = _name[i];
		}
	}
	void show() {
		cout << "Имя: ";
		int size = strlen(name);
		for (int i = 0; i <= size; i++) {
			cout << name[i];
		}
		cout << endl << "Возраст: " << age
			<< endl << "Номер: " << number;
	}
};

class ForeignPassport : public Passport {
	unsigned int number_foreign;
	bool visa;
public:
	ForeignPassport(const char* _name, int _age, unsigned int _number,unsigned int _number_foreign,bool _visa) : 
		Passport(_name, _age, _number), number_foreign{ _number_foreign }, visa{ _visa }{}
	void show_foreign() {
		Passport :: show();
		cout << endl << "Номер заграна: " << number_foreign
			<< endl;
		if (visa) {
			cout << "Есть виза";
		}
		else {
			cout << "Визы нет";
		}
	}
};

