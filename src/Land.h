#include <string>

class Land {
	public:
		Land();
		~Land();
		char getLand();

	private:
		const char Land = LAND;
		const char Water = WATER;
		const char Air = AIR;
};