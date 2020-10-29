#include "records.h"
#include "linked_records.h"

int main() {

    Record rec1(20201021);

    rec1.ChangeTire();
    rec1.ChangeDPF();
    rec1.WashCar();
    rec1.Display();

    Record rec2(19990523);

    rec2.Service(2000);
    rec2.Display();

    Record *rec3 = new Record(20191231);
    rec3->ChangeDPF();
    rec3->Display();

    Record *rec4 = new Record(20201231);
    rec4->ChangeDPF();
    rec4->ChangeTire();
    rec4->WashCar();
    rec4->Display();


    std::cout << "\n\n--------- Linked lists...-------\n\n";

    RecordNode *recHead = nullptr;

    recHead=append(recHead,rec3);
    recHead=append(recHead,rec4);
    displayList(recHead);

    while(recHead!=nullptr){
        recHead=remove_first(recHead);
    }

    delete rec3;
    delete rec4;

    return 0;
}