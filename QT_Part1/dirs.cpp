#include "Dirs.h"
#include <QDir>
#include <QListWidget>
#include <QFileInfo>
#include <QListWidget>
#include <QDebug>


Dirs::Dirs(QMainWindow *win)
{
    m_dirsList = new QListWidget(win);
    m_closeBtn = new QPushButton("Close", win);
//    m_mainLayout = new QVBoxLayout(win);

//    m_mainLayout->addWidget(m_dirsList);
//    m_mainLayout->addWidget(m_closeBtn);

    QObject::connect(m_closeBtn, SIGNAL(released()), win, SLOT(close()));

//    win->setLayout(m_mainLayout);
}

void Dirs::populateList()
{
    QDir drives;

    foreach(QFileInfo entry, drives.drives())
    {
        new QListWidgetItem(entry.absoluteFilePath(), m_dirsList);

        qDebug() << entry.absoluteFilePath()<<endl;
    }
}

Dirs::~Dirs()
{
    delete m_dirsList;
    delete m_closeBtn;
}

