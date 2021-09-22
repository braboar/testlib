#include "test1.h"


Test1::Test1(QObject* parent /* = nullptr */):
    Base(parent)
{
}


Test1::~Test1()
{
}

void Test1::slot_do_test()
{
    using std::cout;

    cout << "[Test1::slot_do_test]\n";
}


void Test1::slot_stop_test()
{
    using std::cout;

    cout << "[Test1::slot_stop_test]\n";
}


void Test1::setStopRequested(bool stop)
{
    using std::cout;

    cout << "[Test1::setStopRequested]\n";
}


bool Test1::getStopRequested()
{
    using std::cout;

    cout << "[Test1::getStopRequested]\n";

    return m_stopRequested;
}
