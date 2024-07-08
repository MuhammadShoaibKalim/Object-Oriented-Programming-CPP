#include <iostream>
#include <fstream>
using namespace std;

int main() {
    
    string message;
    cout << "Enter a message: ";
    getline(cin, message);
    
    ofstream outFile("message.txt");
    outFile << message;
    outFile.close();
    
    cout << "Message saved to message.txt" << endl;
      
      if(!outFile)
      cerr<<"File can not open for writing"<<endl;

      cout<<message;
      outFile.close();

      ifstream inFile("message.txt");
      if(!inFile)
        cerr<<"File can not open for reading";
        cout<<message<<endl;
        
        getline(inFile, message);
        cout << "The message read from the file is: " << message << endl;
        inFile.close();

    return 0;
}