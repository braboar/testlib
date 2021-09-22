#pragma once

#include <QObject>

#include "../base/base.h"


class Test2: public Base
{
    Q_OBJECT

public:
    Test2(QObject* parent = nullptr);
    ~Test2();

    void setStopRequested(bool stop);
    bool getStopRequested();

public slots:
    void slot_do_test();
    void slot_stop_test();
};
