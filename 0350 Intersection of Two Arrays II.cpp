class Solution {
public:
	vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		int i, j;
		vector<int> rs;
		for (i = 0, j = 0; i < nums1.size() && j < nums2.size(); )
		{
			if (nums1[i] == nums2[j])
			{
				rs.push_back(nums1[i]);
				i++;
				j++;
			}
			if (nums1[i] < nums2[j])
			{
				i++;
			}
			if (nums1[i] > nums2[j])
			{
				j++;
			}
		}
		return rs;
	}
};
