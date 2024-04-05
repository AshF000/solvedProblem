//solved part
vector<int> getEvenDigitNumbers(vector<int> &arr) {
    int n=arr.size();
	vector<int>evens;

	for(int i=0;i<n;i++)
	{
	    // to_string(x) converts x to string.
	    // x.length() gives length of string.
		if((to_string(arr[i]).length())%2==0)
		{
			evens.push_back(arr[i]);
		}
	}
	return evens;
}
