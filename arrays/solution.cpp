//https://www.geeksforgeeks.org/number-subarrays-sum-exactly-equal-k/
#include<iostream>
#include<unordered_map>
#include<vector>

int main()
	{
	std::vector<int> vec = {9, 4, 20, 3, 10, 5};
	std::unordered_map<int,int> hash;
	int currsum = 0 ;	
	int k = 33;
	int res = 0;

	for(int i = 0 ; i < vec.size() ; ++i)
	{
		currsum += vec[i];

		if(currsum == k)
		{
			++res;
		}

		if(hash.count(currsum-k) > 0)
			res += hash[currsum-k];	


		if(hash.count(currsum) > 0)
                {
                ++hash[currsum];
                }
                else
                {
                hash[currsum] = 1;
                }
	

	}

	std::cout <<"Res : "<<res<<std::endl;
	return 0;
	}
