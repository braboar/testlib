#pragma once

#include <iostream>

#include <QObject>

#include "../base/base.h"


class Test1: public Base
{
    Q_OBJECT

public:
    Test1(QObject* parent = nullptr);
    ~Test1();

    void setStopRequested(bool stop);
    bool getStopRequested();

public slots:
    void slot_do_test();
    void slot_stop_test();
};
