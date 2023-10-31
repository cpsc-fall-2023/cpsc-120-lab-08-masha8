// Mariia Nikitash
// nikitash.mariia2004@csu.fullerton.edu
// @MariiaNikitash
// Partners: @egm0411

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  if (arguments.size() <= 1) {
    std::cout << "error: you must supply at least one number"
              << "\n";
    return -1;
  }

  float total{0};
  bool first = true;
  for (const std::string& argument : arguments) {
    if (first) {
      first = false;
    } else {
      total = total + std::stof(argument);
    }
  }

  float average{0};
  average = total / static_cast<float>(arguments.size() - 1);
  std::cout << "average = " << average << "\n";

  return 0;
}
