#include <iostream>
#include <string>

using namespace std;

class Vehicle {
public:
    double mileage;
    double price;

    Vehicle(double mileage, double price) {
        this->mileage = mileage;
        this->price = price;
    }

    void print() {
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

class Car : public Vehicle {
public:
    double ownership_cost;
    int warranty_years;
    int seating_capacity;
    string fuel_type;

    Car(double mileage, double price, double ownership_cost, int warranty_years, int seating_capacity, string fuel_type) : Vehicle(mileage, price) {
        this->ownership_cost = ownership_cost;
        this->warranty_years = warranty_years;
        this->seating_capacity = seating_capacity;
        this->fuel_type = fuel_type;
    }

    void print() {
        Vehicle::print();
        cout << "Ownership Cost: " << ownership_cost << endl;
        cout << "Warranty Years: " << warranty_years << endl;
        cout << "Seating Capacity: " << seating_capacity << endl;
        cout << "Fuel Type: " << fuel_type << endl;
    }
};

class Bike : public Vehicle {
public:
    int num_cylinders;
    int num_gears;
    string cooling_type;
    string wheel_type;
    double fuel_tank_size;

    Bike(double mileage, double price, int num_cylinders, int num_gears, string cooling_type, string wheel_type, double fuel_tank_size) : Vehicle(mileage, price) {
        this->num_cylinders = num_cylinders;
        this->num_gears = num_gears;
        this->cooling_type = cooling_type;
        this->wheel_type = wheel_type;
        this->fuel_tank_size = fuel_tank_size;
    }

    void print() {
        Vehicle::print();
        cout << "Number of Cylinders: " << num_cylinders << endl;
        cout << "Number of Gears: " << num_gears << endl;
        cout << "Cooling Type: " << cooling_type << endl;
        cout << "Wheel Type: " << wheel_type << endl;
        cout << "Fuel Tank Size: " << fuel_tank_size << endl;
    }
};

class Audi : public Car {
public:
    string model_type;

    Audi(double mileage, double price, double ownership_cost, int warranty_years, int seating_capacity, string fuel_type, string model_type) : Car(mileage, price, ownership_cost, warranty_years, seating_capacity, fuel_type) {
        this->model_type = model_type;
    }

    void print() {
        Car::print();
        cout << "Model Type: " << model_type << endl;
    }
};

class Ford : public Car {
public:
    string model_type;

    Ford(double mileage, double price, double ownership_cost, int warranty_years, int seating_capacity, string fuel_type, string model_type) : Car(mileage, price, ownership_cost, warranty_years, seating_capacity, fuel_type) {
        this->model_type = model_type;
    }

    void print() {
        Car::print();
        cout << "Model Type: " << model_type << endl;
    }
};

class Bajaj : public Bike {
public:
    string make_type;

    Bajaj(double mileage, double price, int num_cylinders, int num_gears, string cooling_type, string wheel_type, double fuel_tank_size, string make_type) :Bike(mileage, price, num_cylinders, num_gears, cooling_type, wheel_type, fuel_tank_size) {
this->make_type = make_type;
}
void print() {
    Bike::print();
    cout << "Make Type: " << make_type << endl;
}
};
class TVS : public Bike {
public:
string make_type;
TVS(double mileage, double price, int num_cylinders, int num_gears, string cooling_type, string wheel_type, double fuel_tank_size, string make_type) : Bike(mileage, price, num_cylinders, num_gears, cooling_type, wheel_type, fuel_tank_size) {
    this->make_type = make_type;
}

void print() {
    Bike::print();
    cout << "Make Type: " << make_type << endl;
}
};

int main() {
Audi audi(10.5, 1000000, 50000, 3, 5, "Petrol", "A6");
Ford ford(12.3, 1200000, 45000, 4, 4, "Diesel", "Mustang");
Bajaj bajaj(40.0, 80000, 1, 4, "Air", "Spokes", 10.0, "Pulsar");
TVS tvs(35.0, 70000, 1, 5, "Oil", "Alloys", 8.0, "Apache");
cout << "AUDI:" << endl;
audi.print();
cout << endl;

cout << "FORD:" << endl;
ford.print();
cout << endl;

cout << "BAJAJ:" << endl;
bajaj.print();
cout << endl;

cout << "TVS:" << endl;
tvs.print();
cout << endl;

return 0;
}
