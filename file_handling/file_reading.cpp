#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class LogMessage{
    public:
        void logSuccess(){
                cout << "\033[92mFile opened and read successfully..\033[0m\n";
            }

            void logError(){
                cout << "\033[91mPlease enter the file correct path or file extesion file not found..\033[0m\n";
            }
};

void readFile(string file_name){
        LogMessage m;
        ifstream readMyFile(file_name);
        if(!readMyFile){
            m.logError();
        }else{
            string line;
            while(getline(readMyFile, line)){
                cout<<line<<endl;
            }
            m.logSuccess();
        }
        readMyFile.close();
}
int main(){
    LogMessage M;
    string name;

    cout<<"Enter the file name which you want to read : ";
    getline(cin, name);
    readFile(name);
    
    return 0;
}

// g++ file_reading.cpp -o file_reading
// ./file_reading.exe
