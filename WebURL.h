#pragma once
#include <string>

class WebURL {
public:
	WebURL(std::string userURL);

	// Getter functions.
	std::string getURL();
	std::string getURLScheme();
	std::string getURLAuthority();
	std::string getURLPath();

private:
	std::string URL;
	std::string scheme;
	std::string authority;
	std::string path;
};
