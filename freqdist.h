class FreqDist {

private:
  std::map<std::string, long long> table;
public:
  FreqDist() {}
  FreqDist(const std::vector<std::string>& words);
  ~FreqDist() {}
  void display() const;
  void increment(const std::string& word);
  void decrement(const std::string& word);
  std::string max() const;
  std::string min() const;

  std::vector<std::pair<std::string, long long>> items() const;
  std::vector<std::string> words(bool sorted) const;

  long long count(const std::string& word);

  friend std::ostream& operator<<(std::ostream& os, const FreqDist& freq);

  long long int& operator[](const std::string& word);

  long long int camulative_frequencies(const std::vector<std::string>& words);

  std::vector<std::string> hapexes() const;

  std::vector<std::string> wordsByCount(const long long int& count);




};

