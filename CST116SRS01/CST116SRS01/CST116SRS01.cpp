// CST116SRS01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cassert>

int main()
{
	//This is for part 0
	std::size_t bool1 = sizeof(bool); //this is basically what you need to do for the size stream
	//Repeat for everything else

	//this is for part 1
	//add #include <cassert>...infact, do it now...some do assert.h, this is bad form for C++ programers
	assert(sizeof(bool) == 1); //check the book pg 81 for the chart (table 4.3.1) You will need to find out if its true or false (run it, correct it)
	//write in the readme file any failures, change the DeBug and x86 on the top to the other options and re run the program to hunt for failures...this will have 7 entries
	//unsigned short is in the list twice, only do it once
	//line 65 should be 0.f

	false //set as startup in the references, dont foreget to add <iostream>
		std::cout << "sizeof(false) == " << sizeof(false) << '\n';

	std::cout << "sizeof(\"Annie \"Lennox\"\n\") == " << sizeof("Annie" " " "\"Lennox\"\n") << std::endl;

	// "Annie" " " "\"Lennox\"\n"
		<< false
		//sizeof(false) == 1  this is what this should look like

    return 0;

}

