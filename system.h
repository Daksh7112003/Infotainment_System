// #ifndef SYSTEM_H
// #define SYSTEM_H

// #include <QObject>

// class System : public QObject
// {
//     Q_OBJECT
//     Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged)

//     Q_PROPERTY(int outdoorTemp READ outdoorTemp WRITE setOutdoorTemp NOTIFY outdoorTempChanged FINAL)
//     Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged FINAL)
// public:
//     explicit System(QObject *parent = nullptr);

//     bool carLocked() const;

//     int outdoorTemp() const;


//     QString userName() const;


// public slots:
//     void setCarLocked(bool carLocked);
//      void setOutdoorTemp(int OutdoorTemp);
//      void setuserName( QString UserName);

// signals:
//     void carLockedChanged(bool carLocked);

//     void outdoorTempChanged();

//     void userNameChanged();

// private:
//     bool m_carLocked;
//     int m_outdoorTemp;
//     QString m_userName;
// };

// #endif // SYSTEM_H







#ifndef SYSTEM_H
#define SYSTEM_H

#include <QObject>
#include <QString>
#include <QTimer>

class System : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool carLocked READ carLocked WRITE setCarLocked NOTIFY carLockedChanged)
    Q_PROPERTY(int outdoorTemp READ outdoorTemp WRITE setOutdoorTemp NOTIFY outdoorTempChanged FINAL)
    Q_PROPERTY(QString userName READ userName WRITE setUserName NOTIFY userNameChanged FINAL)
    Q_PROPERTY(QString currentTime READ currentTime WRITE setCurrentTime NOTIFY currentTimeChanged FINAL)
    Q_PROPERTY(QString currentTemperature READ currentTemperature WRITE setCurrentTemperature NOTIFY currentTemperatureChanged FINAL)

public:
    explicit System(QObject *parent = nullptr);

    bool carLocked() const;
    int outdoorTemp() const;
    QString userName() const;
    QString currentTime() const;
    QString currentTemperature() const;

public slots:
    void setCarLocked(bool carLocked);
    void setOutdoorTemp(int newOutdoorTemp);
    void setUserName(const QString &newUserName);
    void setCurrentTime(const QString &newCurrentTime);
    void setCurrentTemperature(const QString &newCurrentTemperature);
    void currentTimeTimerTimeout();

signals:
    void carLockedChanged(bool carLocked);
    void outdoorTempChanged();
    void userNameChanged();
    void currentTimeChanged();
    void currentTemperatureChanged();

private:
    bool m_carLocked;
    int m_outdoorTemp;
    QString m_userName;
    QString m_currentTime;
    QString m_currentTemperature;
    QTimer *m_currentTimeTimer;
};

#endif // SYSTEM_H
