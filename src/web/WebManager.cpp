/*
 * WebManager.cpp
 *
 *  Created on: May 23, 2015
 *      Author: fawks
 */

#include "WebManager.h"

WebManager::WebManager() {
}

WebManager::~WebManager() {
}

bool WebManager::Login(std::string username, std::string password) {
	printf("%s", BASE_URL);
	printf("%s", HTTP(BASE_URL).c_str());
	printf("%s", HTTPS(BASE_URL).c_str());
	printf("%s", HTTP(LOGIN()).c_str());
	printf("%s", HTTP(USER_PAGE("TinyFawks")).c_str());
	return false;
}

