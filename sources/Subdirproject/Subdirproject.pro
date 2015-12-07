TEMPLATE = subdirs

app.depends = lib
test.depends = lib

cppapp.depends = cpplib

SUBDIRS += \
    lib \
    app \
    test \
    cppapp \
    cpplib \
    CppTests
