////solved part
vector<int> getPositiveCumulativeSum(vector<int> &arr) {
	int n=arr.size(),l=0,sum=0;

	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum>0)
		{
			l++;
		}
	}

	vector<int> posCumSum(l);
	sum=0;
	for(int i=0,j=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum>0)
		{
			posCumSum[j]=sum;
			j++;
		}
	}
	return posCumSum;
}

// OR

vector<int> getPositiveCumulativeSum(vector<int> &arr) {
	int n=arr.size(),sum=0;
	vector<int> cumSum;

	for (int i=0;i<n;i++)
	{
		sum+=arr[i];
		cumSum.push_back(sum);
	}
	vector<int> posCumSum;
	for(int j=0;j<n;j++)
	{
		if(cumSum[j]>0)
		{
			posCumSum.push_back(cumSum[j]);
		}
	}
	return posCumSum;
}
