#include <iostream>

using namespace std;

class Student {
protected:
    char* name;
    int age;
public:
    explicit Student(const char* _name, int _age) : age{ _age } {
        int size = strlen(_name);
        name = new char[size + 1];
        for (int i = 0; i <= size; i++){
            name[i] = _name[i];
        }
    }
};

class Aspirant : public Student{
private:
    char* diplom;
public:
    Aspirant(const char* _name, const char* _diplom, int _age) : Student(_name, _age) {
        int size = strlen(_diplom);
        diplom = new char[size + 1];
        for (int i = 0; i <= size; i++) {
            diplom[i] = _diplom[i];
        }
    }
    void show() {
        cout << "Имя студента: ";
        int size = strlen(name);
        for (int i = 0; i <= size; i++) {
            cout << name[i];
        }
        cout << endl << "Возраст студента: " << age
            << endl << "Диплом студента: ";
        int size1 = strlen(diplom);
        for (int i = 0; i <= size1; i++) {
            cout << diplom[i];
        }
    }
};

int main()
{
    setlocale(LC_ALL, "ru");
    Aspirant s1{ "Egor", "GEGE", 20 };
    s1.show();
}