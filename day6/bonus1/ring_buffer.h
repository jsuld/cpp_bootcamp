#include <iostream>

class ring_buffer{
  public:
    ~ring_buffer();
    ring_buffer(const size_t &buffer_size);
    void Write(const int &val);
    int Read();
  private:
    int *data;
    int *head;
    int *tail;
    int *end_of_data;
    int *start_of_data;
};