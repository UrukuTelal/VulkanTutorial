#include "first_app.hpp"

//std
#include <iostream>
#include <stdexcept>
#include <cstdlib>

int main() {
	lve::FirstApp app{};

	try {
		app.run();
	}
	catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
		return EXIT_FAILURE;
	}
return EXIT_SUCCESS;
}