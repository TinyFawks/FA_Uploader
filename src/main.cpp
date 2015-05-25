/*
 *
 *
 *  Created on: May 23, 2015
 *      Author: fawks
 */

#include <stdio.h>
#include <curl/curl.h>
#include "web/WebManager.h"



int main(void)
{
	CURL *curl;
	CURLcode res;

	WebManager wm = WebManager();
	wm.Login("TinyFawks", "foo");

	
	curl = curl_easy_init();
	if(curl) {
		curl_easy_setopt(curl, CURLOPT_URL, "http://example.com");
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);

		res = curl_easy_perform(curl);

		if(res != CURLE_OK)
			fprintf(stderr, "curl_easy_perform() failed: %s\n",
					curl_easy_strerror(res));
		curl_easy_cleanup(curl);
	}

	return 0;
}
