#ifndef REGISTERED_H
#define REGISTERED_H

#include <QObject>

class Registered : public QObject
{
    Q_OBJECT
public:
    explicit Registered(QObject *parent = 0);
    static bool IsRegistered();

signals:

public slots:

private:
bool m_Registered = false;

};

#endif // REGISTERED_H
