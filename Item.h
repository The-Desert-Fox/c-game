#include<string>

class Item{
  private:
    int id;
    std::string type;
    std::string description;

  public:
    Item();
    Item(int n_id, std::string n_type, std::string n_description);
    void use(); // Pass reference to inventory vector
    void examime(); // Read out description
};
