
#include <iostream>
#include <fstream>

using std::cout;    using std::endl;
using std::string; using std::cin;

//read numbers from a file
void readNumbers() {
    // Create our ifstream and make it open the file    
	std::ifstream in("res/numbers.txt", std::ifstream::in);
     // Something to store values we get from the stream
	int number;
	while(!in.eof() && in.is_open()){
        	// Extract next word from input
		in >> number;
		
        	// If input is in a fail state, either a value couldn't
        	// be converted, or we are at the end of the file.
		if (!in.eof() && !in.fail()){
        		//print whatever we read                               
			cout << number << endl;                       
		}
	}
}                                                              

//read a single word at a time from a file
void readHaikuWord() {
    // Create our ifstream and make it open the file
	std::ifstream in("res/haiku.txt", std::ifstream::in);
     // Something to store values we get from the stream
	string content;
	while(!in.eof() && in.is_open()){
        	// Extract next word from input
		in >> content;
		
        	// If input is in a fail state, either a value couldn't
        	// be converted, or we are at the end of the file.
		if (!in.eof() && !in.fail()){
        		//print whatever we read
			cout << content << endl;
		}
	}

}

void readHaikuLine() {
    // Create our ifstream and make it open the file
	std::ifstream in("res/haiku.txt", std::ifstream::in);
	string content;
    // Something to store the lines as we get them form the stream
	while ( !in.eof() && in.is_open() ){
        	// If input is in a fail state, either a value couldn't
        	// be converted, or we are at the end of the file.
		std::getline(in, content);
		if(!in.fail()){
        		//print whatever we read
			cout << content << endl;
		}
	}

}

//function for us to play around with cin
void playground(){
	cout << "### read Haiku one line at a time ###" << endl;
	readHaikuLine(); 

	cout << endl << endl;
	cout << "### read Haiku one word at a time ###" << endl;
	readHaikuWord();
	
	cout << endl << endl;
	cout << "### read Haiku read numbers ###" << endl;
	readNumbers();

}

int main() {

    playground();

    return 0;
}


