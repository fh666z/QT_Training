#ifndef DEMOUI_H
#define DEMOUI_H

#include <QApplication>
#include <QLabel>
#include <QPushButton>
#include <QLayout>
#include <QSlider>
#include <QSpinBox>


class DemoUI:QWidget
{
private:
    // Main window
    QWidget     *m_main_window;

    // Widgets
    QLabel      *m_label;
    QPushButton *m_exit_btn;
    QSlider     *m_age_slider;
    QSpinBox    *m_age_spinner;

    // Layouts
    QVBoxLayout *m_main_layout;
    QHBoxLayout *m_age_layout;


public:
    DemoUI(QApplication &app);
    ~DemoUI();
    void show(void);
};

#endif // DEMOUI_H
