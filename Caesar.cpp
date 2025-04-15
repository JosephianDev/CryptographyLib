#include "cryptography.cpp"

class caesar_cipher : public Cryptography::base {
private:
	int MAX=160;
	std::string from,end;
	
	std::string encrypt(){
		std::string res;
		unsigned temp;
		
		for(unsigned int i=0;i<from.length();i++){
			temp=( find_map(from[i])+key )%map_dim();
			res.push_back(MAP[temp]);
		}
		
		return res;
	}
	
	std::string decrypt(){
		std::string res;
		unsigned temp;
		
		for(unsigned int i=0;i<end.length();i++){
			temp=( find_map(end[i])-key )%map_dim();
			res.push_back(MAP[temp]);
		}
		
		return res;
	}
	
	char MAP[10+26]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	unsigned find_map(char t){
		int pos=0;
		for(unsigned int i=0;i<map_dim();i++) if(t==MAP[i]) pos=i;
		return pos;
	}
	unsigned map_dim(){
		return ((sizeof MAP) / (sizeof *MAP));
	}
public:
	caesar_cipher(std::string text_to_cipher, unsigned short c_key){			
		from=toUpper(text_to_cipher);
		if(c_key>0 && c_key<MAX) key=c_key;
		else key=1;
	 
		end = encrypt();
		from = decrypt();
	}
	
	std::string get_result(){
		return end;
	}
	
	std::string get_origin(){
		return from;
	}
	
};
