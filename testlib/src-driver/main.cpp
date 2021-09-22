#include <iostream>

#include <QtCore>

#include "test1/test1.h"
#include "test2/test2.h"

int main()
{
    using namespace std;

    cout << "Test of lib\n";

    Test1 t1;

    t1.setStopRequested(true);
    t1.slot_stop_test();

    Test2 t2;
    t2.slot_stop_test();

    return 0;
}
