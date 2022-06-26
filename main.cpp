

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <cmath>

using namespace std;

string reverse(string greeting)
{
    string new_greeting;

    for(int n = greeting.length()-1; n >= 0; n--){
        new_greeting.push_back(greeting[n]);
    }
    return new_greeting;
}

string addBinary(string a, string b) {
    string result="";
    int i;
    int firstNum=0;
    int secondNum=0;
    int carry=0;
    for(a.size()>=b.size() ? i= a.size()-1 : i=b.size()-1;i>=0;i--){
        if(0<a.size()) {
            firstNum = a.at(a.size() - 1) - '0';
            a.pop_back();
        }
        else
            firstNum=0;

        if(0<b.size()) {
            secondNum = b.at(b.size() - 1) - '0';
            b.pop_back();
        }
        else
            secondNum=0;

        if((firstNum+secondNum+carry) == 3){
            result.push_back('1');
            carry=1;
        }
        else if((firstNum+secondNum+carry) == 2){
            result.push_back('0');
            carry=1;
        }
        else if((firstNum+secondNum+carry) == 1){
            result.push_back('1');
            carry=0;
        }
        else if((firstNum+secondNum+carry) == 0){
            result.push_back('0');
            carry=0;
        }
        else
            return "Problem";

    }
    if(carry==1)
        result.push_back('1');
    return reverse(result);
}


 // Driver code
 int main()
 {

    cout<<addBinary("11","1")<<endl;
    cout<<addBinary("1010","1011")<<endl;
    cout<<addBinary("0","0")<<endl;

    return 0;
 }


