#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}
TacticalMarine::TacticalMarine(TacticalMarine const &other)
{
	*this = other;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}
TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh..." << std::endl;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
}
void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}
void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chiainsword *" << std::endl;
}
ISpaceMarine *TacticalMarine::clone(void) const
{
	TacticalMarine *copy = new TacticalMarine(*this);
	return (copy);
}
