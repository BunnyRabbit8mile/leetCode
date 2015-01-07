class Solution {
public:
    double findMedianSortedArrays(int A[], int m, int B[], int n) {
	if ((n+m)%2 == 0) {
	    return (getMedian(A, m, B, n, (m+n)/2) +
		        getMedian(A, m, B, n, (m+n)/2+1))/2.0;
	}
	else {
	    return getMedian(A, m, B, n, (m+n)/2+1);
	}
    }

private:
    int getMedian (int a[], int a_num, int b[], int b_num, int k) {
	assert(a && b);
	if (a_num <= 0) return b[k-1];
	if (b_num <= 0) return a[k-1];
	if (k <= 1) return min(a[0], b[0]);

	if (b[b_num/2] >= a[a_num/2]) {
	    if ((a_num/2 +1 + b_num/2) >= k)
		return getMedian(a, a_num, b, b_num/2, k);
	    else
		return getMedian(a+a_num/2+1, a_num-(a_num/2+1), b, b_num, k-(a_num/2+1));
	}
	else {
	    if ((b_num/2+1+a_num/2) >= k)
		return getMedian(a, a_num/2, b, b_num, k);
	    else
		return getMedian(a, a_num, b+b_num/2+1, b_num-(b_num/2+1), k-(b_num/2+1));
	}
    }
};
