#ifndef DIALOGDATABASECONFIG_H
#define DIALOGDATABASECONFIG_H

#include <QDialog>
#include <agt/data/database.h>

namespace Ui {
class DialogDatabaseConfig;
}

class DialogDatabaseConfig : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogDatabaseConfig(QWidget *parent = 0);
    ~DialogDatabaseConfig();

    
protected:
    void changeEvent(QEvent *e);
    
private:
    Ui::DialogDatabaseConfig *ui;
    void createConnections();
    Database::DatabaseType currentType;
    bool testConnection();
    bool establishActualConnection();

    bool tested;
    bool connected;

public slots:
    void accept();

private slots:
    void updateDatabaseType(int);
    void test();
};

#endif // DIALOGDATABASECONFIG_H
