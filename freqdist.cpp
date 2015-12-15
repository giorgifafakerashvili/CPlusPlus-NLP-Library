

FreqDist::FreqDist(const std::vector<std::string>& words) {
  for(int i = 0; i < words.size(); i++) {
    if(table[words[i]]) 
      table[words[i]]++;
    else 
      table[words[i]] = 1;
  }
}


void FreqDist::display() const {
  for(std::map<std::string, long long>::const_iterator it = table.begin(); it != table.end(); it++) {
    std::cout << it->first << "\t" << it->second << std::endl;
  }
}

void FreqDist::increment(const std::string& word) {
  long long freq = table[word];
  if(freq)
    table[word] = freq + 1;
  else
    table[word] = 1;
}

void FreqDist::decrement(const std::string& word) {
  long long freq = table[word];
  if(freq)
    table[word] = freq - 1;
}


std::string FreqDist::max() const {
  long long max_value = 0;
  std::string max_string;
  for(std::map<std::string, long long>::const_iterator it = table.begin(); it != table.end(); it++) {
    if(it->second > max_value) {
      max_string = it->first;
      max_value = it->second;
    }
  }
  return max_string;
}

std::string FreqDist::min() const {
  long long min_value = 1000000000000;
  std::string min_string = "";
  for(std::map<std::string, long long>::const_iterator it = table.begin(); it != table.end(); it++) {
    if(it->second  < min_value) {
      min_string = it->first;
      min_value = it->second;
    }
  }
  return min_string;
}

bool comp(const std::pair<std::string, long long>& a, const std::pair<std::string, long long>& b) {
  return (a.second > b.second);
}


std::vector<std::pair<std::string, long long>> FreqDist::items() const {
  std::vector<std::pair<std::string, long long>> vec;

  for(std::map<std::string, long long>::const_iterator it = table.begin(); it != table.end(); it++) {
    std::pair<std::string, long long> pair = {it->first, it->second};
    vec.push_back(pair);
  }

  sort(vec.begin(), vec.end(), comp);
  return vec;
}

std::vector<std::string> FreqDist::words(bool sorted = true) const {
  std::vector<std::string> vec;

  
  for(std::map<std::string, long long>::const_iterator it = table.begin(); it != table.end(); it++) {
    vec.push_back(it->first);
  }

  return vec;
}


long long FreqDist::count(const std::string& word)  {
  long long count = table[word];
  if(count) 
    return count;
  return 0;
}

std::ostream& operator<<(std::ostream& os, const FreqDist& freq) {
  for(std::map<std::string, long long>::const_iterator it =  freq.table.begin(); it != freq.table.end(); it++) {
    os << it->first << "\t" << it->second << "\n";

  }
  return os;
}


long long int& FreqDist::operator[](const std::string& word) {
  return this->table[word];
}


