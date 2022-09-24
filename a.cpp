#include <string>
#include <vector>
#include <iostream>
#include <sstream>
using namespace std;

string strr[50][50];
vector<string> solution(vector<string> commands) {
    vector<string> answer;
    return answer;
}

int main(){
    vector<vector<string>> vec;
    vector<vector<int>> merge;
    vector<int> xx;
    vector<string> answer={"UPDATE 1 1 a","UPDATE 1 2 b"};
    for(int i=0;i<answer.size();i++){
        string s=answer[i];
        istringstream ss(s);
        string stringBuffer;
        vector<string> x;
        
        x.clear();
        while(getline(ss,stringBuffer,' ')){
            x.push_back(stringBuffer);
            cout<<stringBuffer<<" ";
        }
        vec.push_back(x);
    }
    for(int i=0;i<vec.size();i++){
        if(vec[i][0]=="UPDATE"){
            if(vec[i].size()==4){
                int num1=stoi(vec[i][1]);
                int num2=stoi(vec[i][2]);
                strr[num1][num2]=vec[i][3];
            }
            else{
                for(int a=0;a<50;a++){
                    for(int b=0;b<50;b++){
                        if(strr[a][b]==vec[i][1]){
                            strr[a][b]=vec[i][2];
                        }
                    }
                }
            }
        }
        if(vec[i][0]=="MERGE"){
            int x=stoi(vec[i][1]);
            int y=stoi(vec[i][2]);
            int x2=stoi(vec[i][3]);
            int y2=stoi(vec[i][4]);
            xx.push_back(x);
        }
    }
}