CONFIG += qt c++11
DESTDIR = bin
FORMS = src/uploader.ui
HEARDERS += src/web/WebManager.h
SOURCES += src/web/WebManager.cpp
SOURCES += src/main.cpp
LIBS += -lcurl
