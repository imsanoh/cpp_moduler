#include <iostream>
#include <fstream>
#include <string>

int main()
{
	// std::string sentence = "I like coding";
	// std::string find_str = "coding";
	// std::string replace_str = "history";

	// sentence.replace(sentence.find(find_str), find_str.length(), replace_str);

	// std::cout << sentence << std::endl;

	// std::string sentence = "I like coding";
	// std::string find_str = "coding";
	// std::string replace_str = "history";

	std::string first_name = "ha";
	std::string last_name = "san oh";

	std::cout << "first_name 의 길이: " << first_name.length() << std::endl;
	std::cout << "last_name 의 길이 : " << last_name.length() << std::endl;
/*************************************************************************/
	std::string a = "0123456789abcdefghij";
	// count 가 npos 이므로 pos 부터 문자열 끝까지 리턴한다.
	std::string sub1 = a.substr(10);
	std::cout << sub1 << '\n';

	// pos 와 pos + count 모두 문자열 범위 안이므로, 해당하는 부분 문자열을
	// 리턴한다.
	std::string sub2 = a.substr(5, 3);
	std::cout << sub2 << '\n';

	// pos 는 문자열 범위 안이지만, pos+count 는 밖이므로, pos 부터 문자열 끝까지
	// 리턴한다.
	std::string sub4 = a.substr(a.size() - 3, 50);
	std::cout << sub4 << '\n';

	try {
	// pos 가 문자열 범위 밖이므로 예외를 발생시킴.
	std::string sub5 = a.substr(a.size() + 3, 50);
	std::cout << sub5 << '\n';
	} catch (const std::out_of_range& e) {
	std::cout << "pos exceeds string size\n";
	}

	return 0;
}

//string::find(),substr, length

