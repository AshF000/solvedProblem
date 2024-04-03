//solved part
vector<int> getCumulativeSum(vector<int> &arr) {
	int sum=0,n=arr.size();
	vector<int> cumSum(n);
	for (int i=0;i<n;i++)
	{
		sum+=arr[i];
		cumSum[i]=sum;
	}
	return cumSum;
}
