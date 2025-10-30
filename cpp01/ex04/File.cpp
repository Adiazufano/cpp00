#include "File.hpp"
#include <filesystem>
#include <sys/stat.h>

File::File(){}

File::File(const File& other)
{
	this -> filename = other.filename;
	this -> s1 = other.s1;
	this -> s2 = other.s2;
}

File&	File::operator=(const File& other)
{
	if (this != &other)
	{
		this -> filename = other.filename;
		this -> s1 = other.s1;
		this -> s2 = other.s2;
	}
	return (*this);
}

void	File::setFilename(std::string filename)
{
	this -> filename = filename;
}

std::string	File::getFilename()
{
	return (this -> filename);
}

void	File::setS1(std::string s1)
{
	this -> s1 = s1;
}

std::string	File::getS1()
{
	return (this -> s1);
}

void	File::setS2(std::string s2)
{
	this -> s2 = s2;
}

std::string	File::getS2()
{
	return (this -> s2);
}

void	File::setContent()
{
	std::string	line;
	struct stat	st;
	if (stat(filename.c_str(), &st) != 0)
	{
		std::cerr << "ERROR: cannot acces path";
		return ;
	}
	if (S_ISDIR(st.st_mode))
	{
		std::cerr << "ERROR: path is a diectory.";
		return ;
	}
	std::ifstream	file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "ERROR: cannot open the file.";
		return ;
	}
	while (getline(file, line))
	{
		content += line + "\n";
	}
	file.close();
}

std::string	File::getContent()
{
	return (this -> content);
}

std::string	replaceAll(const std::string& content, const std::string& s1, const std::string& s2)
{
	std::string	result;
	size_t		pos;
	size_t		found;
	pos = 0;
	while ((found = content.find(s1, pos)) != std::string::npos)
	{
		result.append(content, pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	result.append(content, pos, content.size() - pos);
	return (result);
}

void	File::createAndReplace(File& file, std::string filename)
{
	std::string					line;

	if (file.getFilename().empty() || filename.empty())
	{
		std::cerr << "ERROR: Missing arguments.";
		return ;
	}
	std::ofstream newFile(filename.c_str());
	if (!newFile)
	{
		std::cerr << "ERROR: ofstream error";
		return ;
	}
	line = replaceAll(file.getContent(), file.getS1(), file.getS2());
	newFile << line;
	newFile.close();
}


