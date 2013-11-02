#include <Windows.h>

#include "Screen.h"

void Screen::TakeScreenshot(char* path)
{
	// takes a screenshot of the whole screen, and saves it to "path"
	// if the "path" is invalid, throws an exception
}

void Screen::TakeScreenshot(RECT *selection, char* path)
{
	// takes a screenshot of an area of the screen, and saves it to "path"
	// if the "selection" is out of bounds of the screen in any way, throws an exception
	// if the "path" is invalid, throws an exception
}

void Screen::TakeWindowScreenshot(HWND window, char* path)
{
	// takes a screenshot of the the given window, and saves it to "path"
	// if the "window" is invalid, throws an exception
	// if the "path" is invalid, throws an exception
}
