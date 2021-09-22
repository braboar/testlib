#include "base.h"


Base::Base(QObject* parent /* = nullptr */):
    QObject(parent),
    m_stopRequested(false)
{
}


Base::~Base()
{
}


void Base::setStopRequested(bool stop)
{
    m_stopRequested = stop;
}


bool Base::getStopRequested()
{
    return m_stopRequested;
}


void Base::slot_do_test()
{
    using std::cout;

    cout << "[Base::slot_do_test]\n";
}


void Base::slot_stop_test()
{
    using std::cout;

    cout << "[Base::slot_stop_test]\n";
}
