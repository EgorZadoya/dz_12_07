#include <iostream>

using namespace std;

class Baza {
protected:
    double distance;
public:
    Baza(double _distance) : distance{_distance}{}
};

class Auto : public Baza {
    double speed;
    double cost;
public:
    Auto(double _distance, double _speed, double _cost) : Baza(_distance), speed{ _speed }, cost{ _cost } {}
    double time1() {
        double time;
        time = distance / speed ;
        return time;
    }
    double time_gruz() {
        double time;
        time = (distance / speed) * 0.12;
        time += time1();
        return time;
    }
    double time_pas() {
        double time;
        time = distance / speed * 0.08;
        time += time1();
        return time;
    }
    double time_pas_gruz() {
        double time;
        time = distance / speed * 0.2;
        time += time1();
        return time;
    }
    void show() {
        cout << "_______________________________________________" << endl;
        cout << "\tПустая машина" << endl;
        cout << "Цена: " << time1() * cost << endl
            << "Время: " << time1() << endl;
        cout << "\tМашина с пассажирами" << endl;
        cout << "Цена: " << time_pas() * cost << endl
            << "Время: " << time_pas() << endl;
        cout << "\tМашина с грузом" << endl;
        cout << "Цена: " << time_gruz() * cost << endl
            << "Время: " << time_gruz() << endl;
        cout << "\tМашина с грузом и пассажирами" << endl;
        cout << "Цена: " << time_pas_gruz() * cost << endl
            << "Время: " << time_pas_gruz() << endl;
    }
};

class Bike : public Baza {
    double speed;
    double cost;
public:
    Bike(double _distance, double _speed, double _cost) : Baza(_distance), speed{ _speed }, cost{ _cost } {}
    double time1() {
        double time;
        time = distance / speed;
        return time;
    }
    double time_gruz() {
        double time;
        time = (distance / speed) * 0.12;
        time += time1();
        return time;
    }
    double time_pas() {
        double time;
        time = distance / speed * 0.08;
        time += time1();
        return time;
    }
    double time_pas_gruz() {
        double time;
        time = distance / speed * 0.2;
        time += time1();
        return time;
    }
    void show() {
        cout << "_______________________________________________" << endl;
        cout << "\tПустой велосипед" << endl;
        cout << "Цена: " << time1() * cost << endl
            << "Время: " << time1() << endl;
        cout << "\tВелосипед с пассажирами" << endl;
        cout << "Цена: " << time_pas() * cost << endl
            << "Время: " << time_pas() << endl;
        cout << "\tВелосипед с грузом" << endl;
        cout << "Цена: " << time_gruz() * cost << endl
            << "Время: " << time_gruz() << endl;
        cout << "\tВелосипед с грузом и пассажирами" << endl;
        cout << "Цена: " << time_pas_gruz() * cost << endl
            << "Время: " << time_pas_gruz() << endl;
    }
};

class Povozka : public Baza{
    double speed;
    double cost;
public:
    Povozka(double _distance, double _speed, double _cost) : Baza(_distance), speed{ _speed }, cost{ _cost } {}
    double time1() {
        double time;
        time = distance / speed;
        return time;
    }
    double time_gruz() {
        double time;
        time = (distance / speed) * 0.12;
        time += time1();
        return time;
    }
    double time_pas() {
        double time;
        time = distance / speed * 0.08;
        time += time1();
        return time;
    }
    double time_pas_gruz() {
        double time;
        time = distance / speed * 0.2;
        time += time1();
        return time;
    }
    void show() {
        cout << "_______________________________________________" << endl;
        cout << "\tПустая повозка" << endl;
        cout << "Цена: " << time1() * cost << endl
            << "Время: " << time1() << endl;
        cout << "\tПовозка с пассажирами" << endl;
        cout << "Цена: " << time_pas() * cost << endl
            << "Время: " << time_pas() << endl;
        cout << "\tПовозка с грузом" << endl;
        cout << "Цена: " << time_gruz() * cost << endl
            << "Время: " << time_gruz() << endl;
        cout << "\tПовозка с грузом и пассажирами" << endl;
        cout << "Цена: " << time_pas_gruz() * cost << endl
            << "Время: " << time_pas_gruz() << endl;
    }
};


int main()
{
    setlocale(LC_ALL, "ru");
    Auto a1{ 145, 60, 20 };
    a1.show();
    Bike b1{ 145, 20, 4 };
    b1.show();
    Povozka p1{ 145, 8, 0.5 };
    p1.show();
}