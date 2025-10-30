#include "File.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "ERROR: The program must receive 3 arguments.";
		return (1);
	}

	File	ogFile;

	ogFile.setFilename(argv[1]);
	ogFile.setS1(argv[2]);
	ogFile.setS2(argv[3]);
	ogFile.setContent();
	ogFile.createAndReplace(ogFile, "newFile");
	return (0);
}