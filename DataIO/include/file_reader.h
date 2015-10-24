// file_reader.cpp : header file
// Created by Jaak Kõusaar @07.2015

#ifndef DATAIO_FILEREADER_H_
#define DATAIO_FILEREADER_H_


#include <string>


namespace dataio
{
class FileReader
{
public:

	FileReader(){};

	explicit FileReader(const std::string& file_name) : file_name(file_name){};

	inline const std::string& GetName() { return file_name; };

private:

	const std::string file_name;

};
}


#endif // DATAIO_FILEREADER_H_