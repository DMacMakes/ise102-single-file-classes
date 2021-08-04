#ifndef MONSTERCARD_HPP_
#define MONSTERCARD_HPP_

class MonsterCard
{
public:

  int hit_points = 0;

  int GetStrikeDamage()
  {
    return _strike_damage;
    // Do some damage
  }

private:
  int _strike_damage = 20;
};

#endif // MONSTERCARD_HPP_
