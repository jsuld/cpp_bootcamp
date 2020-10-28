#ifndef LINKED_RECORDS_H
#define LINKED_RECORDS_H
#include <iostream>
#include "records.h"

struct RecordNode
{
    Record *rec;
    struct RecordNode *next;
};

RecordNode * append(struct RecordNode *head, Record *node_data);

RecordNode * remove_first(struct RecordNode *head);

void displayList(struct RecordNode *node);

#endif // LINKED_RECORDS_H