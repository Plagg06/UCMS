#ifndef ADMINDASHBOARD_H
#define ADMINDASHBOARD_H

#include <QDialog>
#include <university.h>
class coursemanagement;
namespace Ui {
class admindashboard;
}

class admindashboard : public QDialog
{
    Q_OBJECT

public:
    explicit admindashboard(university *uni, QWidget *parent = nullptr);
    ~admindashboard();
    
private slots:
    
    void on_crsmgmtbutton_clicked();


private:
    Ui::admindashboard *ui;
    coursemanagement *courseManagement;
    university *uni;
};

#endif // ADMINDASHBOARD_H
