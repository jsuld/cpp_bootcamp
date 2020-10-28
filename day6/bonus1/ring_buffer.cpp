#include "ring_buffer.h"

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
        this->tail = this->start_of_data;
        *(this->tail) = val;
        this->tail = (this->tail + 1);
    }
    else
    {
        std::cout << "Writing " << val << " to " << this->tail << std::endl;
        *(this->tail) = val;
        this->tail = (this->tail + 1);
    }
    // Ska man kunna skriva när man gått ikapp read pointer?
}

int ring_buffer::Read()
{
    int val;
    //std::cout << "Read head: " << this->head << " tail: " << this->tail << "\n";
    if (this->head == this->tail)
        std::cout << "No data to read\n";
    else
    {
        val = *(this->head);
        (this->head)++;
    }
    return val;
}