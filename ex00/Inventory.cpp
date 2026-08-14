#include "Inventory.hpp"

#include <string>

void Inventory::add(const std::string& item)
{
	m_items.emplace_back(item);
}

void Inventory::remove(const std::string& item)
{
	std::string dummy = item;
}

bool Inventory::has(const std::string& item) const
{
	std::string dummy = item;
	return false;
}

int Inventory::count() const
{
	return m_items.size();
}
