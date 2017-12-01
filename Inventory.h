#include <string>

class Inventory{
  private:
    std::string inventoryDescription;
    int[] inventoryItemIDs
    std::string [] inventoryItemNames;
    std::string [] inventoryItemDescriptions;

  public:
    int inventoryObjects;
    Inventory();
    use(std::string a); // for using tools such as keys for doors or a lever for a puzle
    examine(std::string a); // to display a description for more details on the inventory item
}
