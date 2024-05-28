//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    sort(pat.begin(), pat.end());
	    string ans = "";
	    int n = txt.length();
	    int k = pat.length();
	    int i=0,j=0,cnt=0;
	    while(j<n){
	        ans+=txt[j];
	        if(j<k-1){
	            j++;
	        }
	        else{
	            string tmp = ans;
	            sort(tmp.begin(),tmp.end());
	            ans.erase(0,1);
	            if(tmp==pat){
	                cnt++;
	            }
	            
	            j++;
	            i++;
	        }
	    }
	    cout<<cnt<<endl;
	    return cnt;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends