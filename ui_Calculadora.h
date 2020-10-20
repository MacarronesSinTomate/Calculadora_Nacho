/********************************************************************************
** Form generated from reading UI file 'Calculadora.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORA_H
#define UI_CALCULADORA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Calculadora
{
public:
    QPushButton *boton2;
    QPushButton *boton1;
    QLabel *display;

    void setupUi(QDialog *Calculadora)
    {
        if (Calculadora->objectName().isEmpty())
            Calculadora->setObjectName(QStringLiteral("Calculadora"));
        Calculadora->resize(400, 300);
        boton2 = new QPushButton(Calculadora);
        boton2->setObjectName(QStringLiteral("boton2"));
        boton2->setGeometry(QRect(50, 180, 86, 26));
        boton1 = new QPushButton(Calculadora);
        boton1->setObjectName(QStringLiteral("boton1"));
        boton1->setGeometry(QRect(160, 180, 86, 26));
        display = new QLabel(Calculadora);
        display->setObjectName(QStringLiteral("display"));
        display->setGeometry(QRect(50, 50, 181, 51));
        QFont font;
        font.setFamily(QStringLiteral("Manjari"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        display->setFont(font);

        retranslateUi(Calculadora);

        QMetaObject::connectSlotsByName(Calculadora);
    } // setupUi

    void retranslateUi(QDialog *Calculadora)
    {
        Calculadora->setWindowTitle(QApplication::translate("Calculadora", "Dialog", Q_NULLPTR));
        boton2->setText(QApplication::translate("Calculadora", "2", Q_NULLPTR));
        boton1->setText(QApplication::translate("Calculadora", "1", Q_NULLPTR));
        display->setText(QApplication::translate("Calculadora", "Hola dimitar ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Calculadora: public Ui_Calculadora {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORA_H
