class Solution {
public:
	TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
		int len = pre.size();
		if (len == 0)
		{
			return NULL;
		}

		TreeNode *root = new TreeNode(pre[0]);
		if (len == 1)
		{
			return root;
		}

		int left_num = 0;
		int right_num = 0;
		for (int i = 0; i < post.size(); i++)
		{
			if (post[i] == pre[1])
			{
				left_num = i + 1;
				break;
			}
		}

		right_num = len - 1 - left_num;

		vector<int> prel, postl;
		vector<int> prer, postr;

		prel.insert(prel.begin(), pre.begin() + 1, pre.begin() + left_num + 1);
		prer.insert(prer.begin(), pre.begin() + left_num + 1,pre.end());

		postl.insert(postl.begin(),post.begin(),post.begin() + left_num);
		postr.insert(postr.begin(),post.begin() + left_num,post.end() - 1);

		root->left = constructFromPrePost(prel, postl);
		root->right = constructFromPrePost(prer,postr);
			
		return root;
		
	}
};
