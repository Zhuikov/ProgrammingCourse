TEMPLATE = subdirs

app.depends = lib
test.depends = lib

SUBDIRS += \
    lib \
    app \
    test \
    cppapp
