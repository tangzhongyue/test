#include "DemoClass.h"
#include <iostream>

DemoClass::DemoClass() : name("") {}

DemoClass::~DemoClass() {}

void DemoClass::setName(const std::string& name) {
    this->name = name;
}

std::string DemoClass::getName() const {
    return name;
}

void DemoClass::display() const {
    std::cout << "Name: " << name << std::endl;
}
