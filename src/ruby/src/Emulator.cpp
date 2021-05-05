#include "ruby/Emulator.hpp"
#include <iostream>

using namespace Ruby;

Emulator::Emulator() {}
Emulator::~Emulator() {}

void Emulator::emulate() { std::cout << "Hello, world!" << std::endl; }
