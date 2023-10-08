
//What do we need to include?
#include <iostream>
#include <string>
#include <fstream>

//No using namespace std;!!!!
using std::cout;
using std::endl;
using std::string;

//function to write num to any ostream
void writeWithAnyOstream(std::ostream& formatter, string fileName, int inputNumber){
	formatter << "writing number to stream " << inputNumber << " to " << fileName << endl;
}

int main() {
    // Write an int to the user's console.
    int myNum = 42;
    cout << "This is console output number: " << myNum << endl;
    

    // Write an int to a file.
    string fileName = "fileout.txt";
    std::ofstream formatter(fileName, std::ofstream::out);
    cout << "We write number " << myNum << " to file " << fileName << endl;
    formatter << myNum;
    
    // Write method to take any ostream
    fileName = "anyostream.txt";
    std::ofstream newFormatter(fileName, std::ofstream::out);
    writeWithAnyOstream(cout, "console" , myNum);
    writeWithAnyOstream(newFormatter, fileName, myNum + 2); 

    return 0;
}
