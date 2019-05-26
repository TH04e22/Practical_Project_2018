#ifndef DATABASE_H
#define DATABASE_H

#include <QObject>
#include <QMap>
#include <QtSql>
#include <QStringList>
#include <QDateTime>
#include <QDebug>
#include <QStringListModel>
#include <QMessageBox>
#include "datatablemodel.h"
#include "product.h"

class Database: public QObject
{
    Q_OBJECT
public:
    explicit Database(QObject *parent = nullptr);
    bool isConnect();
    bool connectDB( QMap<QString, QString> &config );
    QStringList getProduct();
    QString getProductName( QString );
    dataTableModel* getProductDataModel();
    QSqlRecord getRecord( QModelIndex );
    QMap<QString,ErrorInfo> getProductError( QString );
    QMap<QString,int> getStuffError( QString );
    QMap<QString,int> getSingleDayData( QDate );
    QMap<QString,QMap<QString,int>> getSingleDayEachHourData( QDate );
public slots:
    bool deleteRecords( QModelIndexList );
    bool modifyRecord( int row,QSqlRecord& record, QMap<QString,int> errors, QString preSid );
    bool createRecord( QSqlRecord& record, QMap<QString,int> errors );
    void setCondiction( QString ,QDateTime, QDateTime, QString );
private:
    QSqlDatabase productDB;
    QStringListModel product;
    dataTableModel *stuffDataModel;
};

#endif // DATABASE_H
