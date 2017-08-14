#ifndef _CONFIG_H
#define _CONFIG_H

#define ISP_PORT GPIOA
#define ISP_RCC RCC_GPIOA

#define ISP_MOSI GPIO7
#define ISP_MISO GPIO6
#define ISP_SCK  GPIO5
#define ISP_RST GPIO8

#define TPI_DATA ISP_MOSI
#define TPI_CLK ISP_SCK
#define TPI_RST ISP_RST 

#endif