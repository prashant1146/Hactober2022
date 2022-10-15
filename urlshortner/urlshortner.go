package main

import (
	"fmt"
)

// Temporary data store
var url_map = make(map[string]string)

// Initial ID 
var iniID = 999

func main() {
	var url = "https://example.com"
	var url_1 = "https://example.com?param=1"
	var url_2 = "https://example.com?param=2"

	short_url := shortenUrl(url)
	short_url_1 := shortenUrl(url_1)
	short_url_2 := shortenUrl(url_2)
	fmt.Println("short_url is: ", short_url)
	fmt.Println("short_url is: ", short_url_1)
	fmt.Println("short_url is: ", short_url_2)

	fmt.Println("expandUrl", expandUrl(short_url))
	fmt.Println("expandUrl", expandUrl(short_url_1))
	fmt.Println("expandUrl", expandUrl(short_url_2))
}

// expandUrl return long url related to short url 
func expandUrl(short_url string) string {
	return url_map[short_url]
}

// shortenUrl return short url related to long url 
func shortenUrl(url string) string {
	iniID += 1
	short_url := idToShortURL(iniID)
	url_map[short_url] = url
	return short_url
}
// idToShortURL incrementalId to 
func idToShortURL(id int) string {
	var chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
	var shortURL = ""
	for id > 0 {
		var temp_index = id % 62
		shortURL += string(chars[temp_index])
		id = id / 62
	}
	return reverse(shortURL)
}

// shortURLToId returns the id value for a given shortURL
func shortURLToId(shortURL string) int {
	iniID = 0
	for _, c := range shortURL {
		if c >= 97 && c <= 122 {
			iniID = (iniID * 62) + int(c) - 97
		} else if c >= 65 && c <= 90 {
			iniID = (iniID * 62) + int(c) - 65 + 26
		} else {
			iniID = (iniID * 62) + int(c) - 48 + 52
		}
	}
	return iniID
}

// reverse helper function to reverse string
func reverse(s string) (result string) {
	for _, v := range s {
		result = string(v) + result
	}
	return
}
