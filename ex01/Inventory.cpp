#include "Inventory.hpp"

#include <string>

void Inventory::add(const std::string& item)
{
	m_items.emplace_back(item);
}

void Inventory::remove(const std::string& item)
{
	for (auto it = m_items.begin(); it != m_items.end();)
	{
		if (*it == item)
			it = m_items.erase(it);
		else
			++it;
	}
}

bool Inventory::has(const std::string& item) const
{
	for (const auto& inventoryItem : m_items)
	{
		if (item == inventoryItem)
			return true;
	}

	return false;
}

int Inventory::count() const
{
	return m_items.size();
}
