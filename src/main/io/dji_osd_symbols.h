/* @file max7456_symbols.h
 * @brief max7456 symbols for the mwosd font set
 *
 * @author Nathan Tsoi nathan@vertile.com
 *
 * Copyright (C) 2016 Nathan Tsoi
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#pragma once

//Misc
#define DJI_SYM_NONE                    0x00 // NONE
#define DJI_SYM_END_OF_FONT             0xFF // End of font
#define DJI_SYM_BLANK                   0x20 // Blank space
#define DJI_SYM_HYPHEN                  0x2D // Hyphen symbol
#define DJI_SYM_BBLOG                   0x10 // Black Box Log symbol
#define DJI_SYM_RPM                     0x12 // RPM symbol
#define DJI_SYM_ROLL                    0x14 // ROLL symbol
#define DJI_SYM_PITCH                   0x15 // PITCH symbol
#define DJI_SYM_TEMP                    0x7A // TEMP symbol
#define DJI_SYM_MAX                     0x24 // MAX symbol

// Glide calculations
#define DJI_SYM_GLIDESLOPE              0x2F // Forward slash symbol looks like slope
#define DJI_SYM_GLIDE_DIST              0x24 // MAX Symbol for max glide distance
#define DJI_SYM_GLIDE_MINS              0x9C // Fly Time Symbol

// GPS and navigation
#define DJI_SYM_HOME                    0x05 // Home house symbol
#define DJI_SYM_HOMEFLAG                0x11 // Home pin symbol
#define DJI_SYM_LAT                     0x89 // LAT symbol
#define DJI_SYM_LON                     0x98 // LON symbol
#define DJI_SYM_ALT                     0x7F // ALT symbol
#define DJI_SYM_TOTAL                   0x71 // Circle with arrow
#define DJI_SYM_WAYPOINT                0x40 // @ Symbol
#define DJI_SYM_HEADING                 0x70 // Betaflight speed symbol (looks like compass symbol)
#define DJI_SYM_HEADING_DEGREE          0x08 // High circle looks like degrees icon

// RSSI
#define DJI_SYM_RSSI                    0x01 // RSSI bars
#define DJI_SYM_LQ                      0x7B // RSSI bars with LQ on top

// Throttle Position (%)
#define DJI_SYM_THR                     0x04 // Throttle symbol

// Unit Icons (Metric)
#define DJI_SYM_M                       0x0C // Meters
#define DJI_SYM_KM                      0x7D // Kilometers
#define DJI_SYM_C                       0x0E // Celsius

// Unit Icons (Imperial)
#define DJI_SYM_FT                      0x0F // Feet
#define DJI_SYM_MI                      0x7E // Miles
#define DJI_SYM_F                       0x0D // Farenheit

// Heading Graphics
#define DJI_SYM_HEADING_N               0x18
#define DJI_SYM_HEADING_S               0x19
#define DJI_SYM_HEADING_E               0x1A
#define DJI_SYM_HEADING_W               0x1B
#define DJI_SYM_HEADING_DIVIDED_LINE    0x1C
#define DJI_SYM_HEADING_LINE            0x1D

// AH Center screen Graphics
#define DJI_SYM_CROSSHAIR_LEFT          0x72
#define DJI_SYM_CROSSHAIR_CENTRE        0x73
#define DJI_SYM_CROSSHAIR_RIGHT         0x74
#define DJI_SYM_AH_RIGHT                0x02
#define DJI_SYM_AH_LEFT                 0x03
#define DJI_SYM_AH_DECORATION           0x13
#define DJI_SYM_AH_DECORATION_UP        0x75
#define DJI_SYM_AH_DECORATION_DOWN      0x76
#define DJI_SYM_SMALL_CROSSHAIR         0x73

// Crosshair Styles
#define DJI_SYM_AH_CENTER_LINE_LEFT     0x72
#define DJI_SYM_AH_CENTER               0x73
#define DJI_SYM_AH_CENTER_LINE_RIGHT    0x74

#define DJI_SYM_AH_CH_TYPE3	            0x00
#define DJI_SYM_AH_CH_TYPE3_1	        0x73
#define DJI_SYM_AH_CH_TYPE3_2	        0x00

#define DJI_SYM_AH_CH_TYPE4	            0x2D
#define DJI_SYM_AH_CH_TYPE4_1	        0x73
#define DJI_SYM_AH_CH_TYPE4_2	        0x2D

#define DJI_SYM_AH_CH_TYPE5	            0x17
#define DJI_SYM_AH_CH_TYPE5_1	        0x73
#define DJI_SYM_AH_CH_TYPE5_2	        0x17

#define DJI_SYM_AH_CH_TYPE6	            0x00
#define DJI_SYM_AH_CH_TYPE6_1	        0x09
#define DJI_SYM_AH_CH_TYPE6_2	        0x00

#define DJI_SYM_AH_CH_TYPE7	            0x78
#define DJI_SYM_AH_CH_TYPE7_1	        0x73
#define DJI_SYM_AH_CH_TYPE7_2	        0x77

#define DJI_SYM_AH_CH_TYPE8	            0x02
#define DJI_SYM_AH_CH_TYPE8_1	        0x73
#define DJI_SYM_AH_CH_TYPE8_2	        0x03

// Satellite Graphics
#define DJI_SYM_SAT_L                   0x1E
#define DJI_SYM_SAT_R                   0x1F

// Direction arrows
#define DJI_SYM_ARROW_SOUTH             0x60
#define DJI_SYM_ARROW_2                 0x61
#define DJI_SYM_ARROW_3                 0x62
#define DJI_SYM_ARROW_4                 0x63
#define DJI_SYM_ARROW_EAST              0x64
#define DJI_SYM_ARROW_6                 0x65
#define DJI_SYM_ARROW_7                 0x66
#define DJI_SYM_ARROW_8                 0x67
#define DJI_SYM_ARROW_NORTH             0x68
#define DJI_SYM_ARROW_10                0x69
#define DJI_SYM_ARROW_11                0x6A
#define DJI_SYM_ARROW_12                0x6B
#define DJI_SYM_ARROW_WEST              0x6C
#define DJI_SYM_ARROW_14                0x6D
#define DJI_SYM_ARROW_15                0x6E
#define DJI_SYM_ARROW_16                0x6F

#define DJI_SYM_ARROW_SMALL_UP          0x75
#define DJI_SYM_ARROW_SMALL_DOWN        0x76
#define DJI_SYM_ARROW_SMALL_RIGHT       0x77
#define DJI_SYM_ARROW_SMALL_LEFT        0x78

//Switch indicators
#define DJI_SYM_SWITCH_INDICATOR_HIGH   0x75 // DJI_SYM_ARROW_SMALL_UP
#define DJI_SYM_SWITCH_INDICATOR_MID    0x2D // Hyphon
#define DJI_SYM_SWITCH_INDICATOR_LOW    0x76 // DJI_SYM_ARROW_SMALL_DOWN

// AH Bars
#define DJI_SYM_AH_BAR9_0               0x80
#define DJI_SYM_AH_BAR9_1               0x81
#define DJI_SYM_AH_BAR9_2               0x82
#define DJI_SYM_AH_BAR9_3               0x83
#define DJI_SYM_AH_BAR9_4               0x84
#define DJI_SYM_AH_BAR9_5               0x85
#define DJI_SYM_AH_BAR9_6               0x86
#define DJI_SYM_AH_BAR9_7               0x87
#define DJI_SYM_AH_BAR9_8               0x88

// Progress bar
#define DJI_SYM_PB_START                0x8A
#define DJI_SYM_PB_FULL                 0x8B
#define DJI_SYM_PB_HALF                 0x8C
#define DJI_SYM_PB_EMPTY                0x8D
#define DJI_SYM_PB_END                  0x8E
#define DJI_SYM_PB_CLOSE                0x8F

// Batt evolution
#define DJI_SYM_BATT_FULL               0x90
#define DJI_SYM_BATT_5                  0x91
#define DJI_SYM_BATT_4                  0x92
#define DJI_SYM_BATT_3                  0x93
#define DJI_SYM_BATT_2                  0x94
#define DJI_SYM_BATT_1                  0x95
#define DJI_SYM_BATT_EMPTY              0x96

// Batt Icons
#define DJI_SYM_MAIN_BATT               0x97

// Voltage and amperage
#define DJI_SYM_VOLT                    0x06
#define DJI_SYM_AMP                     0x9A
#define DJI_SYM_MAH                     0x07
#define DJI_SYM_WATT                    0x57  // 'W'

// Time
#define DJI_SYM_ON_H                    0x9B
#define DJI_SYM_FLY_H                   0x9C
#define DJI_SYM_ON_M                    0x9B
#define DJI_SYM_FLY_M                   0x9C

// Speed
#define DJI_SYM_MS                      0x9F // m/s
#define DJI_SYM_KMH                     0x9E // km/h
#define DJI_SYM_MPH                     0x9D // mi/h
#define DJI_SYM_FTPS                    0x99 // ft/s

// Menu cursor
#define DJI_SYM_CURSOR                  0x3E

// Stick overlays
#define DJI_SYM_STICK_OVERLAY_SPRITE_HIGH 0x08
#define DJI_SYM_STICK_OVERLAY_SPRITE_MID  0x09
#define DJI_SYM_STICK_OVERLAY_SPRITE_LOW  0x0A
#define DJI_SYM_STICK_OVERLAY_CENTER      0x0B
#define DJI_SYM_STICK_OVERLAY_VERTICAL    0x16
#define DJI_SYM_STICK_OVERLAY_HORIZONTAL  0x17

// GPS degree/minute/second symbols
#define DJI_SYM_GPS_DEGREE              0x08 // kind of looks like the degree symbol (DJI_SYM_STICK_OVERLAY_SPRITE_HIGH)
#define DJI_SYM_GPS_MINUTE              0x27 // '
#define DJI_SYM_GPS_SECOND              0x22 // "
