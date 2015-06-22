#include "stdafx.h"
#include "RandomStringGenerator.h"

int _tmain(int argc, _TCHAR* argv[])
{
	RandomStringGenerator rsg;
	
	vector<string> test;

	for(int i=0; i<100; i++)
	{
		test.resize(test.size()+1);
		test[i] = rsg.Generate(16);
	}
	
	return 0;
}

