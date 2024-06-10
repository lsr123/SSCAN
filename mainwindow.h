#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "form.h"
#include "main1.h"

#include "chuankou/dir.h"
#include "chuankou/normalmess.h"
#include "chuankou/serialunion.h"
#include "chuankou/widgetsendcommon.h"
#include "chuankou/widgetsettings.h"
#include "chuankou/widgettextdisplay.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class main1;
class SerialUnion;
class WidgetSettings;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    main1 *page2=NULL;
    SerialUnion *page3=NULL;
    WidgetSettings *my_buffer1;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_puss_clicked();

    void on_pushb_clicked();

    void fromSettingHex(QByteArray toMainHex);
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
