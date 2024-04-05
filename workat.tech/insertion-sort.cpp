//INSERTION SORT
void insertionSort(vector<int> &arr) {
	int n=arr.size();

	for(int i=1;i<n;i++)
	{
		for(int k=i,j=k-1;j>=0;k--,j--)
		{
			if(arr[j]>arr[k])
			{
				int temp = arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
		}
	}
}
