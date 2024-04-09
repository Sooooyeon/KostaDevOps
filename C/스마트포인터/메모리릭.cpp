#include<iostream>
#include<crtdbg.h>
#define _CRTDBG_MAP_ALLOC

using namespace std;

void main() {
	_CrtSetBreakAlloc(78);
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	int* nData = new int;
	_CrtDumpMemoryLeaks();
	//delete nData;

}
