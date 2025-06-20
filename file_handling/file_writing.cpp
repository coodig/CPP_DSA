#include <iostream>
#include <fstream>
// #include <filesystem>
// namespace fs = std::filesystem;
using namespace std;

class LogMessages{
    public:

        void logSuccess(){
            cout << "\033[92mfile created and updated successfully..\033[0m\n";
        }

        void logError(){
            cout << "\033[91mPlease enter file extension also!\033[0m\n";
        }
};

void writeFile(string file_name,string file_content){

    ofstream writeMyFile(file_name);
    writeMyFile<<file_content;
    writeMyFile.close();

}

bool hasExtension(const string& fileName){
        size_t pos = fileName.find_last_of(".");
        return (pos != string::npos && pos != fileName.length() - 1 );
}

int main(){
    LogMessages m;
    string name, content;
    cout<<"Enter the file name with extension"<<endl;
    cin>>name;
    cin.ignore();
    cout<<"Enter the file content"<<endl;
    getline(cin, content);

    if(hasExtension(name)){
        writeFile(name,  content);
        m.logSuccess();
    }else{
        m.logError();
    }

    return 0;

}

// g++ file_writing.cpp -o file_writing
// ./file_writing.exe


//  cout << "\033[91mBright Red Text\033[0m\n";
// cout << "\033[92mBright Green Text\033[0m\n";