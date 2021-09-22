#pragma once

#include <QObject>

#include <iostream>


class Base: public QObject
{
    Q_OBJECT

public:
    Base(QObject* parent);
    virtual ~Base();

    virtual void setStopRequested(bool stop);
    virtual bool getStopRequested();

signals:
    void signal_test_msg(const QString msg);
    int signal_test_done(const int res);

public slots:
    virtual void slot_do_test();
    virtual void slot_stop_test();

protected:
    bool m_stopRequested;
};
