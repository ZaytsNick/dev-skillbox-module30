// Task_3.cpp: определяет точку входа для приложения.
//

#include <iostream>
#include <cpr/cpr.h>
#include <vector>
#include <map>

int main()
{
	std::string url = "http://httpbin.org/";
	std::map<std::string, std::string> arguments;
	std::vector<cpr::Pair> pairs;
	std::string arg="0";
	while (arg != "exit")
	{

		std::cout << "Enter arg: ";
		std::cin >> arg;
		if (arg == "exit")
		{
			break;
		}
		else if (arg == "post")
		{
			url += "post";
			{//https://stackoverflow.com/questions/41316770/http-call-from-c-using-cpr
				//std::string qq, ss;
				if (arguments.size() > 0)
				{
					url += '?';
					//std::map<std::string, std::string>::iterator it;
					for (auto it = arguments.begin(); it != arguments.end(); it++)
					{
						if (it != arguments.begin())
							url += '&';
						url += it->first + '=' + it->second;
					}
				}
				std::cout << pairs[0].key;
				cpr::Response post = cpr::Post(cpr::Url(url), cpr::Payload(pairs.begin(), pairs.end()));
				std::cout << post.text << std::endl;
			}
		}
		else if (arg == "get")
		{
			url += "get";
				if(arguments.size()>0)
				{
					url += '?';
				//std::map<std::string, std::string>::iterator it;
				for (auto it = arguments.begin(); it != arguments.end(); it++)
				{
					if (it != arguments.begin())
						url += '&';
					url += it->first + '='+it->second;
				}
				}
				std::cout << url;
				cpr::Response get = cpr::Get(cpr::Url(url));
				std::cout << get.text << std::endl;
		}
		else
		{
			std::cout << "Enter value: ";
			arguments[arg];
			std::cin >> arguments[arg];
			cpr::Pair  tempPair((std::string)arg, (std::string)arguments[arg]);
			pairs.push_back(tempPair);
			
		}
	}
	
	
}
