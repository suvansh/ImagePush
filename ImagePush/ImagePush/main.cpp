#include <iostream>
#include "Screen.h"

int main(int argc, char** argv)
{
	RECT selection;

	selection.top = 100;
	selection.left = 100;
	selection.bottom = 300;
	selection.right = 300;

	try
	{
		Screen::TakeScreenshot("path to image"); // should take a screenshot of the whole screen
		Screen::TakeScreenshot(&selection, "path to another image"); // should take a screenshot of the location on the screen specified by *selection*
		Screen::TakeWindowScreenshot(GetDesktopWindow(), "path to yet another image"); // should take a screenshot of the whole screen
	}
	catch (int code) {
		std::cout << "an exception has occured: " << code;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}