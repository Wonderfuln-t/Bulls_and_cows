#ifndef CLIENTWINDOW_H
#define CLIENTWINDOW_H

#include <QDialog>
#include "mainwindow.h"

class MainWindow;

namespace Ui {
class ClientWindow;
}

class ClientWindow : public QDialog
{
    Q_OBJECT

private:
    Ui::ClientWindow *ui;
    MainWindow *w;

    QString ip;
    int port;

    bool isPortNumberCorrect = false;

private:
    void getIpAddress();
    void getPortNumber();
    void createClient();

public:
    explicit ClientWindow(MainWindow *parent = nullptr);
    ~ClientWindow();

signals:
    void menu();

private slots:
    void on_play_button_clicked();

public slots:
    void slotConnectionEstablished();
};

#endif // CLIENTWINDOW_H
