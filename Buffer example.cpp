#include <cstdio>

int main()
{
	//Buffer size must have a constant value
	const int buffSize = 1024;
	//The buffer is an arrange of some characters
	static char buffer[buffSize];

	// fgets get data from the console and moves to a different fileManager 
	fgets(buffer, buffSize, stdin);
	fputs(buffer, stdout);
	// fflush clear and moves data to our file
	fflush(stdout);

	// fputs allows us to put data to a different output stream
	fputs("Ohayou Sekai \n", stdout);
	// fflush clears the output stream after use
	fflush(stdout);


	return 0;
}