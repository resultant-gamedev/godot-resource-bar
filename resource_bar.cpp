/* resource_bar.cpp */

#include "resource_bar.h"

void ResourceBar::increase(int amount)
{
	currResource += amount;
	if (currResource > maxResource) { currResource = maxResource; }
}

void ResourceBar::decrease(int amount)
{
	currResource -= amount;
	if (currResource > 0) { currResource = 0; }
}

int ResourceBar::get_max() const
{
    return maxResource;
}

int ResourceBar::get_current() const
{
    return currResource;
}

void ResourceBar::set_max(int value)
{
	maxResource = value;
}

void ResourceBar::set_current(int value)
{
	currResource = value;
}

void ResourceBar::_bind_methods()
{
    ObjectTypeDB::bind_method("increase",&ResourceBar::increase);
    ObjectTypeDB::bind_method("decrease",&ResourceBar::decrease);
    ObjectTypeDB::bind_method("get_max",&ResourceBar::get_max);
    ObjectTypeDB::bind_method("get_current",&ResourceBar::get_current);
    ObjectTypeDB::bind_method("set_max",&ResourceBar::set_max);
    ObjectTypeDB::bind_method("set_current",&ResourceBar::set_current);
}

ResourceBar::ResourceBar()
{
    maxResource = 100;
	currResource = 100;
}
