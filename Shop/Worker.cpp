#include "Worker.h"

Worker::~Worker()
{
    if(nullptr != order)
    {
        delete order;
        order = nullptr;
    }
}

Orders Worker::getOrder() const
{
    return *order;
}

std::string Worker::getSchedule() const
{
    return schedule;
}

void Worker::ordering()
{
}
