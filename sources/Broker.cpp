// Copyright 2021 andreymuskat <andreymuskat@yandex.ru>


#include <Broker.hpp>

Broker::Broker(const std::string& ArgName, const AccFilesMap& ArgFiles)
    : name(ArgName), accFiles(ArgFiles) {}
std::string Broker::GetName() const { return name; }
AccFilesMap Broker::GetFiles() const { return accFiles; }
bool Broker::Valid() const { return !name.empty() && !accFiles.empty(); }
