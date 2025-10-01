#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class LogMessage{
    public:
        void logSuccess(string log_message){
            cout<<"\033[92m"<<log_message<<"\033[0m\n";
        }

        void logError(string log_message){
            cout<<"\033[91m"<<log_message<<"\033[0m\n";
        }
};

void writeFile(string file_name, string write_content){
    
}

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

void appendfile(string file_name, string append_content){
    LogMessage m;

    if(!exists(file_name)){
        m.logError("Error");
    }else{
        ostream appendMyFile(file_name, ios::app);
    }

}

int main(){
    LogMessage M;

    M.logSuccess("success");
    appendfile("text.txt","this is append content")
   
    return 0;
}