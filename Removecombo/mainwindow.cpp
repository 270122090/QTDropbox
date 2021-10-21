#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //additems to data model
    mylist.push_back("Search by Genre");
    mylist.push_back("Epic Fantasy");
    mylist.push_back("Low Fantasy");
    mylist.push_back("Magical Realism");
    mylist.push_back("Dark Fantasy");
    mylist.push_back("Sword and Sorcery");
    mylist.push_back("Fables");
    mylist.push_back("Fairy Tales");
    mylist.push_back("Superhero Ficton");
    mylist.push_back("Horror");


    // add items to view

    ui->comboBox->addItems(mylist);

    //adding from a list

    //for(int i=o;i<mylist.size();i++
    //{ ui->comboBox-?addItem(mylist.at(i)}

    ui->comboBox->setEditable(true);//allowing to type in combobox to add to the combobox

    ui->comboBox->insertItem(3,"New Option added in slot 3");// adding a slot



}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)// this was picked fromthe drop down list so that what ever is picked the text will apear in the box
{
   if(arg1=="Search by Genre")
   {
       ;
   }
   else
   {
    ui->label->setText(arg1);
   }
}


void MainWindow::on_pushButton_clicked()
{

    //remove from view
    ui->comboBox->removeItem(ui->comboBox->currentIndex()); // remove what has been selected from the drop down list

    //remove from list
    mylist.removeAt(ui->comboBox->currentIndex());
}

