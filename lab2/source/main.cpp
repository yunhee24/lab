#define GLM_ENABLE_EXPERIMENTAL
#define GLM_SWIZZLE

#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>
#include <glm/gtc/constants.hpp>

int main()
{
	const double DEGREES_TO_RADIANS = glm::pi<float>() / 180.0;
	const double RADIANS_TO_DEGREES = 180.0 / glm::pi<float>();

	glm::vec3 v(1.0f, 2.0f, -1.0f);
	glm::vec3 u(0, 1.0f, 0);

	float l = glm::dot(v, u);
	glm::vec3 b = u * l;
	glm::vec3 a = v - b;

	std::cout << "a: " << to_string(a) << std::endl;
	std::cout << "b: " << to_string(b) << std::endl;

	return 0;
}