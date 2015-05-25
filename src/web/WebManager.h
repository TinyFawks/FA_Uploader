/*
 * WebManager.h
 *
 *  Created on: May 23, 2015
 *      Author: fawks
 */
#pragma once
#include <string>
#include <functional>

class WebManager {
private:
	static constexpr const char* BASE_URL = "www.furaffinity.net/";

	static std::string HTTP(std::string url) {
		return "HTTP://" + url;
	}
	static std::string HTTPS(std::string url) {
		return "HTTPS://" + url;
	}
	static std::string REF(std::string url1, std::string url2) {
		return url1 + "?ref=" + url2;
	}
	static std::string LOGIN() {
		return std::string(BASE_URL) + "login/";
	}
	static std::string USER_PAGE(std::string username) {
		return std::string(BASE_URL) + "user/" + username + "/";
	}

	std::string username;

public:
	WebManager();
	virtual ~WebManager();

	bool Login(std::string username, std::string password);
};
