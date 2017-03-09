//
// Created by simon on 09.03.17.
//

#include "Application.h"

using namespace qem;

void Application::startup() {
    setupGui();
}

void Application::setupGui() {
    mainWindow_ = std::make_shared<gui::MainWindow>();
    mainWindow_->show();
}
