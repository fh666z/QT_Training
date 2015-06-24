#include "demoui.h"

DemoUI::DemoUI(QApplication &app)
{
    // Create empty parent window
    m_main_window = new QWidget;
    m_main_window->setWindowTitle("My First QT App");

    // Widget creation and configuration
    m_label = new QLabel("<h3><c>Age:</c></h3>", m_main_window);
    m_exit_btn = new QPushButton("Exit", m_main_window);

    m_age_slider = new QSlider(Qt::Horizontal, m_main_window);
    m_age_slider->setRange(18, 99);
    m_age_spinner = new QSpinBox(m_main_window);
    m_age_spinner->setRange(18, 99);

    QObject::connect(m_age_slider, SIGNAL(valueChanged(int)), m_age_spinner, SLOT(setValue(int)));
    QObject::connect(m_age_spinner, SIGNAL(valueChanged(int)), m_age_slider, SLOT(setValue(int)));

    m_age_slider->setValue(25);

    // Layout stuff
    m_main_layout = new QVBoxLayout(m_main_window);
    m_age_layout = new QHBoxLayout(m_main_window);

    m_age_layout->addWidget(m_age_slider);
    m_age_layout->addWidget(m_age_spinner);

    m_main_layout->addWidget(m_label);
    m_main_layout->addItem(m_age_layout);
    m_main_layout->addWidget(m_exit_btn);

    m_main_window->setLayout(m_main_layout);

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
