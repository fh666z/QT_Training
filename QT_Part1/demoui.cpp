#include "demoui.h"

DemoUI::DemoUI(QApplication &app)
{
    m_main_window = new QWidget;
    m_main_window->setWindowTitle("My First QT App");

    m_label = new QLabel("<h3><c>Demo UI</c></h3>", m_main_window);
    m_exit_btn = new QPushButton("Exit", m_main_window);

    m_age_slider = new QSlider(m_main_window);
    m_age_spinner = new QSpinBox(m_main_window);

    m_main_layout = new QVBoxLayout(m_main_window);
    m_age_layout = new QHBoxLayout(m_main_window);

    m_age_layout->addWidget(m_age_slider);
    m_age_layout->addWidget(m_age_spinner);

    m_main_layout->addWidget(m_label);
    m_main_layout->addItem(m_age_layout);
    m_main_layout->addWidget(m_exit_btn);

    QObject::connect(m_exit_btn, SIGNAL(released()), &app, SLOT(quit()));
}

DemoUI::~DemoUI()
{
    delete m_main_window;
}

void DemoUI::show(void)
{
    m_main_window->show();
}
