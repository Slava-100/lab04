// Copyright 2021 Name <mail@mail.ru>

#include <Inspector.hpp>

int main(int argc, char *argv[]) {
  std::string directoryToInspect;
  if (argc == 1) {
    directoryToInspect = ".";
  } else {
    directoryToInspect = argv[1];
  }

  Inspector inspector("../misc/ftp");
  //  Inspector inspector(directoryToInspect);
  inspector.InspectBrokers();
  inspector.PrintResult();
  return 0;
}
