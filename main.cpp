#include <iostream>
#include <fstream>
#include <string>
#include <vector>

// Def func to load file into memory as vec of strings:
std::vector<std::string> load_file(std::string& filename) {

  // Create an instance of ifstream on filename...
  std::ifstream file(filename, std::ios::in);

  // Vector that'll hold the lines of our file:
  std::vector<std::string> lines {};
  
  // Now read it to the var "file" line-by-line:
  std::string line {};
  while (std::getline(file, line)) {
    lines.push_back(line);
  }

  // pass lines back to caller
  return lines;
}

void search_case_sensitive(std::string& filename,
			   std::vector<std::string>& lines,
			   std::string& pattern) {
  // TEMP: search for pattern in each line:
  int line_num = 1;
  for (const std::string& line: lines) {
    // Check if pattern is present:
    if (line.find(pattern) != std::string::npos) {
      std::cout << filename << ": " << line_num << " " << line << '\n';
    }
    line_num ++;
  }
}

int main(int /*argc*/, char *argv[]) {
  // TEMP: accept only two args:
  // ./crep <pattern> <file>
  std::string pattern = argv[1];
  std::string filename = argv[2];

  // We know this'll be a Vec<String> via
  //   results of load_file().
  //
  // QUESTION: When _is_ it ok to use auto?
  auto file_lines = load_file(filename);

  search_case_sensitive(filename, file_lines, pattern);
  
  // Exit successfully
  return 0;
}
