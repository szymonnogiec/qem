//
// Created by simon on 09.03.17.
//

#ifndef QEM_APPLICATION_H
#define QEM_APPLICATION_H

//std includes
#include <memory>

//local includes
#include "MainWindow.h"

namespace qem {

    class Application {
    public:
        void startup();

    private:
        void setupGui();

        std::shared_ptr<gui::MainWindow> mainWindow_;
    };

}

#endif //QEM_APPLICATION_H
