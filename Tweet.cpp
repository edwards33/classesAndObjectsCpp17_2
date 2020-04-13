#include "Tweet.h"
#include <iostream>


Tweet::Tweet(std::string first,
		std::string last,
		int arbitrary,
		std::string handle)
	: 
	Person(first,last, arbitrary),
    tweetHandle(handle)
{
	std::cout << "constructing tweet" << tweetHandle << std::endl;
}


Tweet::~Tweet()
{
	std::cout << "destructing tweet" << tweetHandle << std::endl;
}
