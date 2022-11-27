// leetcode link: https://leetcode.com/problems/sort-colors/

int sort_0_1_2(vector<int>& nums) {
	int n = nums.size();
	int l = 0, m = 0, r = n-1;
	/*
	 [2,0,2,1,1,0]

	 - if middle element is equal to 0, swap left & mid element move left and mid pointer one step ahead
	 - if mid element is equal to 1, move mid pointer one step ahead
	 - if mid element is equal to 2, swap right & mid element & move right point one step behind 


	*/
	while(m <= r) {
		if(nums[m] == 0) {
			swap(nums[l], nums[m]);
			l++,m++;
		}
		else if(nums[m] == 1) {
			m++;
		}
		else{
			swap(nums[m], nums[r]);
			r--;
		}
	} 
}