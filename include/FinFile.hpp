// Copyright 2021 andreymuskat <andreymuskat@yandex.ru>


#ifndef INCLUDE_FINFILE_HPP_
#define INCLUDE_FINFILE_HPP_
 
#include <string>
 
class FinFile {
 public:
  FinFile(const std::string& name, const std::string& date);
 
  std::string GetName() const;
  std::string GetDate() const;
 
 private:
  std::string name;
  std::string date;
};
 
#endif  // INCLUDE_FINFILE_HPP_
