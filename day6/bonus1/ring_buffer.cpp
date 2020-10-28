#include "ring_buffer.h"
#include <limits>


ring_buffer::~ring_buffer() { delete this->data; };

ring_buffer::ring_buffer(const size_t &buffer_size)
{
    this->data = new int[buffer_size];
    this->end_of_data = &(this->data[buffer_size]);
    this->start_of_data = &(this->data[0]);
    this->head = start_of_data;
    this->tail = start_of_data;
}

void ring_buffer::Write(const int &val)
{
    if (this->tail == this->end_of_data)
    {
        *(this->tail) = val;
        this->tail = this->start_of_data;
    }
    else
    {
        *(this->tail) = val;
        this->tail = (this->tail + 1);
    }
}

int ring_buffer::Read()
{
    int val;
    if (this->head == this->tail){
        std::cout << "No data to read\n";
        val=std::numeric_limits<int>::max();
    }
    else
    {   
        val = *(this->head);
        if(this->head==this->end_of_data)
            this->head=this->start_of_data;
        else              
            (this->head)++;
    }
    return val;
}