#include "register.h"
#include "ui_register.h"
#include "checksite.h"
#include "registered.h"

Register::Register(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}
////////////////////////////////////////////////
/// \brief Register::~Register
///////////////////////////////////////////////
Register::~Register()
{
    delete ui;
}
//////////////////////////////////////////////
/// \brief Register::on_submit_clicked
//////////////////////////////////////////////
void Register::on_submit_clicked()
{
    QString gname, gsurname, gemail, gkey;
    //copy the information from the dialog to variables
    gname = ui->name->text();
    gsurname = ui->surname->text();
    gemail = ui->email->text();
    gkey = ui->key->text();

    //try to hash the password to a pacticular format

    //connect to the server and try verify the information with one on the server
    CheckSite chksite;
    chksite.SetUrl("http://127.0.0.1/test.php");
    chksite.CheckLicense("Result");

    //change the user to registered.
   // Registered::IsRegistered();//this checks if the app is registered.
    //supposed to be Registered::Setregistered();


}

void Register::on_pushButton_clicked()
{
    //close the window
}

void Register::on_license_clicked()
{
    //open the license file and process

}
