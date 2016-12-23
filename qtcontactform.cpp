#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        pincodeField(new QLineEdit())
{
    addRow("<font color = 'green'>First Name</font><font color= 'orange'>*</font>",firstNameField);
    addRow("<font color = 'green'>Last Name</font><font color= 'orange'>*</font>",lastNameField);
    addRow("<font color = 'green'>Address</font><font color= 'orange'>*</font>",addressField);
    addRow("<font color = 'green'>Phone Number</font><font color= 'orange'>*</font>",phoneNumberField);
    addRow("<font color = 'green'>Email</font><font color= 'orange'>*</font>",emailField);
    addRow("<font color = 'green'>Pincode</font><font color= 'orange'>*</font>",pincodeField);


}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    pincodeField->setText("");

}
