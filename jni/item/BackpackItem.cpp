#include "BackpackItem.h"

BackpackItem::BackpackItem(int id): Item(id) {
	this->setNameID("Backpack");
	this->setIcon("apple", 0);
	Item::items[349] = this;
};

/*ItemInstance* BackpackItem::use(ItemInstance* i, Player* p) {
	return i;
};*/