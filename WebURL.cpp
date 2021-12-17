#include "WebURL.h"
#include <string>
#include <iostream>

WebURL::WebURL(std::string userURL)
	:	URL{ userURL },
		// Using similar from project 2 to initialize scheme, authority, and path.
		scheme{ userURL.substr(0, userURL.find("//")) },
		authority{ userURL.substr(scheme.length(), userURL.substr(scheme.length() + 2).find_first_of("/") + 2) },
		path{ userURL.substr(scheme.length() + authority.length()) }
	{ }

// Getter functions.
std::string WebURL::getURL() {
	return URL;
}

std::string WebURL::getURLScheme() {
	return scheme;
}

std::string WebURL::getURLAuthority() {
	return authority;
}

std::string WebURL::getURLPath() {
	return path;
}