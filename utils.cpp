std::ostream& operator<<(std::ostream& out, const std::vector<std::string>& words) {
	out << "[";

	for(int i = 0; i < words.size(); i++) {
		out << words[i];

		if(i != words.size()-1)  {
			out << ", ";
		}
	}

	out << "]";
}