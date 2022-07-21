class Solution {
public:
	int minNumberOfFrogs(string croakOfFrogs) {
		int ans=0;
		unordered_map<char,int> m;
		for(int i=0;i<croakOfFrogs.size();i++)
		{
			m[croakOfFrogs[i]]+=1;
			int MAX=-1;
			int MIN=INT_MAX/2;
			for(auto& x:m)
			{
				MAX=max(MAX,x.second);
				MIN=min(MIN,x.second);
			}
            // ans is greatest frequency subtract least frequency
			ans=max(ans,MAX-MIN);


			if(m['k']>m['a'] || m['k']>m['o'] || m['k']>m['c'] || m['k']>m['r'])
			{
				return -1;
			}

			else if(m['a']>m['o'] || m['a']>m['c'] || m['a']>m['r'])
			{
				return -1;
			}

			else if(m['o']>m['c'] || m['o']>m['r'])
			{
				return -1;
			}

			else if(m['r']>m['c'])
			{
				return -1;
			}
		}

        // check frequency, if they are not equal , return -1
		vector<int> temp;
		for(auto& x:m)
		{
			temp.push_back(x.second);
		}

		for(int i=1;i<temp.size();i++)
		{
			if(temp[i]!=temp[i-1]) return -1;
		}

		return ans;
	}
};