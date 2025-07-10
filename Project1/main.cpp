import std;

int main() {
	int answer { 42 };

	std::println("The answer is: {}", answer);

	// This will reserve 12-places, and for empty ones set !
	std::println("The answer to {} is {:!^12b}", "the ultimate question", answer);

	// std::println(answer); // This will give compiler error

}