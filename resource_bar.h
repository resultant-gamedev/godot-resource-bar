/* resource_bar.h */
#ifndef RESOURCE_BAR_H
#define RESOURCE_BAR_H

#include "scene/2d/node_2d.h"

class ResourceBar : public Node2D {
    OBJ_TYPE(ResourceBar, Node2D);

	// Data members
	int maxResource;
	int minResource;
	int currResource;

protected:
    static void _bind_methods();
public:

    void increase(int amount);
	void decrease(int amount);
    int get_max() const;
    int get_min() const;
    int get_current() const;
	void set_max(int value);
	void set_min(int value);
	void set_current(int value);

    ResourceBar();
};

#endif
