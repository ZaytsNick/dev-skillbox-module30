// Task_2.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include "cpr/cpr.h"

int main()
{
	cpr::Response get = cpr::Get(cpr::Url("http://httpbin.org/html"));
	int start = get.text.find("<h1>");
	int end = get.text.find("</h1>");
	for (int i = start+4; i < end; i++)
	{
		std::cout << get.text[i];
	}
	return 0;
}
