class Ngrams {
private:
	std::vector<std::vector<std::string>> Ngrams2D(const std::vector<std::string>& words, int n = 2) {
		std::vector<std::vector<std::string>> ans;

		if(n > words.size())  {
			return ans;
		}

		for(int i = 0; i < words.size() - n + 1; i++) {
			std::vector<std::string> vec;
			for(int j = 0; j < n; j++) {
				vec.push_back(words[i+j]);
			}

			ans.push_back(vec);
		}

		return ans;
	}

public:
	std::vector<std::vector<std::string>> Bigrams(const std::vector<std::string>& words) {
		return this->Ngrams2D(words, 2);
	}

	std::vector<std::vector<std::string>> Trigrams(const std::vector<std::string>& words) {
		return this->Ngrams2D(words, 3);
	}

	std::vector<std::vector<std::string>> CustonNgrams(const std::vector<std::string>& words, int n) {
		return this->Ngrams2D(words, n);
	}


};