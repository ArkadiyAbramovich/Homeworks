#include "udpworker.h"

UDPworker::UDPworker(QObject *parent) : QObject(parent)
{



}


/*!
 * @brief Метод инициализирует UDP сервер
 */
void UDPworker::InitSocket()
{

    serviceUdpSocket = new QUdpSocket(this);
    socket = new QUdpSocket(this);
    /*
     * Соединяем присваиваем адрес и порт серверу и соединяем функцию
     * обраотчик принятых пакетов с сокетом
     */
    serviceUdpSocket->bind(QHostAddress::LocalHost, BIND_PORT);
    socket->bind(QHostAddress::LocalHost, BIND_PORT);


    connect(serviceUdpSocket, &QUdpSocket::readyRead, this, &UDPworker::readPendingDatagrams);
    connect(socket, &QUdpSocket::readyRead, this, &UDPworker::readPendingDatagramsT);

}

/*!
 * @brief Метод осуществляет обработку принятой датаграммы
 */
void UDPworker::ReadDatagram(QNetworkDatagram datagram)
{
        QByteArray data;
        data = datagram.data();

        QDataStream inStr(&data, QIODevice::ReadOnly);
        QDateTime dateTime;
        inStr >> dateTime;

        emit sig_sendTimeToGUI(dateTime);

}

void UDPworker::ReadDatagramT(QNetworkDatagram datagram) {

        QByteArray data;
        data = datagram.data();

        QDataStream inStr(&data, QIODevice::ReadOnly);
        QString dataStr;
        inStr >> dataStr;

        emit sig_sendDataToGUI(dataStr);

}

/*!
 * @brief Метод осуществляет опередачу датаграммы
 */
void UDPworker::SendDatagram(QByteArray data)
{
    /*
     *  Отправляем данные на localhost и задефайненный порт
     */
    serviceUdpSocket->writeDatagram(data, QHostAddress::LocalHost, BIND_PORT);
}

void UDPworker::SendDatagramT(QByteArray data)
{
    /*
     *  Отправляем данные на localhost и задефайненный порт
     */
    socket->writeDatagram(data, QHostAddress::LocalHost, BIND_PORT);
}
/*!
 * @brief Метод осуществляет чтение датаграм из сокета
 */
void UDPworker::readPendingDatagrams( void )
{
    /*
     *  Производим чтение принятых датаграмм
     */
    while(serviceUdpSocket->hasPendingDatagrams()){
            QNetworkDatagram datagram = serviceUdpSocket->receiveDatagram();
            ReadDatagram(datagram);

    }

}

void UDPworker::readPendingDatagramsT( void )
{
    /*
     *  Производим чтение принятых датаграмм
     */
    while(socket->hasPendingDatagrams()){
            QNetworkDatagram datagram = socket->receiveDatagram();
            ReadDatagramT(datagram);

    }

}

