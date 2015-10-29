// main.cpp : implementation file
// Created by Jaak Kõusaar @10.2015

#include "../include/precompiled.h"

using namespace std;

//void DisplayError(LPTSTR lpszFunction);

void __cdecl _tmain(int argc, TCHAR *argv[])
{
	printf("\n");
	if (argc != 2)
	{
		printf("Usage Error:\tIncorrect number of arguments\n\n");
		_tprintf(TEXT("%s <file_name>\n"), argv[0]);
		return;
	}


	/*istringstream ss(argv[2]);
	DWORD dwBytesToWrite;
	if (!(ss >> dwBytesToWrite))
		printf("Invalid number\n\n");*/
	


	HANDLE hFile;
	const DWORD vector_count = 100;
	const DWORD dwBytesToWrite = vector_count * 76;
	auto testset = generators::RandomTestSetFactory::CreateSet(
		vector_count,
		50, 25);
	char DataBuffer[dwBytesToWrite];

	DWORD dwBytesWritten = 0;
	BOOL bErrorFlag = FALSE;

	for (int i = 0; i < 100; ++i)
	{
		std::copy(testset.get()->at(i).begin(), testset.get()->at(i).end(), DataBuffer);
	}

	hFile = CreateFile(argv[1],                // name of the write
		GENERIC_WRITE,          // open for writing
		0,                      // do not share
		NULL,                   // default security
		CREATE_NEW,             // create new file only
		FILE_ATTRIBUTE_NORMAL,  // normal file
		NULL);                  // no attr. template

	if (hFile == INVALID_HANDLE_VALUE)
	{
		// DisplayError(TEXT("CreateFile"));
		_tprintf(TEXT("Terminal failure: Unable to open file \"%s\" for write.\n"), argv[1]);
		return;
	}

	_tprintf(TEXT("Writing %d bytes to %s.\n"), dwBytesToWrite, argv[1]);

	bErrorFlag = WriteFile(
		hFile,           // open file handle
		DataBuffer,      // start of data to write
		dwBytesToWrite,  // number of bytes to write
		&dwBytesWritten, // number of bytes that were written
		NULL);            // no overlapped structure

	if (FALSE == bErrorFlag)
	{
		// DisplayError(TEXT("WriteFile"));
		printf("Terminal failure: Unable to write to file.\n");
	}
	else
	{
		if (dwBytesWritten != dwBytesToWrite)
		{
			// This is an error because a synchronous write that results in
			// success (WriteFile returns TRUE) should write all data as
			// requested. This would not necessarily be the case for
			// asynchronous writes.
			printf("Error: dwBytesWritten != dwBytesToWrite\n");
		}
		else
		{
			_tprintf(TEXT("Wrote %d bytes to %s successfully.\n"), dwBytesWritten, argv[1]);
		}
	}

	CloseHandle(hFile);
}

//void DisplayError(LPTSTR lpszFunction)
//// Routine Description:
//// Retrieve and output the system error message for the last-error code
//{
//	LPVOID lpMsgBuf;
//	LPVOID lpDisplayBuf;
//	DWORD dw = GetLastError();
//
//	FormatMessage(
//		FORMAT_MESSAGE_ALLOCATE_BUFFER |
//		FORMAT_MESSAGE_FROM_SYSTEM |
//		FORMAT_MESSAGE_IGNORE_INSERTS,
//		NULL,
//		dw,
//		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
//		(LPTSTR)&lpMsgBuf,
//		0,
//		NULL);
//
//	lpDisplayBuf =
//		(LPVOID)LocalAlloc(LMEM_ZEROINIT,
//		(lstrlen((LPCTSTR)lpMsgBuf)
//		+ lstrlen((LPCTSTR)lpszFunction)
//		+ 40) // account for format string
//		* sizeof(TCHAR));
//
//	if (FAILED(StringCchPrintf((LPTSTR)lpDisplayBuf,
//		LocalSize(lpDisplayBuf) / sizeof(TCHAR),
//		TEXT("%s failed with error code %d as follows:\n%s"),
//		lpszFunction,
//		dw,
//		lpMsgBuf)))
//	{
//		printf("FATAL ERROR: Unable to output error code.\n");
//	}
//
//	_tprintf(TEXT("ERROR: %s\n"), (LPCTSTR)lpDisplayBuf);
//
//	LocalFree(lpMsgBuf);
//	LocalFree(lpDisplayBuf);
//

// main.cpp