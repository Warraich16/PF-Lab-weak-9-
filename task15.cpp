#include <iostream>

bool is_vowel(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
         c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main() {
  char str[100];
  int length = 0;

  std::cout << "Enter a string: ";
  std::cin.getline(str, 100);
  
  for (int i = 0; str[i] != '\0'; i++) {
    length++;
  }
  
  char new_str[length];
  int j = 0;
  
  for (int i = 0; i < length; i++) {
    if (!is_vowel(str[i])) {
      new_str[j++] = str[i];
    }
  }
  
  new_str[j] = '\0';
  
  std::cout << "The new string with all vowels removed is: " << new_str << std::endl;
  
  return 0;
}

