#ifndef DIRS_H
#define DIRS_H

#include <QWidget>
#include <QDialog>
#include <QListWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>


class Dirs : public QDialog
{
    Q_OBJECT
public:
    Dirs(QWidget *win);
    ~Dirs();

    void showDrivesList();
    void showCurrentFolderContents(const QString &path);

private:
    QLabel      *m_label;
    QListWidget *m_dirsList;
    QPushButton *m_closeBtn;
    QVBoxLayout *m_mainLayout;
};

#endif // DIRS_H
