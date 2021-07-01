#include "isogram.h"
#include <set>
#include <algorithm>

namespace isogram {

	bool is_isogram(string const& w)
	{
		string word = w;
		auto end = std::remove(word.begin(), word.end(), '-');
		word.erase(std::remove(word.begin(), end, ' '), word.end());
		set<char> set1;
		std::for_each(word.begin(), word.end(), [&](char &c) {set1.insert(::tolower(c));});
		return word.length() == set1.size();
	}
}  // namespace isogram
