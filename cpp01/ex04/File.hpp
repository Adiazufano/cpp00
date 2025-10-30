#ifndef FILE_HPP
#define FILE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <filesystem>

class	File
{
	public:
		File();
		File(const File& other);
		File&			operator=(const File& other);
		void			setFilename(std::string filename);
		std::string		getFilename();
		void			setS1(std::string s1);
		std::string		getS1();
		void			setS2(std::string s1);
		std::string		getS2();
		void			setContent();
		std::string		getContent();
		void			createAndReplace(File& file, std::string filename);

	private:
		std::string	filename;
		std::string	s1;
		std::string	s2;
		std::string	content;
};

#endif