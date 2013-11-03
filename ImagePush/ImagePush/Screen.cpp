#include <Windows.h>
#include "windows.h"
#include "Screen.h"

void Screen::TakeScreenshot(char* path)
{
	HWND screen;
	HDC screenDC;
	HDC compatibleDC;
	RECT screen_coordinates;
	
	
	screenDC = GetDC(screen);
	compatibleDC = CreateCompatibleDC(screenDC
	if(!compatible DC)
	{
		//error code
	}
	
	GetClientRect(screen, &screen_coordinates); //stores upper-left and lower-right coordinates of screen to screen_coordinates, giving size of client screen
	SetStretchBltMode(screenDC, HALFTONE);
	SetBrushOrgEx(screenDC, /*nXOrg, nYOrg, point*/);
	
	
	
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
