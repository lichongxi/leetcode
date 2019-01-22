int lengthOfLongestSubstring(string s) {
	unordered_map<char, int> sub_map;
	int max_len = 0;
	for (int j = 0, i = 0; j < s.length(); j++) {
		if (sub_map.find(s[j]) != sub_map.end())
		{
			i = max(sub_map[s[j]], i);
		}
		max_len = max(max_len, j - i + 1);
		sub_map[s[j]] = j + 1;
	}
	return max_len;
}