//Roman to Integer 
#include<iostream>
#include<conio.h>
using namespace std;

class  Solution{
    public:
        int I = 1;
        int V = 5;
        int X = 10;
        int L = 50;
        int C = 100;
        int D = 500;
        int M = 1000;
        int j = 0;
        string s;
        int num;
        Solution(){
            cout << "Enter a Roman Number : ";
            cin >> s;
            output(s);
        }
        int CheckRoman(string s){
            for (int i = 0; i < s.length();i++){
                if(s[i]=='I'||s[i]=='V'||s[i]=='X'||s[i]=='L'||s[i]=='C'||s[i]=='D'||s[i]=='M'){
                    //cout << "valid";
                }
                else{
                    return 0;
                }
            }
            return 1;
        }
        int value(char i){
            if(i=='I'){
                return I;
            }
            else if(i == 'V'){
                return V;
            }
            else if(i == 'X'){
                return X;
            }
            else if(i =='L'){
                return L;
            }
            else if(i=='C'){
                return C;
            }
            else if(i== 'D'){
                return D;
            }
            else if(i=='M'){
                return M;
            }
            else{
                return 0;
            }
        }
        int RomantoInt(string s){
            num = 0;
            for (int i = 0; i < s.length();i++){
                int s1 = value(s[i]);
                cout << "s1 " << s1 << "\n";
                if(i+1<s.length()){
                    int s2 = value(s[i + 1]);
                    cout <<"s2 "<< s2 << "\n";
                    if(s1<s2){
                        num = num + s2 - s1;
                        cout <<"num1 "<< num << "\n";
                    }
                    else{
                        num = num + s1 + s2;
                        cout <<"num2 "<< num << "\n";
                    }
                    i++;
                }
                else{
                    num = num + s1;
                    cout << "num3 "<<num << "\n";
                }
            }
            return num;
        }
        void output(string s){
            if(CheckRoman(s)){
                cout << s << " is valid Roman Number\n";
            }
            else{
                cout << s << " is unvalid Roman Number\n";
                return;
            }
            int n = RomantoInt(s);
            cout << s << " in Desimal value is " << n;
        }
};
int main(){
    Solution s1;
    getch();
    return 0;
}
