#ifndef SERVERDIALOG_H
#define SERVERDIALOG_H

#include <QDialog>
#include <QLineEdit>
#include <QTextEdit>
#include <QListWidget>
#include <QList>
#include <QListWidgetItem>
#include <QTableWidget>
#include <QPushButton>
#include <QSpinBox>
#include <QtWebSockets/QtWebSockets>
#include <QTime>

class ServerDialog : public QWidget
{
    Q_OBJECT

public:
    ServerDialog(QWidget *parent = 0);
    ~ServerDialog();

public slots:
    void onStartButtonClick();
    void onStopButtonClick();
    void onSendButtonClick();
    void onCleanButtonClick();
    void onNewConnection();
    void processTextMessage(QString message);
    void socketDisconnected();

Q_SIGNALS:
    void closed();
private:
    QSpinBox * m_monitorSpinBox;
    QPushButton *m_startButton;
    QPushButton *m_stopButton;
    QTextEdit *m_sendTextedit;
    QPushButton *m_sendButton;
    QListWidget *m_linkclientListWidget;
    QPushButton *m_cleanButton;
    QTextEdit *m_receiveTextEdit;

    QWebSocketServer *m_WebSocketServer;
    QList<QWebSocket*> m_clients;
    bool m_debug;
    QWebSocket *pSocket;
    QDateTime *current_date_time;
};

#endif // SERVERDIALOG_H
