#include "utils.cpp"

Text::Text() {

}

Text::Text(const std::string& text) {
	this->words = split(text);
}

std::vector<std::string> Text::getWords(int i, int j) const {
	if(i == -1 && j == -1) {
		return this->words;
	}

	std::vector<std::string> result;

	assert(i>= 0 && j <= this->words.size());

	while(i < j) {

		result.push_back(this->words[i]);
		i++;
	}

	return result;
}


std::vector<std::string> Text::Union(const Text& other) const {
	std::vector<std::string> result;

	std::unordered_set<std::string> table;

	for(int i = 0; i < this->words.size(); i++) {
		table.insert(this->words[i]);
	}

	for(int i = 0; i < other.getWords().size(); i++) {
		table.insert(other.getWords()[i]);
	}

	for(std::unordered_set<std::string>::const_iterator it = table.begin(); it != table.end(); it++) {
		result.push_back(*it);
	}

	return result;
}

std::vector<std::string> Text::Intersection(const Text& other) const {
	std::unordered_set<std::string> table;
	std::vector<std::string> result;

	for(int i = 0; i < this->words.size(); i++) {
		table.insert(this->words[i]);
	}

	for(int i = 0; i < other.getWords().size(); i++) {
		if(table.find(other.getWords()[i]) != table.end()) {
			result.push_back(other.getWords()[i]);
		}
	}
	



	return result;
}