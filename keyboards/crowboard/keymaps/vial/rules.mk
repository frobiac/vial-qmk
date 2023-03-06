
# This file intentionally left blank
# MCU name
MCU = RP2040

ALLOW_WARNINGS = yes
# PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS!
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
# ENCODER_ENABLE = no
LTO_ENABLE = no
DYNAMIC_MACRO_ENABLE = yes
# KEY_OVERRIDE_ENABLE = yes
VIA_ENABLE = yes
VIAL_ENABLE = yes
EEPROM_DRIVER = wear_leveling
WEAR_LEVELING_DRIVER = rp2040_flash
# COMBO_ENABLE = yes
# VIAL_INSECURE = yes
