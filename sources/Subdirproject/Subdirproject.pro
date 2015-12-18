TEMPLATE = subdirs

app.depends = lib
test.depends = lib

cppapp.depends = cpplib
# и тесты тоже зависят

SUBDIRS += \
    lib \
    app \
    test \
    cppapp \
    cpplib \
    CppTests \
    CppTasksTests
