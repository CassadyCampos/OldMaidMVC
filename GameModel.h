#include <vector>
#include "PlayerModel.h"

using namespace std;
class iGameModel
{
	public:
		virtual ~iGameModel() {};
		
	private:
		vector<PlayerModel> players;
};

