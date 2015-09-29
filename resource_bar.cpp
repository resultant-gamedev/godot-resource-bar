/* resource_bar.cpp */

#include "resource_bar.h"

void ResourceBar::add(int value) {

    count+=value;
}

void ResourceBar::reset() {

    count=0;
}

int ResourceBar::get_total() const {

    return count;
}

void ResourceBar::_bind_methods() {

    ObjectTypeDB::bind_method("add",&ResourceBar::add);
    ObjectTypeDB::bind_method("reset",&ResourceBar::reset);
    ObjectTypeDB::bind_method("get_total",&ResourceBar::get_total);
}

ResourceBar::ResourceBar() {
    count=0;
}
