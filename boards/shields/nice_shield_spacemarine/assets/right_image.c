#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_RIGHT_IMAGE
#define LV_ATTRIBUTE_IMG_RIGHT_IMAGE
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST
    LV_ATTRIBUTE_IMG_RIGHT_IMAGE uint8_t right_image_map[] = {
#if CONFIG_NICE_VIEW_WIDGET_INVERTED
        0x00, 0x00, 0x00, 0xff, /*Color of index 0*/
        0xff, 0xff, 0xff, 0xff, /*Color of index 1*/
#else
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
#endif
        // REPLACE THESE BYTES
        // 'astartes', 80x69px
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x80, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe,
        0x00, 0xff, 0xc3, 0xc0, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x7f, 0xff, 0xff,
        0xe7, 0xe7, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x7c, 0x7e, 0x01, 0xff, 0xf7,
        0xe7, 0xff, 0xc0, 0x00, 0x00, 0x7f, 0xff, 0xfd, 0xdf, 0xfb, 0xbf, 0xef,
        0xfe, 0x00, 0x00, 0x3c, 0x19, 0x8e, 0xbf, 0xfd, 0x47, 0xc1, 0xfc, 0x00,
        0x00, 0x3f, 0xe5, 0xf8, 0xbf, 0xfd, 0x3f, 0x8f, 0xf8, 0x00, 0x00, 0x3e,
        0x39, 0xcf, 0xbf, 0xfd, 0xef, 0xb9, 0xfc, 0x00, 0x00, 0x07, 0xee, 0x79,
        0xbf, 0xfd, 0xb8, 0x6f, 0x88, 0x00, 0x00, 0x1f, 0xbd, 0xf6, 0xbf, 0xfd,
        0x4f, 0x3b, 0xf0, 0x00, 0x00, 0x0c, 0xf7, 0x3d, 0x3f, 0xfd, 0xb0, 0xff,
        0x70, 0x00, 0x00, 0x03, 0xde, 0xb3, 0xbf, 0xfe, 0xdd, 0x73, 0xc0, 0x00,
        0x00, 0x02, 0x79, 0x8e, 0xbf, 0xfd, 0x65, 0xbc, 0xc0, 0x00, 0x00, 0x00,
        0xf7, 0x7d, 0x7f, 0xff, 0xbc, 0xcf, 0x00, 0x00, 0x00, 0x00, 0xde, 0xc2,
        0xa1, 0x84, 0xd2, 0x77, 0x00, 0x00, 0x00, 0x00, 0x3d, 0xbc, 0xb3, 0xcd,
        0x0d, 0xb8, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x6f, 0x3e, 0x7c, 0xb7, 0xdc,
        0x00, 0x00, 0x00, 0x00, 0x06, 0xdb, 0xde, 0x7a, 0xdf, 0x60, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x36, 0xc7, 0xe3, 0x5b, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x07, 0x87, 0xe3, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
        0x83, 0xc1, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xc0,
        0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x03, 0xc0, 0xc0, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x03, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xc0,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00
        // END
};

const lv_img_dsc_t right_image = {
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 80,
    .header.h = 69,
    .data_size = 620,
    .data = right_image_map,
};
