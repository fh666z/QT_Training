#ifndef DIRS_H
#define DIRS_H

#include <QMainWindow>
#include <QDialog>
#include <QListWidget>
#include <QPushButton>
#include <QVBoxLayout>


class Dirs : public QDialog
{
    Q_OBJECT
public:
    Dirs(QMainWindow *win);
    ~Dirs();

    void populateList();

private:
    QListWidget *m_dirsList;
    QPushButton *m_closeBtn;
    QVBoxLayout *m_mainLayout;
};

#endif // DIRS_H
