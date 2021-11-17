#ifndef CAJ2PDF_H
#define CAJ2PDF_H

#include <QDialog>
#include <QListWidget>
#include <QStackedWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QComboBox>
#include <QPushButton>
#include <QLineEdit>
#include <QTextBrowser>
#include <QProgressBar>

QT_BEGIN_NAMESPACE
namespace Ui { class CAJ2PDF; }
QT_END_NAMESPACE

class CAJ2PDF : public QDialog
{
    Q_OBJECT

public:
    CAJ2PDF(QWidget *parent = nullptr);
    ~CAJ2PDF();

private slots:
    // 第一页
    void handlePage1SelectInputButton();
    void handlePage1CancelButton();
    void handlePage1NextButton();

    // 第二页
    void handlePage2SelectOutputButton();
    void handlePage2CancelButton();
    void handlePage2PrevButton();
    void handlePage2NextButton();

private:
    Ui::CAJ2PDF *ui;

    // 第一页
    QWidget *page1;
    QLabel *selectInputLabel;
    QPushButton *selectInputButton;
    QList<QString> inputFiles;
    QTextBrowser *inputTextBrowser;
    QPushButton *page1CancelButton;
    QPushButton *page1NextButton;
    QHBoxLayout *page1TopLayout;
    QHBoxLayout *page1MiddleLayout;
    QHBoxLayout *page1BottomLayout;
    QVBoxLayout *page1MainLayout;

    // 第二页
    QWidget *page2;
    QLabel *selectOutputLabel;
    QLineEdit *selectOutputLineEdit;
    QPushButton *selectOutputButton;
    QString outputDirectory;
    QTextBrowser *outputTextBrowser;
    QPushButton *page2CancelButton;
    QPushButton *page2PrevButton;
    QPushButton *page2NextButton;
    QHBoxLayout *page2TopLayout;
    QHBoxLayout *page2MiddleLayout;
    QHBoxLayout *page2BottomLayout;
    QVBoxLayout *page2MainLayout;

    // 第三页
    QWidget *page3;
    QLabel *progressLabel;
    QProgressBar *progressBar;
    QTextBrowser *statusTextBrowser;
    QPushButton *page3PrevButton;
    QPushButton *page3NextButton;
    QHBoxLayout *page3TopLayout;
    QHBoxLayout *page3MiddleLayout;
    QHBoxLayout *page3BottomLayout;
    QVBoxLayout *page3MainLayout;

    // 总体
    QListWidget *navigationList;
    QListWidgetItem *item1;
    QListWidgetItem *item2;
    QListWidgetItem *item3;
    QStackedWidget *stack;
    QHBoxLayout *mainLayout;
};
#endif // CAJ2PDF_H
