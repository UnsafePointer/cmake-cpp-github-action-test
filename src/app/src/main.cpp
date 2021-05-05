#include <ruby/Emulator.hpp>

int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;
  Ruby::Emulator emulator = Ruby::Emulator();
  emulator.emulate();
  return 0;
}
