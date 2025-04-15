#include "cryptography.cpp"

class minor_ak2 : public Cryptography::base {
private:
	std::string from,end;
	
	std::string encrypt(){
		std::string res;
		
		if(from.length()%2==0){
			//se la lunghezza della parola è multipla di 2 ossia la parola è 2n lunga ossia pari
			for(int i=0;i<from.length())
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
public:
	caesar_cipher(std::string text_to_cipher){			
		from=toUpper(text_to_cipher);
	 
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
