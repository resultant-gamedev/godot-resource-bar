/* register_types.cpp */

#include "register_types.h"
#include "object_type_db.h"
#include "resource_bar.h"

void register_resourcebar_types() {

        ObjectTypeDB::register_type<ResourceBar>();
}

void unregister_resourcebar_types() {
   //nothing to do here
}
