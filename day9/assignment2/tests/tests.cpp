#include "linked_records.h"
#include "records.h"
#include <cassert>


void test_costOfTireChange(){
    Record rec1(20201021);
    Part *tire= new Tire();
    rec1.ChangeTire();

    if(rec1.GetTotalPrice()==tire->getPrice())
        std::cout << "Payment of Tire OK\n";
    else
        std::cout << "Payment of Tire not OK\n";

    delete tire;
}

void test_costOfDPFChange(){
    Record rec1(20201021);
    Part *aDPF= new DPF();

    rec1.ChangeDPF();
    if(rec1.GetTotalPrice()==aDPF->getPrice())
        std::cout << "Payment of DPF OK\n";
    else
        std::cout << "Payment of DPF not OK\n";
        
    delete aDPF;
}

void test_totalCost1(){
    Record rec1(20201021);
    Part *tire= new Tire();
    Part *aDPF= new DPF();

    rec1.ChangeTire();
    rec1.ChangeDPF();

    assert(rec1.GetTotalPrice()==(aDPF->getPrice()+tire->getPrice()));
    std::cout << "Total payment OK\n";

    delete tire, aDPF;
    
}

void test_linkedRecords(){
    RecordNode *recHead = nullptr;

    Record *rec1 = new Record(20201021);
    Record *rec2 = new Record(20201021);

    rec1->Service(500);
    rec2->Service(1000);

    recHead=append(recHead,rec1);
    recHead=append(recHead,rec2);

    assert(recHead->rec->GetTotalPrice()==500);

    recHead=remove_first(recHead);

    assert(recHead->rec->GetTotalPrice()==1000);

    std::cout << "Adding/removing record to linked list OK\n";

    delete rec1, rec2;
}

int main(){
    test_costOfTireChange();
    test_costOfDPFChange();
    test_totalCost1();
    test_linkedRecords();
    return 0;
}