#include "caesar.cpp"

int main(){
	std::string str="zz";
	
	caesar_cipher a(str,11);
	std::cout<<"\nDati: "<<a.get_origin()<<" - "<<a.get_result();
	
	return 0;
}
