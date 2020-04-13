#pragma once

#include "Person.h"
#include <string>

class Tweet :
	public Person
{
private:
	std::string tweetHandle;
public:
	Tweet(std::string first,
          std::string last,
          int arbitrary,
          std::string handle);
	~Tweet();
};

