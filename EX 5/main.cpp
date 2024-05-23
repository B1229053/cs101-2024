#include <iostream>
#include <string>
using namespace std;

class myString {
    private:
        string m_str;
    public:
        myString(string s){
            m_str = s;
        }
};

class ReadClass{
    string in;
    string line;
    open("main.cpp");
    if (fail()){
        cout<<"Error"<<endl;
        in.close();
    }
    
    while(getline(in,line)){
        cout<<"class in main.cpp"<<endl;
        cout<<"class myString"<<endl;
        cout<<"class ReadClass"<<endl;
    }
    in.close();
    
}

int main() {
    ReadClass rfile;
    rfile.showClass();
    return 0;
    
}
