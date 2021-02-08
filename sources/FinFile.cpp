// Copyright 2021 Name <mail@mail.ru>

#include <FinFile.hpp>

FinFile::FinFile(const std::string& ArgName, const std::string& ArgDate)
    : name(ArgName), date(ArgDate) {}
std::string FinFile::GetName() const { return name; }
std::string FinFile::GetDate() const { return date; }
