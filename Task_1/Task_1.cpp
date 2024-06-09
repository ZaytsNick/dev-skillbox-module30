// Task_1.cpp: определяет точку входа для приложения.
//
#include <iostream>
#include <string>
#include <cpr/cpr.h>

int main()
{
	std::string command;
	while(command!="exit")
	{
		std::cout << "Enter command: ";
		std::cin >> command;
		if(command=="get")
		{
			cpr::Response get = cpr::Get(cpr::Url("http://httpbin.org/get"));
			std::cout << get.text << std::endl;
		}
		else if(command=="post")
		{
			cpr::Response post = cpr::Post(cpr::Url("http://httpbin.org/post"));
			std::cout << post.text << std::endl;
		}
		else if (command == "put")
		{
			cpr::Response put = cpr::Put(cpr::Url("http://httpbin.org/put"));
			std::cout << put.text << std::endl;
		}
		else if (command == "del")
		{
			cpr::Response del = cpr::Delete(cpr::Url("http://httpbin.org/delete"));
			std::cout << del.text << std::endl;
		}
		else if (command == "patch")
		{
			cpr::Response patch = cpr::Patch(cpr::Url("http://httpbin.org/patch"));
			std::cout << patch.text << std::endl;
		}
	}

	//cpr::
}
	