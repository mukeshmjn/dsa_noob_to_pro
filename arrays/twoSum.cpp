int twoSum(vector<int>& nums, int target) {
	/*
		 nums = [2,7,11,15], target = 9
		 2 + 7 = 9
		 I will use a map
		 0->n-1
		 at idx->0	target=9-2=7 exists in map? no? Store 2 in map as key & idx as value.
		 at idx->1  target = 9-7=2 exists in map? yes? return idx & map target - key idx value.
	*/
			//Code	
	int n = nums.size(); // size of array
	map<int,int> mp; //declared a hashmap
	for(int i = 0;i < n-1; i++){
		if(mp.count(target-nums[i])) return {i,mp[target-nums[i]]};
		else mp[nums[i]] = i;
	}
	return "not found";
}