#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QPluginLoader>
#include "uilab_modules.h"
#include <QPushButton>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadPlugins();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::loadPlugins()
{
    QDir pluginsDir(qApp->applicationDirPath());
    pluginsDir.cd("plugins");
    foreach (QString fileName, pluginsDir.entryList(QDir::Files)) {
        QPluginLoader loader(pluginsDir.absoluteFilePath(fileName));
        QObject *plugin = loader.instance();
        if (plugin) {
            nsii::common::ui::ModuleInterface* moduleInterface
                    = qobject_cast<nsii::common::ui::ModuleInterface*>(plugin);
            QObject* obutton = moduleInterface->getModule();
            QPushButton* button = qobject_cast<QPushButton*>(obutton);
            button->setParent(this);
            button->show();
            connect(button, SIGNAL(clicked(bool)),
                    this, SLOT(clicked()));
        }
    }
}

void MainWindow::clicked()
{
    QMessageBox::information(this, "Ok", "Again", QMessageBox::Ok);
}
