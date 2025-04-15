/*
CryptoG: a custom cryptography methods for new comunications
*/
#include <ctype.h>
#include <iostream>
#include <string>

template<typename T> void swap(T& x, T& y){T tmp=x;x=y;y=tmp;}//scambia

std::string toUpper(std::string text){
	for(unsigned int i=0;i<text.length();i++) text[i]=toupper(text[i]);
	return text;
}

const int letters_size = 26, number_size = 10;
char basic_MAP[10+26]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char char_MAP[letters_size]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char number_MAP[number_size]={'0','1','2','3','4','5','6','7','8','9'};
//char full_MAP[number_size+letters_size]={number_MAP, char_MAP};//stessa definizione di basic map ma puo essere soggetta a modifiche direttamente dalle specifiche mappe

namespace Cryptography {
class base {
protected:
	unsigned long key;
public:
	virtual std::string encrypt(){
		std::cout<<"Encrypt base function.";
		return nullptr;
	}
	virtual std::string decrypt(){
		std::cout<<"Decrypt base function.";
		return nullptr;
	}
};

}
