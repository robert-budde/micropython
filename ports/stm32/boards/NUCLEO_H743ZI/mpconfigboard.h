#define MICROPY_HW_BOARD_NAME       "NUCLEO_H743ZI"
#define MICROPY_HW_MCU_NAME         "STM32H743"

#define MICROPY_HW_ENABLE_RTC       (1)
#define MICROPY_HW_ENABLE_RNG       (1)
#define MICROPY_HW_ENABLE_ADC       (1)
#define MICROPY_HW_ENABLE_DAC       (1)
#define MICROPY_HW_ENABLE_USB       (1)
#define MICROPY_HW_HAS_SWITCH       (1)
#define MICROPY_HW_HAS_FLASH        (1)

#define MICROPY_BOARD_EARLY_INIT    NUCLEO_H743ZI_board_early_init
void NUCLEO_H743ZI_board_early_init(void);

// The board has an 8MHz HSE, the following gives 400MHz CPU speed
#define MICROPY_HW_CLK_PLLM (4)
#define MICROPY_HW_CLK_PLLN (400)
#define MICROPY_HW_CLK_PLLP (2)
#define MICROPY_HW_CLK_PLLQ (4)
#define MICROPY_HW_CLK_PLLR (2)

// The USB clock is set using PLL3
#define MICROPY_HW_CLK_PLL3M (4)
#define MICROPY_HW_CLK_PLL3N (120)
#define MICROPY_HW_CLK_PLL3P (2)
#define MICROPY_HW_CLK_PLL3Q (5)
#define MICROPY_HW_CLK_PLL3R (2)

// 4 wait states
#define MICROPY_HW_FLASH_LATENCY    FLASH_LATENCY_4

// UART config
#define MICROPY_HW_UART3_TX         (pin_D8)
#define MICROPY_HW_UART3_RX         (pin_D9)
#define MICROPY_HW_UART_REPL        PYB_UART_3
#define MICROPY_HW_UART_REPL_BAUD   115200

// I2C busses
#define MICROPY_HW_I2C1_SCL         (pin_B8)
#define MICROPY_HW_I2C1_SDA         (pin_B9)
#define MICROPY_HW_I2C2_SCL         (pin_F1)
#define MICROPY_HW_I2C2_SDA         (pin_F0)

// SPI busses
#define MICROPY_HW_SPI1_NAME "A"
#define MICROPY_HW_SPI1_NSS  (pin_D14)
#define MICROPY_HW_SPI1_SCK  (pin_A5)
#define MICROPY_HW_SPI1_MISO (pin_A6)
#define MICROPY_HW_SPI1_MOSI (pin_B5)
#define MICROPY_HW_SPI3_NAME "B"
#define MICROPY_HW_SPI3_NSS  (pin_A4)
#define MICROPY_HW_SPI3_SCK  (pin_B3)
#define MICROPY_HW_SPI3_MISO (pin_B4)
#define MICROPY_HW_SPI3_MOSI (pin_B5)

// USRSW is pulled low. Pressing the button makes the input go high.
#define MICROPY_HW_USRSW_PIN        (pin_C13)
#define MICROPY_HW_USRSW_PULL       (GPIO_NOPULL)
#define MICROPY_HW_USRSW_EXTI_MODE  (GPIO_MODE_IT_RISING)
#define MICROPY_HW_USRSW_PRESSED    (1)

// LEDs
#define MICROPY_HW_LED1             (pin_B0)    // green
#define MICROPY_HW_LED2             (pin_E1)    // yellow
#define MICROPY_HW_LED3             (pin_B14)   // red
#define MICROPY_HW_LED_ON(pin)      (mp_hal_pin_high(pin))
#define MICROPY_HW_LED_OFF(pin)     (mp_hal_pin_low(pin))

// USB config
#define MICROPY_HW_USB_FS              (1)
#define MICROPY_HW_USB_VBUS_DETECT_PIN (pin_A9)
#define MICROPY_HW_USB_OTG_ID_PIN      (pin_A10)

// Ethernet via RMII
#define MICROPY_HW_ETH_MDC          (pin_C1)
#define MICROPY_HW_ETH_MDIO         (pin_A2)
#define MICROPY_HW_ETH_RMII_REF_CLK (pin_A1)
#define MICROPY_HW_ETH_RMII_CRS_DV  (pin_A7)
#define MICROPY_HW_ETH_RMII_RXD0    (pin_C4)
#define MICROPY_HW_ETH_RMII_RXD1    (pin_C5)
#define MICROPY_HW_ETH_RMII_TX_EN   (pin_G11)
#define MICROPY_HW_ETH_RMII_TXD0    (pin_G13)
#define MICROPY_HW_ETH_RMII_TXD1    (pin_B13)
