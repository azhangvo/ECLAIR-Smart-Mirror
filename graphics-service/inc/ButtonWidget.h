//
// Created by endian on 9/12/22.
//

#ifndef BUTTON_WIDGET
#define BUTTON_WIDGET

#include <raylib.h>

#include "Widget.h"
#include "Constants.h"


class ButtonWidget : public Widget {
public:
    ButtonWidget(uint32_t x, uint32_t y, uint32_t w, uint32_t h, string n) : Widget(x, y, w, h, n) {}

    void draw();
};


#endif //BUTTON_WIDGET
