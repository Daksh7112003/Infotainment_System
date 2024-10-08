// #include "system.h"

// System::System(QObject *parent)
//     : QObject{parent}
//     , m_carLocked(true)
//     , m_outdoorTemp(65)
//     , m_userName("Daksh")
// {}

// bool System::carLocked() const
// {
//     return m_carLocked;
// }

// void System::setCarLocked(bool carLocked)
// {
//     if (m_carLocked == carLocked)
//         return;

//     m_carLocked = carLocked;
//     emit carLockedChanged(m_carLocked);
// }

// int System::outdoorTemp() const
// {
//     return m_outdoorTemp;
// }

// void System::setOutdoorTemp(int newOutdoorTemp)
// {
//     if (m_outdoorTemp == newOutdoorTemp)
//         return;
//     m_outdoorTemp = newOutdoorTemp;
//     emit outdoorTempChanged();
// }

// QString System::userName() const
// {
//     return m_userName;
// }

// void System::setUserName(const QString &newUserName)
// {
//     if (m_userName == newUserName)
//         return;
//     m_userName = newUserName;
//     emit userNameChanged();
// }


// QString System::currentTime() const
// {
//     return m_currentTime;
// }

// void System::setCurrentTime(const QString &newCurrentTime)
// {
//     if (m_currentTime == newCurrentTime)
//         return;
//     m_currentTime = newCurrentTime;
//     emit currentTimeChanged();
// }



#include "system.h"
#include <QDateTime>

System::System(QObject *parent)
    : QObject{parent}
    , m_carLocked(true)
    , m_outdoorTemp(65)
    , m_userName("Daksh")
{
    m_currentTimeTimer = new QTimer(this);
    m_currentTimeTimer->setInterval(500);
    m_currentTimeTimer->setSingleShot(true);

    connect(m_currentTimeTimer, &QTimer::timeout, this, &System::currentTimeTimerTimeout);
    currentTimeTimerTimeout();
}

bool System::carLocked() const
{
    return m_carLocked;
}

void System::setCarLocked(bool carLocked)
{
    if (m_carLocked == carLocked)
        return;

    m_carLocked = carLocked;
    emit carLockedChanged(m_carLocked);
}

int System::outdoorTemp() const
{
    return m_outdoorTemp;
}

void System::setOutdoorTemp(int newOutdoorTemp)
{
    if (m_outdoorTemp == newOutdoorTemp)
        return;
    m_outdoorTemp = newOutdoorTemp;
    emit outdoorTempChanged();
}

QString System::userName() const
{
    return m_userName;
}

void System::setUserName(const QString &newUserName)
{
    if (m_userName == newUserName)
        return;
    m_userName = newUserName;
    emit userNameChanged();
}

QString System::currentTime() const
{
    return m_currentTime;
}

void System::setCurrentTime(const QString &newCurrentTime)
{
    if (m_currentTime == newCurrentTime)
        return;
    m_currentTime = newCurrentTime;
    emit currentTimeChanged();
}




void System::currentTimeTimerTimeout()
{
    QDateTime dateTime;
    QString currentTime = dateTime.currentDateTime().toString("h:mm ap");
    setCurrentTime(currentTime);
    m_currentTimeTimer->start();
}

QString System::currentTemperature() const
{
    return m_currentTemperature;
}


void System::setCurrentTemperature(const QString &newCurrentTemperature)
{
    if (m_currentTemperature == newCurrentTemperature)
        return;
    m_currentTemperature = newCurrentTemperature;
    emit currentTemperatureChanged();


}




