/*
  You are given a dataset consisting of N items. Each item is a pair of a word and a boolean denoting whether the given word is a spam word or not.
  We want to use this dataset for training our latest machine learning model. Thus we want to choose some subset of this dataset as training dataset. 
  We want to make sure that there are no contradictions in our training set, i.e. 
  there shouldn't be a word included in the training set that's marked both as spam and not-spam. 
  For example item {"fck", 1}, and item {"fck, 0"} can't be present in the training set, because first item says the word "fck" is a spam, 
  whereas the second item says it is not, which is a contradiction. Your task is to select the maximum number of items in the training set.
  
  Note that same pair of {word, bool} can appear multiple times in input. The training set can also contain the same pair multiple times.
*/
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() 
{
	int T,N,ans;
	string s;
	char c;
	cin>>T;
	while(T--)
	{
	    ans=0;
	    map<string,pair<int,int>> m;
	    cin>>N;
	    {
	        while(N--)
	        {
	            cin>>s>>c;
	            if(c=='1')
	            {
	                m[s].first++;
	            }
	            if(c=='0')
	            {
	                m[s].second++;
	            }
	        }
	        for(auto mp:m)
	        {
	            ans+=max(mp.second.first,mp.second.second);
	        }
	        cout<<ans<<endl;
	    }
	}
	return 0;
}
