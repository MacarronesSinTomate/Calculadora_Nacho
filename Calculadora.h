#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <QDialog>
#include "ui_Calculadora.h"

class Calculadora : public QDialog, public Ui::Calculadora{

public:
    Calculadora(QWidget *parent = 0);

};


#endif