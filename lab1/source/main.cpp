#define GLM_ENABLE_EXPERIMENTAL

#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

int main()
{
	// Q1
	glm::vec3 p(1.0f, 4.0f, -5.0f);
	glm::vec3 v(5.0f, 1.0f, 4.0f);

	std::cout << "1. " << glm::to_string(p + v) << std::endl;

	// Q2
	glm::vec3 v1(1.0f, 0, 0);
	glm::vec3 v2(0, 1.0f, 0);

	std::cout << "2. " << glm::to_string(v1 + v2) << std::endl;

	// Q3
	glm::vec3 v3(0, 1.0f, 0);
	float len = glm::length(v3);
	v3 = 2.0f * v3;

	std::cout << "3. " << glm::to_string(v3) << std::endl;

	// Q4
	glm::vec3 sp(8.0f, 2.0f, 5.0f);
	glm::vec3 lp(1.0f, -1.0f, 4.0f);
	float l = glm::length(lp - sp);

	std::cout << "4. " << glm::to_string(lp-sp) << std::endl;

	// Q5
	glm::vec3 v4(1.0f, 3.0f, 4.0f);
	glm::vec3 v4_h = glm::normalize(v4);

	std::cout << "5. " << glm::to_string(v4_h) << std::endl;

	// Q6
	glm::vec3 v5(1.0f, -1.0f, 4.0f);
	glm::vec4 v6(v5, 0);

	std::cout << "6. " << glm::to_string(v6) << std::endl;
	std::cout << "6. " << glm::to_string(v6) << std::endl;

	return 0;
}