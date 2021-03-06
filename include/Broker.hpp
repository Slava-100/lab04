#ifndef INCLUDE_BROKER_HPP_
#define INCLUDE_BROKER_HPP_

#include <FinFile.hpp>
#include <map>
#include <string>
#include <vector>


using AccFilesMap = std::map<std::string, std::vector<FinFile>>;

class Broker {
 public:
  Broker(const std::string& name, const AccFilesMap& files);
  std::string GetName() const;
  AccFilesMap GetFiles() const;
  bool Valid() const;

 private:
  std::string name;
  AccFilesMap accFiles;
};

#endif  // INCLUDE_BROKER_HPP_
