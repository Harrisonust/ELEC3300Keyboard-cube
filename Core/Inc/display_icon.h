#ifndef DISPLAY_ICON_H
#define DISPLAY_ICON_H

#include "main.h"

/**
 * @brief ssd1306_DrawPic() currently support 16*16 pixel
 * 
 */
static const uint16_t BLE_ICON[] = {
    0x0200,
    0x0300,
    0x0280,
    0x0240,
    0x1220,
    0x0a40,
    0x0680,
    0x0300,
    0x0300,
    0x0680,
    0x0a40,
    0x1220,
    0x0240,
    0x0280,
    0x0300,
    0x0200};

static const uint16_t CABLE_ICON[] = {
    0x0000,
    0x2800,
    0x3840,
    0x38a0,
    0x1110,
    0x1110,
    0x1110,
    0x1110,
    0x1110,
    0x1110,
    0x1110,
    0x1110,
    0x0a38,
    0x0438,
    0x0028,
    0x0000};

static const uint16_t BATTERY_EMPTY_ICON[] = {
    0x03c0,
    0x0240,
    0x0e70,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0ff0};

static const uint16_t BATTERY_25_ICON[] = {
    0x03c0,
    0x0240,
    0x0e70,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0};

static const uint16_t BATTERY_50_ICON[] = {
    0x03c0,
    0x0240,
    0x0e70,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0810,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0};

static const uint16_t BATTERY_75_ICON[] = {
    0x03c0,
    0x0240,
    0x0e70,
    0x0810,
    0x0810,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0};

static const uint16_t BATTERY_100_ICON[] = {
    0x03c0,
    0x03c0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0,
    0x0ff0};

static const uint16_t WIN_ICON[] = {
    0x0000,
    0x000f,
    0x0f7f,
    0x7f7f,
    0x7f7f,
    0x7f7f,
    0x7f7f,
    0x7f7f,
    0x0000,
    0x7f7f,
    0x7f7f,
    0x7f7f,
    0x7f7f,
    0x7f7f,
    0x0f0f,
    0x0000};

static const uint16_t APPLE_ICON[] = {
    0x00c0,
    0x01c0,
    0x0180,
    0x3938,
    0x7c7c,
    0xfffe,
    0xfff8,
    0xfff0,
    0xfff0,
    0xfff0,
    0xfff8,
    0xfffe,
    0x7ffc,
    0x7ffc,
    0x3ff8,
    0x1c70};

static const uint16_t LINUX_ICON[] = {
    0x0180,
    0x03c0,
    0x0370,
    0x03e0,
    0x03e0,
    0x07f0,
    0x1ff0,
    0x3e38,
    0x061c,
    0x0610,
    0x0610,
    0x0610,
    0x0630,
    0x0660,
    0x07e0,
    0x0770};

static const uint16_t PACMAN_ICON0[] = {
    0x0ff0,
    0x1ff8,
    0x3ffc,
    0x7ffe,
    0x3fff,
    0x0fff,
    0x03ff,
    0x00ff,
    0x00ff,
    0x03ff,
    0x0fff,
    0x3fff,
    0x7ffe,
    0x3ffc,
    0x1ff8,
    0x0ff0};

static const uint16_t PACMAN_ICON1[] = {
    0x0ff0,
    0x3ffc,
    0x7ffe,
    0x7ffe,
    0xc78f,
    0x8307,
    0x8307,
    0xe3c7,
    0xe3c7,
    0xc78f,
    0xffff,
    0xffff,
    0xffff,
    0xffff,
    0xcf7f,
    0xc633};

static const uint16_t PACMAN_ICON2[] = {
    0x1ff8,
    0x3ffc,
    0x7ffe,
    0xffff,
    0xffff,
    0xe7cf,
    0xcf9f,
    0xcd9b,
    0xc183,
    0xc183,
    0xffff,
    0xffff,
    0xffff,
    0xffff,
    0xfe7f,
    0xcc33};

static const uint16_t SETTING_ICON[] = {
    0x0000,
    0x1800,
    0x0c00,
    0x0400,
    0x8c00,
    0xdc00,
    0x7e00,
    0x0700,
    0x0380,
    0x01c0,
    0x00fc,
    0x0076,
    0x0062,
    0x0040,
    0x0060,
    0x0030};

static const uint16_t NORMAL_ICON[] = {
    0x0000,
    0x7ffe,
    0x4002,
    0x4002,
    0x4002,
    0x4002,
    0x4002,
    0x4002,
    0x4002,
    0x7ffe,
    0x0180,
    0x0180,
    0x1ff8,
    0x7ffe,
    0x0000,
    0x0000};

#endif