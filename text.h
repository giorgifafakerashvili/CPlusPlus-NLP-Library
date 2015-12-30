

class Text {
private:
	std::vector<std::string> words;
public:
	Text();
	Text(const std::string& text);

	std::vector<std::string> getWords(int i = -1, int j = -1) const;


	std::vector<std::string> Union(const Text& other) const;
	std::vector<std::string> Intersection(const Text& other) const;
	
};