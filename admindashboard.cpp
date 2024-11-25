#include "admindashboard.h"
#include "ui_admindashboard.h"
#include "coursemanagement.h"
#include <university.h>
admindashboard::admindashboard(university *uni, QWidget *parent)
    : QDialog(parent), ui(new Ui::admindashboard), courseManagement(nullptr), uni(uni) {
    ui->setupUi(this);
}


admindashboard::~admindashboard()
{
    delete ui;
    if (courseManagement) {
        delete courseManagement; // Clean up if created
    }
}


void admindashboard::on_crsmgmtbutton_clicked()
{
    if (!courseManagement) {
        courseManagement = new coursemanagement(uni, this); // Create it with this as parent
    }

    courseManagement->show();      // Show the CourseManagement dialog
    courseManagement->raise();     // Bring it to the front
    courseManagement->activateWindow(); // Give it focus
}

//test
