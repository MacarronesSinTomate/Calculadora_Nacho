#include <QApplication>
#include "Calculadora.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    Calculadora * calc = new Calculadora();
    calc->show();

    return app.exec();

}
