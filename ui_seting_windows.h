/********************************************************************************
** Form generated from reading UI file 'seting_windows.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETING_WINDOWS_H
#define UI_SETING_WINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Seting_Windows
{
public:
    QGridLayout *gridLayout;
    QLabel *label_Min_Speed;
    QLabel *label_Max_Speed;
    QLineEdit *lineEdit_Max_Speed;
    QLineEdit *lineEdit_Min_Speed;
    QPushButton *Btn_Set_Confirm;
    QSlider *Frame_Ratr_Slider;
    QHBoxLayout *horizontalLayout;
    QLabel *Frame_Ratr_label;
    QLabel *Ratr_label;
    QLineEdit *lineEdit_Max_Size;
    QLabel *label_Max_Size;
    QLabel *label_Max_Num;
    QLineEdit *lineEdit_Max_Num;
    QLabel *label_Score;
    QProgressBar *LOVE_progress;

    void setupUi(QDialog *Seting_Windows)
    {
        if (Seting_Windows->objectName().isEmpty())
            Seting_Windows->setObjectName(QStringLiteral("Seting_Windows"));
        Seting_Windows->resize(305, 230);
        Seting_Windows->setSizeGripEnabled(false);
        Seting_Windows->setModal(false);
        gridLayout = new QGridLayout(Seting_Windows);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_Min_Speed = new QLabel(Seting_Windows);
        label_Min_Speed->setObjectName(QStringLiteral("label_Min_Speed"));

        gridLayout->addWidget(label_Min_Speed, 1, 0, 1, 1);

        label_Max_Speed = new QLabel(Seting_Windows);
        label_Max_Speed->setObjectName(QStringLiteral("label_Max_Speed"));

        gridLayout->addWidget(label_Max_Speed, 0, 0, 1, 1);

        lineEdit_Max_Speed = new QLineEdit(Seting_Windows);
        lineEdit_Max_Speed->setObjectName(QStringLiteral("lineEdit_Max_Speed"));

        gridLayout->addWidget(lineEdit_Max_Speed, 0, 1, 1, 1);

        lineEdit_Min_Speed = new QLineEdit(Seting_Windows);
        lineEdit_Min_Speed->setObjectName(QStringLiteral("lineEdit_Min_Speed"));

        gridLayout->addWidget(lineEdit_Min_Speed, 1, 1, 1, 1);

        Btn_Set_Confirm = new QPushButton(Seting_Windows);
        Btn_Set_Confirm->setObjectName(QStringLiteral("Btn_Set_Confirm"));

        gridLayout->addWidget(Btn_Set_Confirm, 6, 0, 1, 2);

        Frame_Ratr_Slider = new QSlider(Seting_Windows);
        Frame_Ratr_Slider->setObjectName(QStringLiteral("Frame_Ratr_Slider"));
        Frame_Ratr_Slider->setMinimum(50);
        Frame_Ratr_Slider->setMaximum(150);
        Frame_Ratr_Slider->setSingleStep(10);
        Frame_Ratr_Slider->setPageStep(20);
        Frame_Ratr_Slider->setValue(60);
        Frame_Ratr_Slider->setSliderPosition(60);
        Frame_Ratr_Slider->setOrientation(Qt::Horizontal);
        Frame_Ratr_Slider->setInvertedAppearance(false);
        Frame_Ratr_Slider->setInvertedControls(false);
        Frame_Ratr_Slider->setTickPosition(QSlider::TicksAbove);
        Frame_Ratr_Slider->setTickInterval(25);

        gridLayout->addWidget(Frame_Ratr_Slider, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Frame_Ratr_label = new QLabel(Seting_Windows);
        Frame_Ratr_label->setObjectName(QStringLiteral("Frame_Ratr_label"));

        horizontalLayout->addWidget(Frame_Ratr_label);

        Ratr_label = new QLabel(Seting_Windows);
        Ratr_label->setObjectName(QStringLiteral("Ratr_label"));

        horizontalLayout->addWidget(Ratr_label);

        horizontalLayout->setStretch(0, 2);
        horizontalLayout->setStretch(1, 1);

        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        lineEdit_Max_Size = new QLineEdit(Seting_Windows);
        lineEdit_Max_Size->setObjectName(QStringLiteral("lineEdit_Max_Size"));

        gridLayout->addWidget(lineEdit_Max_Size, 3, 1, 1, 1);

        label_Max_Size = new QLabel(Seting_Windows);
        label_Max_Size->setObjectName(QStringLiteral("label_Max_Size"));

        gridLayout->addWidget(label_Max_Size, 3, 0, 1, 1);

        label_Max_Num = new QLabel(Seting_Windows);
        label_Max_Num->setObjectName(QStringLiteral("label_Max_Num"));
        label_Max_Num->setStyleSheet(QStringLiteral(""));

        gridLayout->addWidget(label_Max_Num, 2, 0, 1, 1);

        lineEdit_Max_Num = new QLineEdit(Seting_Windows);
        lineEdit_Max_Num->setObjectName(QStringLiteral("lineEdit_Max_Num"));

        gridLayout->addWidget(lineEdit_Max_Num, 2, 1, 1, 1);

        label_Score = new QLabel(Seting_Windows);
        label_Score->setObjectName(QStringLiteral("label_Score"));
        label_Score->setStyleSheet(QStringLiteral("color: rgb(255, 16, 120);"));
        label_Score->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_Score, 5, 0, 1, 1);

        LOVE_progress = new QProgressBar(Seting_Windows);
        LOVE_progress->setObjectName(QStringLiteral("LOVE_progress"));
        LOVE_progress->setStyleSheet(QLatin1String("QProgressBar::chunk {\n"
"   \n"
"	background-color: rgb(255, 16, 120);\n"
"   width: 20px;\n"
"}\n"
"QProgressBar {\n"
"   border: 2px solid grey;\n"
"   border-radius: 5px;\n"
"   text-align: center;\n"
"}\n"
"QProgressBar {\n"
"   border: 2px solid grey;\n"
"   border-radius: 5px;\n"
"   background-color: #FFFFFF;\n"
"}"));
        LOVE_progress->setMaximum(100);
        LOVE_progress->setValue(0);
        LOVE_progress->setTextVisible(true);
        LOVE_progress->setInvertedAppearance(false);
        LOVE_progress->setFormat(QStringLiteral("%p%"));

        gridLayout->addWidget(LOVE_progress, 5, 1, 1, 1);


        retranslateUi(Seting_Windows);
        QObject::connect(Frame_Ratr_Slider, SIGNAL(valueChanged(int)), Ratr_label, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(Seting_Windows);
    } // setupUi

    void retranslateUi(QDialog *Seting_Windows)
    {
        Seting_Windows->setWindowTitle(QApplication::translate("Seting_Windows", "Dialog", nullptr));
        label_Min_Speed->setText(QApplication::translate("Seting_Windows", "Emoji\346\234\200\345\260\217\351\200\237\345\272\246", nullptr));
        label_Max_Speed->setText(QApplication::translate("Seting_Windows", "Emoji\346\234\200\345\244\247\351\200\237\345\272\246", nullptr));
        lineEdit_Max_Speed->setText(QApplication::translate("Seting_Windows", "7", nullptr));
        lineEdit_Min_Speed->setText(QApplication::translate("Seting_Windows", "2", nullptr));
        Btn_Set_Confirm->setText(QApplication::translate("Seting_Windows", "\347\241\256\350\256\244", nullptr));
        Frame_Ratr_label->setText(QApplication::translate("Seting_Windows", "\345\270\247\347\216\207", nullptr));
        Ratr_label->setText(QApplication::translate("Seting_Windows", "60", nullptr));
        lineEdit_Max_Size->setText(QApplication::translate("Seting_Windows", "150", nullptr));
        label_Max_Size->setText(QApplication::translate("Seting_Windows", "Emoji\346\234\200\345\244\247\345\260\272\345\257\270", nullptr));
        label_Max_Num->setText(QApplication::translate("Seting_Windows", "Emoji\346\234\200\345\244\247\346\225\260\351\207\217", nullptr));
        lineEdit_Max_Num->setText(QApplication::translate("Seting_Windows", "21", nullptr));
        label_Score->setText(QApplication::translate("Seting_Windows", "\360\237\222\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Seting_Windows: public Ui_Seting_Windows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETING_WINDOWS_H
