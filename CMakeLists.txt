cmake_minimum_required(VERSION 3.6)
project(qem)
set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp MainWindow.cpp MainWindow.h Application.cpp Application.h)

include_directories("/usr/local/inlcude")
link_directories("/usr/local/lib")

# setting path for cmake (Qt)
set(CMAKE_PREFIX_PATH $(QTDIR))
# find includes in the corresponding build dirs
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# run MOC automatically when needed
set(CMAKE_AUTOMOC ON)

# find Qt Core Widgets and Gui
find_package(Qt5 REQUIRED COMPONENTS Core Widgets Gui)

add_executable(qem ${SOURCE_FILES})

# link needed libs from Qt5
target_link_libraries(qem Qt5::Widgets Qt5::Core Qt5::Gui)