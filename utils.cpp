/*std::ostream& operator<<(std::ostream& out, const std::vector<std::string>& words) {
	out << "[";

	for(int i = 0; i < words.size(); i++) {
		out << words[i];

		if(i != words.size()-1)  {
			out << ", ";
		}
	}

	out << "]";
}
*/

/*
std::vector<std::string> split(const std::string& text, char tokenizer = ' ') {
  std::vector<std::string> vec;


  std::string str = "";
  int i = 0;
  for(;i < text.size(); i++) {
    if(text[i] == tokenizer) {
      if(str != " " && str.size() > 0) 
        vec.push_back(str);
      str = "";
    } else {
      str+=text[i];
    }
  }

  if(str != " " && str.size() > 0)
    vec.push_back(str);

  return vec;
}
*/

/*
class Tokenize  {
private:
  std::vector<std::string> words;

public:
  Tokenize() {}
  ~Tokenize() {}

  std::vector<std::string> WordTokenize(const std::string& text) {
    return split(text, ' ');
  }

  std::vector<std::string> LineTokenize(const std::string& text) {
    return split(text, '\n');
  }

  std::vector<std::string> TabTokenize(const std::string& text) {
    return split(text, '\t');
  }

  std::vector<std::string> CharTokenize(const std::string& text, char delimiter = ' ') {
    return split(text, delimiter);
  }

}; 

*/


