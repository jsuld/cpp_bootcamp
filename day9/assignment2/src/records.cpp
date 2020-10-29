#include "records.h"

Part::Part(int amount) {
    this->price = amount;
    //std::cout << "Part price: " << price<<std::endl;
};

int Part::getPrice(){
    return price;
};

Record::Record(int date_in) {
    this->date=date_in;
};

void Record::ChangePart(Part part) {
    //std::cout << "Price: " << part.getPrice() << std::endl;
    this->payment(part.getPrice());
};

void Record::payment(int amount) {
    //std::cout << "Adding amoount " << amount << " to record price " << TotalPrice << std::endl;
    this->TotalPrice += amount;
};

int Record::GetTotalPrice() {
    return this->TotalPrice;
};

void Record::Display() {
    std::cout << "Sum of record:\nPayment: " << TotalPrice << " Date: " << date << " All services: " << ServicesPerformed << std::endl << std::endl;
};

void Record::ChangeTire() {
    //std::cout << "Changing tires\n";
    Tire newTire = Tire();
    this->ChangePart(newTire);
    ServicesPerformed += "Tire ";
};

void Record::ChangeDPF() {
    std::cout << "Changing DPF\n";
    DPF newDPF = DPF();
    this->ChangePart(newDPF);
    ServicesPerformed += "DPF ";
};

void Record::WashCar() {
    std::cout << "Washing car\n";
    payment(WashingCarCost);
    ServicesPerformed += "Wash ";
};

void Record::Service(int ServiceCost) {
    std::cout << "Car service, cost: " << ServiceCost << std::endl;
    payment(ServiceCost);
    ServicesPerformed += "Service";
};