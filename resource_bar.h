/* resource_bar.h */
#ifndef RESOURCE_BAR_H
#define RESOURCE_BAR_H

#include "reference.h"

class ResourceBar : public Reference {
    OBJ_TYPE(ResourceBar,Reference);

    int count;

protected:
    static void _bind_methods();
public:

    void add(int value);
    void reset();
    int get_total() const;

    ResourceBar();
};

#endif
