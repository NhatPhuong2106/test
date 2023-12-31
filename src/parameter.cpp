#include "parameter.h"

std::vector<float> loadParametersFromFile(std::string filename) {
  std::vector<float> parameters;

  std::ifstream file(filename);
  if (file.is_open()) {
    int n;
    float tmp;

    file >> n;

    parameters.resize(n);
    for (int i = 0; i < n; i++) {
      file >> tmp;
      parameters[i] = tmp;
    }

    file.close();
  }

  return parameters;
}

void storeParametersToFile(std::string filename, std::vector<float> parameters) {
  std::ofstream file(filename);
  if (file.is_open()) {
    file << (parameters.size()) << std::endl;

    for (int i = 0; i < parameters.size(); i++) {
      file << parameters[i] << " ";
    }

    file.close();
  }
}