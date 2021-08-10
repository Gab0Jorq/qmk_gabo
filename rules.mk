DEFAULT_FOLDER = crkbd/rev1

#Agregado x mi
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
#BOOTLOADER = atmel-dfu
BOOTLOADER = caterina

BOOTMAGIC_ENABLE = yes  # Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE  = yes  # Mouse keys(+4700)
EXTRAKEY_ENABLE  = yes  # Audio control and System control(+450)
CONSOLE_ENABLE   = no   # Console for debug(+400)
COMMAND_ENABLE   = no   # Commands for debug and configuration
NKRO_ENABLE      = no   # Nkey Rollover, antes estaba en yes
BACKLIGHT_ENABLE = no  # Enable keyboard backlight functionality
MIDI_ENABLE      = no  # MIDI support (+2400 to 4200, depending on config)
AUDIO_ENABLE     = no  # Audio output on port C6
UNICODE_ENABLE   = no  # Unicode
BLUETOOTH_ENABLE = no  # Enable Bluetooth with the Adafruit EZ-Key HID
RGBLIGHT_ENABLE  = yes  # Enable WS2812 RGB underlight.  Do not enable this with audio at the same time.
SLEEP_LED_ENABLE = yes # Breathing sleep LED during USB suspend
STENO_ENABLE     = no  # enable TX Bolt protocol, requires VIRTSER and may not work with mouse keys
TAP_DANCE_ENABLE = no # enable double tap
# VIRTSER_ENABLE = yes # required for TX Bolt



#prueba dibujo
WPM_ENABLE = yes
OLED_DRIVER_ENABLE = yes
LTO_ENABLE = yes    #HACER MAS LIVIANO EL ARCHIVOO
