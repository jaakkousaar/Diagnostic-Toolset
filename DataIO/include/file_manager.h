// file_manager.h : header file
// Created by Jaak Kõusaar @10.2015

#ifndef DATAIO_FILEMANAGER_H_
#define DATAIO_FILEMANAGER_H_


#include <string>


namespace dataio
{
	class FileManager
	{
	public:



		explicit FileManager(const std::string& file_name) : file_name(file_name){};

		inline const std::string& GetName() { return file_name; };

	private:

		const std::string file_name;

	};
}


#endif // DATAIO_FILEMANAGER_H_