/*
* EEZ PSU Firmware
* Copyright (C) 2015-present, Envox d.o.o.
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
* along with this program.  If not, see http://www.gnu.org/licenses.
*/

#pragma once

namespace eez {
namespace psu {
namespace gui {

enum DataEnum {
    DATA_ID_NONE,
    DATA_ID_CHANNELS,
    DATA_ID_CHANNEL_OK,
    DATA_ID_OUTPUT_STATE,
    DATA_ID_OUTPUT_MODE,
    DATA_ID_MON_VALUE,
    DATA_ID_VOLT,
    DATA_ID_CURR,
    DATA_ID_LRIP,
    DATA_ID_OVP,
    DATA_ID_OCP,
    DATA_ID_OPP,
    DATA_ID_OTP,
    DATA_ID_OTP_CH,
    DATA_ID_DP,
    DATA_ID_ALERT_MESSAGE,
    DATA_ID_EDIT_VALUE,
    DATA_ID_EDIT_UNIT,
    DATA_ID_EDIT_INFO,
    DATA_ID_EDIT_MODE_INTERACTIVE_MODE_SELECTOR,
    DATA_ID_EDIT_STEPS,
    DATA_ID_MODEL_INFO,
    DATA_ID_FIRMWARE_INFO,
    DATA_ID_SELF_TEST_RESULT,
    DATA_ID_CALIBRATION_PASSWORD_STATUS,
    DATA_ID_CHANNEL_LABEL,
    DATA_ID_CHANNEL_SHORT_LABEL,
    DATA_ID_CHANNEL_CALIBRATION_STATUS,
    DATA_ID_CHANNEL_CALIBRATION_STATE,
    DATA_ID_CHANNEL_CALIBRATION_DATE,
    DATA_ID_CHANNEL_CALIBRATION_REMARK,
    DATA_ID_CHANNEL_CALIBRATION_PARAMS_ENABLED,
    DATA_ID_CHANNEL_CALIBRATION_STEP_NUM,
    DATA_ID_CHANNEL_CALIBRATION_STEP_STATUS,
    DATA_ID_CHANNEL_CALIBRATION_STEP_VALUE,
    DATA_ID_CHANNEL_CALIBRATION_STEP_PREV_ENABLED,
    DATA_ID_CHANNEL_CALIBRATION_STEP_NEXT_ENABLED,
    DATA_ID_KEYPAD_TEXT,
    DATA_ID_KEYPAD_CAPS,
    DATA_ID_KEYPAD_MAX_ENABLED,
    DATA_ID_KEYPAD_DEF_ENABLED,
    DATA_ID_CAL_CH_U_MIN,
    DATA_ID_CAL_CH_U_MID,
    DATA_ID_CAL_CH_U_MAX,
    DATA_ID_CAL_CH_I_MIN,
    DATA_ID_CAL_CH_I_MID,
    DATA_ID_CAL_CH_I_MAX,
    DATA_ID_CHANNEL_PROTECTION_OVP_STATE,
    DATA_ID_CHANNEL_PROTECTION_OVP_LEVEL,
    DATA_ID_CHANNEL_PROTECTION_OVP_DELAY,
    DATA_ID_CHANNEL_PROTECTION_OVP_LIMIT,
    DATA_ID_CHANNEL_PROTECTION_OCP_STATE,
    DATA_ID_CHANNEL_PROTECTION_OCP_DELAY,
    DATA_ID_CHANNEL_PROTECTION_OCP_LIMIT,
    DATA_ID_CHANNEL_PROTECTION_OPP_STATE,
    DATA_ID_CHANNEL_PROTECTION_OPP_LEVEL,
    DATA_ID_CHANNEL_PROTECTION_OPP_DELAY,
    DATA_ID_CHANNEL_PROTECTION_OPP_LIMIT,
    DATA_ID_CHANNEL_PROTECTION_OTP_INSTALLED,
    DATA_ID_CHANNEL_PROTECTION_OTP_STATE,
    DATA_ID_CHANNEL_PROTECTION_OTP_LEVEL,
    DATA_ID_CHANNEL_PROTECTION_OTP_DELAY
};

enum FontsEnum {
    FONT_ID_NONE,
    FONT_ID_SMALL,
    FONT_ID_MEDIUM,
    FONT_ID_LARGE,
    FONT_ID_ICONS,
    FONT_ID_LARGE_LANDSCAPE
};

enum BitmapsEnum {
    BITMAP_ID_NONE,
    BITMAP_ID_LOGO
};

enum StylesEnum {
    STYLE_ID_DEFAULT,
    STYLE_ID_DEFAULT_EDIT,
    STYLE_ID_DEFAULT_EDIT_INVERSE,
    STYLE_ID_DEFAULT_INVERSE,
    STYLE_ID_DEFAULT_DISABLED_S_LEFT,
    STYLE_ID_DEFAULT_S,
    STYLE_ID_DEFAULT_ACTIVE_S,
    STYLE_ID_DEFAULT_L,
    STYLE_ID_DEFAULT_ICONS,
    STYLE_ID_PROT_INDICATOR_S,
    STYLE_ID_MON_VALUE_L,
    STYLE_ID_MON_VALUE_L_UR,
    STYLE_ID_MON_VALUE,
    STYLE_ID_MON_VALUE_UR,
    STYLE_ID_CHANNEL_OFF_L,
    STYLE_ID_CHANNEL_ERROR,
    STYLE_ID_CHANNEL_OFF,
    STYLE_ID_PROT_INDICATOR_SET_S,
    STYLE_ID_PROT_INDICATOR_TRIP_S,
    STYLE_ID_MENU_S,
    STYLE_ID_TAB_PAGE,
    STYLE_ID_TAB_PAGE_SELECTED,
    STYLE_ID_BOTTOM_BUTTON,
    STYLE_ID_BOTTOM_BUTTON_DISABLED,
    STYLE_ID_BOTTOM_BUTTON_BACKGROUND,
    STYLE_ID_KEY,
    STYLE_ID_KEY_DISABLED,
    STYLE_ID_KEY_SPEC,
    STYLE_ID_KEY_SPEC_ICONS,
    STYLE_ID_KEY_ICONS,
    STYLE_ID_EDIT_INFO_S,
    STYLE_ID_EDIT_VALUE,
    STYLE_ID_EDIT_VALUE_LEFT,
    STYLE_ID_EDIT_VALUE_L,
    STYLE_ID_EDIT_VALUE_UR,
    STYLE_ID_EDIT_VALUE_ACTIVE,
    STYLE_ID_EDIT_VALUE_ACTIVE_LEFT,
    STYLE_ID_EDIT_VALUE_ACTIVE_S_LEFT,
    STYLE_ID_EDIT_VALUE_ACTIVE_S_RIGHT,
    STYLE_ID_EDIT_VALUE_S_LEFT,
    STYLE_ID_EDIT_VALUE_S_RIGHT,
    STYLE_ID_EDIT_VALUE_UR_S_RIGHT,
    STYLE_ID_NON_INTERACTIVE_BUTTON_S,
    STYLE_ID_EDIT_MODE_SLIDER_SCALE,
    STYLE_ID_EDIT_MODE_STEP_VERTICAL_SLIDER,
    STYLE_ID_TOP_BAR_S,
    STYLE_ID_MON_VALUE_LANDSCAPE_L_RIGHT,
    STYLE_ID_CHANNEL_OFF_LANDSCAPE,
    STYLE_ID_MON_VALUE_UR_LANDSCAPE_L_RIGHT,
    STYLE_ID_EDIT_S,
    STYLE_ID_BOTTOM_BUTTON_TEXTUAL,
    STYLE_ID_ERROR_ALERT,
    STYLE_ID_ERROR_ALERT_BUTTON,
    STYLE_ID_INFO_ALERT,
    STYLE_ID_INFO_ALERT_BUTTON,
    STYLE_ID_VALUE,
    STYLE_ID_VALUE_S,
    STYLE_ID_VALUE_L
};

enum PagesEnum {
    PAGE_ID_WELCOME,
    PAGE_ID_ENTERING_STANDBY,
    PAGE_ID_STANDBY,
    PAGE_ID_SELF_TEST_RESULT,
    PAGE_ID_EDIT_MODE_SLIDER,
    PAGE_ID_EDIT_MODE_STEP,
    PAGE_ID_EDIT_MODE_KEYPAD,
    PAGE_ID_INFO_ALERT,
    PAGE_ID_ERROR_ALERT,
    PAGE_ID_YES_NO,
    PAGE_ID_MAIN,
    PAGE_ID_SYS_PROFILES,
    PAGE_ID_SYS_INFO,
    PAGE_ID_MAIN_HELP,
    PAGE_ID_KEYPAD,
    PAGE_ID_NUMERIC_KEYPAD,
    PAGE_ID_CH_SETTINGS_PROT,
    PAGE_ID_CH_SETTINGS_PROT_CLEAR,
    PAGE_ID_CH_SETTINGS_PROT_OVP,
    PAGE_ID_CH_SETTINGS_PROT_OCP,
    PAGE_ID_CH_SETTINGS_PROT_OPP,
    PAGE_ID_CH_SETTINGS_PROT_OTP,
    PAGE_ID_CH_SETTINGS_ADV,
    PAGE_ID_CH_SETTINGS_ADV_LRIPPLE,
    PAGE_ID_CH_SETTINGS_ADV_LIMITS,
    PAGE_ID_CH_SETTINGS_ADV_RSENSE,
    PAGE_ID_CH_SETTINGS_ADV_RPROG,
    PAGE_ID_CH_SETTINGS_DISP,
    PAGE_ID_CH_SETTINGS_INFO,
    PAGE_ID_SYS_SETTINGS,
    PAGE_ID_SYS_SETTINGS2,
    PAGE_ID_SYS_SETTINGS_CAL,
    PAGE_ID_SYS_SETTINGS_CAL_CH,
    PAGE_ID_SYS_SETTINGS_CAL_CH_WIZ_STEP,
    PAGE_ID_SYS_SETTINGS_CAL_CH_WIZ_FINISH,
    PAGE_ID_SYS_SETTINGS_SOUND,
    PAGE_ID_SYS_SETTINGS_DISPLAY,
    PAGE_ID_SYS_SETTINGS_DIAG
};

extern const uint8_t *fonts[];

struct Bitmap {
    uint16_t w;
    uint16_t h;
    const uint8_t *pixels PROGMEM;
};

extern Bitmap bitmaps[];

extern const uint8_t document[];

}
}
} // namespace eez::psu::gui
