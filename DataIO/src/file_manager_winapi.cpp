// file_manager_winapi.h : header file
// Created by Jaak Kõusaar @10.2015

#include "../include/file_manager_winapi.h"
using namespace dataio;

#include <string>
using std::string;

const unsigned long FileManagerWinAPI::ConvertAccessModeSpecifier(const char mode) const
{
  switch (mode)
  {
    case 'r':
      return GENERIC_READ;
    case 'w':
      return GENERIC_WRITE;
    case 'a':
      return GENERIC_ALL;  
    default:
      return 0;
  }
}
