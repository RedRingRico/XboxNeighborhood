#include <iostream>
#include <GitVersion.hpp>

int main( int p_Argc, char **p_ppArgv )
{
	std::cout << "Xbox Neighborhood" << std::endl;
	std::cout << "\tVersion " << GIT_COMMITHASH << std::endl;
	return 0;
}

