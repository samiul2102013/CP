#include<bits/stdc++.h>

using namespace std;

bool lowerCaseCheck(string s) {
    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (isupper(c)) {
            return false;
        }
    }
    return true;
}


bool otherthree(string s){
    string tmp = s;
    sort(tmp.begin(), tmp.end());
    if(tmp==s){
        return true;
    }
    else{
        return false;
    }
}

void TEST_CASES() {
    int t;cin>>t;
    string s;
    cin >> s;
    if(otherthree(s) && lowerCaseCheck(s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

int main() {
    int t = 1;
    cin>>t;

    while (t--) {
        TEST_CASES();
    }

    return 0;
}
