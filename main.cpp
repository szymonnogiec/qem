
//Qt includes
#include <QApplication>

//local includes
#include "Application.h"

int main (int argc, char* argv[]) {
    QApplication qApplication (argc, argv);
    qem::Application app;
    app.startup();
    return qApplication.exec();
}