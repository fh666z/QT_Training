#include "Dirs.h"
#include <QDir>
#include <QListWidget>
#include <QFileInfo>
#include <QListWidget>
#include <QVBoxLayout>

#ifdef CONSOLE_DEBUG
#include <QDebug>
#endif


Dirs::Dirs(QWidget *win)
{
    m_dirsList = new QListWidget;
    m_closeBtn = new QPushButton("Close");
    m_mainLayout = new QVBoxLayout;

    m_mainLayout->addWidget(m_dirsList);
    m_mainLayout->addWidget(m_closeBtn);

    QObject::connect(m_closeBtn, SIGNAL(released()), win, SLOT(close()));

    win->setLayout(m_mainLayout);
}

void Dirs::populateList()
{
    QDir drives;

    foreach(QFileInfo entry, drives.drives())
    {
        new QListWidgetItem(entry.absoluteFilePath(), m_dirsList);
#ifdef CONSOLE_DEBUG
        qDebug() << entry.absoluteFilePath()<<endl;
#endif
    }
}

Dirs::~Dirs()
{
    delete m_dirsList;
    delete m_closeBtn;
}

