class Solution {
public:
	int sz, sum;
	vector<int> lol;
	void work(int idx , int xorr){
		if(idx >= sz){
			return;
		}
		xorr ^= lol[idx];
		sum += xorr;
		for(int i = idx; i < sz; ++i){
			work(i + 1, xorr);
		}
	}
    int subsetXORSum(vector<int>& arr) {
      sz = arr.size();
			lol = arr;
			for(int i = 0; i < sz; ++i)
				work(i, 0);
			return sum;
    }
}a;