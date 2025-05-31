// based on this https://stackoverflow.com/a/17223443

#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>
#include <string>

int main() {
	auto now = std::chrono::system_clock::now();
	std::time_t in_time_t = std::chrono::system_clock::to_time_t(now);

	std::cout << std::put_time(std::localtime(&in_time_t), "24 Hour format: %Y-%m-%d %H:%M:%S\n");
	std::cout << std::put_time(std::localtime(&in_time_t), "12 Hour format: %Y-%m-%d %I:%M:%S %p\n");

	return 0;
}