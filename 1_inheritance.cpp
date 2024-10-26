#include <iostream>

using namespace std;

class Beaver
{
public:
  Beaver()
  {
    cout << "Creating a new beaver!" << endl;
  }
  void eat()
  {
    cout << "Chew chew chew... chewing on some wood..." << endl;
  }

  void build_dam()
  {
    cout << "Collecting sticks... building a dam... flooding your infrastructure...";
  }

  void description()
  {
    cout << "I am a fat rodent with a rudder for a tail." << endl;
  }
};

class Duck
{
public:
  Duck()
  {
    cout << "Creating a new duck!" << endl;
  }
  void fly()
  {
    cout << "Soaring like an eagle... er... I mean a duck..." << endl;
  }

  void description()
  {
    cout << "I am essentially a buoyant pigeon." << endl;
  }
};

class Platypus : public Beaver, public Duck
{
public:
  Platypus()
  {
    cout << "Creating a new platypus!" << endl;
  }

  void description() // What happens if I remove this?
  {
    cout << "I'm a semi-aquatic, egg-laying mammal of action!" << endl;
  }
};

int main()
{
  Beaver beaver;
  beaver.eat();
  beaver.build_dam();
  beaver.description();

  cout << "~~~~~~~~~~~~" << endl;

  Duck duck;
  duck.fly();
  duck.description();

  cout << "~~~~~~~~~~~~" << endl;

  Platypus platypus;
  platypus.eat();
  platypus.build_dam();
  platypus.fly();

  cout << "~~~~~~~~~~~~" << endl;

  platypus.description();
  platypus.Beaver::description();
  platypus.Duck::description();

  return 0;
}
