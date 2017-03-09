//
// Created by simon on 07.03.17.
//

#ifndef QEM_MAINWINDOW_H
#define QEM_MAINWINDOW_H

//Qt includes
#include <QMainWindow>

namespace qem
{
    namespace gui
    {

        class MainWindow : public QMainWindow {
        Q_OBJECT
        public:
            MainWindow (QWidget* parent = nullptr);
            ~MainWindow();


        };
    }
}


#endif //QEM_MAINWINDOW_H
