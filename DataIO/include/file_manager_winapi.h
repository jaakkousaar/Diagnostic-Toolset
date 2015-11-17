// file_manager_winapi.h : header file
// Created by Jaak Kõusaar @10.2015

#ifndef DATAIO_FILEMANAGER_WINAPI_H_
#define DATAIO_FILEMANAGER_WINAPI_H_


#include <windows.h>

#include <string>


namespace dataio
{
class FileManagerWinAPI
{
public:
	explicit FileManagerWinAPI	(
								const std::string& file_name,
								const char access_mode
								) : file_name(file_name),
								access_mode(access_mode){};

	inline const std::string& GetName() { return file_name; };

private:

	const std::string file_name;
	const char access_mode;
    
const unsigned long ConvertAccessModeSpecifier() const;

};
}


#endif // DATAIO_FILEMANAGER_WINAPI_H_