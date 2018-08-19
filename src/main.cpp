#include <iostream>

int main(int argc, char **argv) {
  std::cout << "Hello " << (argc == 1 ? "World" : argv[1]) << "!";

  return 0;
}
