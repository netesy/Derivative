#include "registered.h"

Registered::Registered(QObject *parent) :
    QObject(parent)
{
}

bool Registered::IsRegistered()
{
  return  m_Registered;
}
