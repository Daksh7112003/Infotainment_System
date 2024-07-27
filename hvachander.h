#ifndef HVACHANDER_H
#define HVACHANDER_H

#include <QObject>

class hvachander : public QObject
{
    Q_OBJECT
public:
    explicit hvachander(QObject *parent = nullptr);

signals:
};

#endif // HVACHANDER_H
