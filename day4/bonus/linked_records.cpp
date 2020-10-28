#include "linked_records.h"

RecordNode * append(struct RecordNode *head, Record *node_data)
{

    RecordNode *newNode = new RecordNode;
    RecordNode *last = head;
    newNode->rec = node_data;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        delete last;
        return head;
    }
    
    while (last->next != nullptr)
        last = last->next;
    
    last->next = newNode;
    
    return head;
}

RecordNode * remove_first(struct RecordNode *head){
    RecordNode *head_temp = new RecordNode;
    head_temp=head;
    head=head_temp->next;
    delete head_temp;
    return head;
}

void displayList(struct RecordNode *node)
{
    std::cout << "\n\n--------- displayList...-------\n\n";
    while (node != nullptr)
    {
        node->rec->Display();
        node = node->next;
    }
 
    //if(node == nullptr)
    //    std::cout<<"null"; 
    std::cout << std::endl;
} 