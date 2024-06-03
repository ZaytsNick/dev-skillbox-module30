// Task_1.cpp: определяет точку входа для приложения.
//
#include <iostream>
#include <cpr/cpr.h>


int main()
{
	cpr::Response get = cpr::Get(cpr::Url("http://httpbin.org/"));
	std::cout << get.text << std::endl;

	cpr::Response post = cpr::Post(cpr::Url("http://httpbin.org/"));
	std::cout<< post.text << std::endl;

	cpr::Response put = cpr::Put(cpr::Url("http://httpbin.org/"));
	std::cout << put.text << std::endl;

	cpr::Response del = cpr::Delete(cpr::Url("http://httpbin.org/"));
	std::cout << del.text << std::endl;

	cpr::Response patch = cpr::Patch(cpr::Url("http://httpbin.org/"));
	std::cout << patch.text << std::endl;
}
	