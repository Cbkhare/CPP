vector<int> Solution::rotateArray(vector<int> &A, int B) {
	vector<int> ret;

    B = B% A.size();
	for (int i =0; i < A.size(); i++) {
	    int x;
	    if (i+B<A.size()) x= i+B;
	    else x = (i+B)%A.size();
		ret.push_back(A[x]);
	}
	return ret;
}
//https://www.interviewbit.com/problems/arraybug/
