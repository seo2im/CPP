# $1 directory
# $2 filename
# $3 hitpoint
# $4 energypoint
# 5 level
# 6 meleedamage
# 7 rangedamage
# 8 reduction

if [ ! $1 ] || [ ! $2 ] ; then
        echo "no arg!"
        exit 2
fi

if [ ! -d $1 ]; then
        mkdir $1
fi

echo "#ifndef ${2^^}_HPP
# define ${2^^}_HPP
# include <iostream>
# include <string>
# include <ctime>

class $2
{
	private :
		static const int maxHitPoint = $3;
		static const int maxEnergyPoint = $4;
		int hitPoint;
		int energyPoint;
		int level;
		std::string name;
		int meleeAttackDamage;
		int rangedAttackDamage;
		int armorDamageRuduction;
	public :
		$2(std::string name);
		~$2();
		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
		bool takeDamage(unsigned int amount);
		void beRepaierd(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
		void A1(std::string const &target);
		void A2(std::string const &target);
		void A3(std::string const &target);
		void A4(std::string const &target);
		void A5(std::string const &target);
};

typedef void($2::* semiAttack) (std::string const & target);

#endif
" > $1/$2.hpp

echo "#include \"$2.hpp\"

$2::$2(std::string name)
: hitPoint($2::maxHitPoint), energyPoint($2::maxEnergyPoint), level($5),
meleeAttackDamage($6), rangedAttackDamage($7), armorDamageRuduction($8)
{
	this->name = name;
	std::cout << \"FR4G-TP \" << this->name << \"\`s properties\n\"
	<< \"HP : \" << this->hitPoint << \"(Max : \" << $2::maxHitPoint << \")\n\"
	<< \"Energy : \"   << this->energyPoint << \"(Max : \" << $2::maxEnergyPoint << \")\n\"
	<< \"Each Damage(Melee : \" << this->meleeAttackDamage
	<< \" | Range : \" << this->rangedAttackDamage << \" )\"
	<< \"\nArmor : \" << this->armorDamageRuduction
	<< std::endl;
}

$2::~$2()
{
	std::cout << \"FR4G-TP \" << this->name << \" is Dead\" << std::endl;
}

void $2::rangedAttack(std::string const &target)
{
	std::cout << \"FR4G-TP \" << this->name << \" attacks \" << target 
	<< \" at range, causing \" << this->rangedAttackDamage << \" points of damage!\" << std::endl;
}

void $2::meleeAttack(std::string const &target)
{
	std::cout << \"FR4G-TP \" << this->name << \" attacks \" << target 
	<< \" at melee, causing \" << this->meleeAttackDamage << \" points of damage!\" << std::endl;
}

bool $2::takeDamage(unsigned int amount)
{
	int damage;

	damage = amount - this->armorDamageRuduction;
	if (damage <= 0)
	{
		std::cout << \"FR4G-TP \" << this->name << \" armored!\"<< std::endl;
		return (false);
	}
	else
	{
		this->hitPoint -= damage;
		std::cout << \"FR4G-TP \" << this->name << \" take \" << amount 
		<< \" damaged, HP \" << (this->hitPoint >= 0 ? this->hitPoint : 0) << \" remained!\" << std::endl;
		return (true);
	}
}

void $2::beRepaierd(unsigned int amount)
{
	this->hitPoint += amount;
	this->energyPoint += amount;
	if (this->hitPoint > $2::maxHitPoint)
		this->hitPoint = $2::maxHitPoint;
	if (this->energyPoint > $2::maxEnergyPoint)
		this->energyPoint = $2::maxEnergyPoint;
	std::cout << \"FR4G-TP \" << this->name << \" repaired \" << amount 
	<< \" points , HP \" << this->hitPoint
	<< \" and Energy \" << this->energyPoint << \" remained!\" << std::endl;
}

void $2::vaulthunter_dot_exe(std::string const & target)
{
	semiAttack list[] = {
		&$2::A1,
		&$2::A2,
		&$2::A3,
		&$2::A4,
		&$2::A5
	};
	if (this->energyPoint <= 25)
		this->beRepaierd(25);
	srand(time(NULL));
	(this->*list[rand() % 5])(target);	
}

void $2::A1(std::string const &target)
{
	std::cout << \"A1\n\";
}

void $2::A2(std::string const &target)
{
	std::cout << \"A2\n\";
}

void $2::A3(std::string const &target)
{
	std::cout << \"A3\n\";
}

void $2::A4(std::string const &target)
{
	std::cout << \"A4\n\";
}

void $2::A5(std::string const &target)
{
	std::cout << \"A5\n\";
}
" > $1/$2.cpp

echo "#include \"$2.hpp\"

int main()
{
	$2 *tp = new $2(\"$2\");

	tp->vaulthunter_dot_exe(\"Player\");
	tp->meleeAttack(\"Player\");
	tp->rangedAttack(\"Player\");
	tp->takeDamage(20);
	tp->beRepaierd(50);
	if (tp->takeDamage(200))
		delete tp;
}
" >> $1/main.cpp