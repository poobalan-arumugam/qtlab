#include "testrunner.h"
#include <QPushButton>

TestRunner::TestRunner()
{
}

QObject* TestRunner::getModule()
{
    return new QPushButton("Hello");
}

