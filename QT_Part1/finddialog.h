#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>

#include <QCheckBox>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>


class FindDialog : public QDialog
{
    Q_OBJECT

public:
    FindDialog(QWidget *parent = 0);

    signals:
        void findNext(const QString &str, Qt::CaseSensitivity case_sense);
        void findPrev(const QString &str, Qt::CaseSensitivity case_sense);

private slots:
    void findClicked();
    void enableFindButton(const QString &text);

private:
    QLabel      *label;
    QLineEdit   *lineEdit;
    QCheckBox   *caseCheckBox;
    QCheckBox   *backwardCheckBox;
    QPushButton *findButton;
    QPushButton *closeButton;

};

#endif // FINDDIALOG_H
