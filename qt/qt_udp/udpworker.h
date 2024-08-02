#ifndef UDPWORKER_H
#define UDPWORKER_H

#include <QUdpSocket>
#include <QNetworkDatagram>
#include <QDateTime>
#include <QMutex>


#define BIND_PORT 12345

class UDPworker : public QObject
{
    Q_OBJECT
public:
    explicit UDPworker(QObject *parent = nullptr);
    void InitSocket( void );
    void ReadDatagram( QNetworkDatagram datagram);
    void ReadDatagramT( QNetworkDatagram datagram);
    void SendDatagram(QByteArray data );
    void SendDatagramT(QByteArray data );

private slots:
    void readPendingDatagrams(void);
    void readPendingDatagramsT(void);


private:
    QUdpSocket* serviceUdpSocket;
    QUdpSocket* socket;
    QMutex mutex;


signals:
    void sig_sendTimeToGUI(QDateTime data);

    void sig_sendDataToGUI(QString data);

};

#endif // UDPWORKER_H
