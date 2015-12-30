bool isUnique(const std::vector<std::string>& vec) {
	std::unordered_set<std::string> table;

	for(int i= 0; i< vec.size(); i++) {
		if(table.find(vec[i]) != table.end()) 
			return false;
		table.insert(vec[i]);

	}

	return true;
}


std::vector<std::string> Unique(std::vector<std::string>& vec) {
	std::unordered_set<std::string> table;
	for(int i = 0; i < vec.size(); i++) 
		table.insert(vec[i]);

	std::vector<std::string> result;

	for(int i = 0; i < vec.size(); i++) {
		if(table.find(vec[i]) != table.end()) {
			result.push_back(vec[i]);
			table.erase(vec[i]);
		}
	}

	return result;
}