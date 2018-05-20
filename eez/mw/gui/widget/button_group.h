/*
 * EEZ Middleware
 * Copyright (C) 2018-present, Envox d.o.o.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#pragma once

namespace eez {
namespace mw {
namespace gui {

#ifdef EEZ_PLATFORM_ARDUINO_DUE
#pragma pack(push, 1)
#endif

struct ButtonGroupWidgetState {
    WidgetState genericState;
    const data::Value *labels;
};

#ifdef EEZ_PLATFORM_ARDUINO_DUE
#pragma pack(pop)
#endif

void ButtonGroupWidget_draw(int pageId, const WidgetCursor &widgetCursor);

void ButtonGroupWidget_onTouchDown(const WidgetCursor &widgetCursor, int xTouch, int yTouch);

}
}
} // namespace eez::mw::gui