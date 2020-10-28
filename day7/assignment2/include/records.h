#ifndef RECORDS_H
#define RECORDS_H
#include <iostream>

class Part {
    public:
        Part() = default;
        Part(int amount);
        int getPrice();
    protected:
        int price = 0;
};

class Tire: public Part{
    public:
        Tire(int cost=500) : Part(cost) {};
    private:
        //int cost;
};

class DPF: public Part{
    public:
        DPF(int cost=1500) : Part(cost) {};
    private:
        //int cost;
};

class Record {
    public:
        Record() = default;
        Record(int date);
        ~Record() = default;
        void ChangePart(Part);
        void payment(int amount);
        void Display();
        void ChangeTire();
        void ChangeDPF();
        void WashCar();
        void Service(int ServiceCost);
    private:
        int date = 99999999;
        int TotalPrice = 0;
        int WashingCarCost = 200;
        std::string ServicesPerformed; // could be linked list or vector maybe
};

#endif // RECORDS_H