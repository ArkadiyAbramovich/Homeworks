#include <QCoreApplication>
#include <QtNetwork/QTcpSocket>
#include <QtSql/QSqlDatabase>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTcpSocket socker;
    QSqlDatabase database;

    return a.exec();
}
