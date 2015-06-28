#include "dirs.h"
#include <QDir>
#include <QListWidget>
#include <QFileInfo>
#include <QListWidget>
#include <QVBoxLayout>
#include <QString>

#ifdef CONSOLE_DEBUG
#include <QDebug>
#endif


Dirs::Dirs(QWidget *win)
{
    m_label     = new QLabel("Path: ");
    m_dirsList  = new QListWidget;
    m_closeBtn  = new QPushButton("Close");
    m_mainLayout = new QVBoxLayout(win);

    m_mainLayout->addWidget(m_label);
    m_mainLayout->addWidget(m_dirsList);
    m_mainLayout->addWidget(m_closeBtn);

    QObject::connect(m_closeBtn, SIGNAL(released()), win, SLOT(close()));

    win->setLayout(m_mainLayout);

    m_closeBtn->focusWidget();
    setTabOrder(m_closeBtn, m_dirsList);
}

void Dirs::showDrivesList()
{
    QDir file_explorer;

    m_label->setText(file_explorer.currentPath());

    foreach(QFileInfo entry, file_explorer.drives())
    {
        new QListWidgetItem(entry.absoluteFilePath(), m_dirsList);
#ifdef CONSOLE_DEBUG
        qDebug() << entry.absoluteFilePath()<<endl;
#endif
    }
}

void Dirs::showCurrentFolderContents(const QString &path)
{
    QDir file_explorer;


    if (file_explorer.exists(path))
    {
        file_explorer.cd(path);

        m_label->setText("Folder: " + file_explorer.path());

        foreach(QString entry, file_explorer.entryList())
        {
            new QListWidgetItem(entry, m_dirsList);

    #ifdef CONSOLE_DEBUG
            qDebug() << entry.absoluteFilePath()<<endl;
    #endif
        }
    }
    else
    {
        m_label->setText("Folder not existing!");
    }
}

Dirs::~Dirs()
{
    delete m_dirsList;
    delete m_closeBtn;
}


