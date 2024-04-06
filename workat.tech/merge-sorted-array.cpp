//solved part

// APPROAVH - 1
vector<int> mergeSortedArrays(vector<int> &A, vector<int> B) {

	int a=A.size(),b=B.size();
	vector<int>merged;

	int i = 0, j = 0;
	while (i < a && j < b) {
        if (A[i] < B[j]) {
            merged.push_back(A[i]);
            i++;
        } else {
            merged.push_back(B[j]);
            j++;
        }
    }

    while (i < a) {
        merged.push_back(A[i]);
        i++;
    }

    while (j < b) {
        merged.push_back(B[j]);
        j++;
    }

	return merged;

}

// APPROACH - 2
vector<int> mergeSortedArrays(vector<int> &A, vector<int> B) {

	int a=A.size(),b=B.size();
	vector<int>merged;

	for(int i=0;i<a;i++)
		merged.push_back(A[i]);
	for(int i=0;i<b;i++)
		merged.push_back(B[i]);

	sort(merged.begin(),merged.end());

	return merged;

}
