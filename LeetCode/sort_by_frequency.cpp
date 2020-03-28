
#include <iostream>
#include <string>
#include <map>
#include <queue>
using namespace std; 

string frequencySort(string s);

int main()
{
	string s = "aabbaced";
	string result = frequencySort(s);
	cout << "result" << result << endl; 
	return 0;
}

string frequencySort(string s) {

		cout << "string rec=" << s << endl; 
		string toReturn = "";
        map<char, int> freq; 
        priority_queue<pair<int,char>, vector<pair<int,char>>> pr; 
        
        for (auto &ch: s){
            freq[ch]++;
        }
        
        for(auto &eachVal:freq){
            pr.push({eachVal.second, eachVal.first}); 
        }
    
        while (!pr.empty()){
            int howfreq = pr.top().first; 
            char character = pr.top().second; 
            
            for (int i = 0; i<howfreq; i++){
                toReturn += character; 
            }
            pr.pop(); 
        }
        return toReturn;
}

/*bool sortDecreasingOrdeer(pair<char,int> &a, pair<char,int> &b)
{
        return (a.second <b.second);
}
class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char, int> freq; 
        for (int i =0; i< s.length(); i++)
        { 
            freq[s[i]]++;
        }
        vector <pair<char,int>> pairs (freq.begin(),freq.end()); 
        sort (pairs.begin(),pairs.end(), sortDecreasingOrdeer);
        //s.erase();
        s.erase(); 
        for (int i = 0; i<pairs.size(); i++)
        {
            s.insert(s.begin(),pairs[i].second,pairs[i].first); 
        }
        return s;
    }
};
*/

/*
class Solution {
public:
    string frequencySort(string s) {
        //int array [10] = {0,1,4,0,1,1,4,5};
        //cout << &(array[0]) << " " << &(array[3]) << endl; 
        vector <pair<int, int>> pr(256) ; //possible ASCII chars
        int number_of_char = s.length(); 
     
        for (int i = 0; i < number_of_char; i++)
        {   
            //cout << i << " " << array[i] << " " << (pr[array[i]].first++) << " " << &(pr[array[i]].first);
            //cout <<" "<<"ASCII" << " "<< (pr[array[i]].second = array[i]); 
            //cout << endl; 
            pr[s[i]].first++; //frequency of each char 
            pr[s[i]].second = s[i]; //ascii number of the char 
            
        } 
        sort(pr.begin(), pr.end()); 
        reverse(pr.begin(),pr.end()); 
        string ans="";
        vector <pair<int,int>>::const_iterator it = pr.begin(); 
        //cout << it->first <<endl; 
        for (int i =0; i<number_of_char; i++){
            //cout <<"here 1=="<< pr[s[0]].first << endl;
            //cout << i << endl; 
            if (pr[i].first>0){
                //cout << i << endl; 
                for (it; it != pr.end(); it++){
                    //cout <<"here=="<< pr[s[i]].first << endl;
                    cout << it->first <<endl; 
                    
                    if (it->first >= 0)
                        ans += (pr[i].second);
                    else 
                        break; 
                }
            }
        }
    
        return ans;
    }
};*/