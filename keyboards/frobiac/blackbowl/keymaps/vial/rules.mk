USER_NAME := frobiac

VIA_ENABLE = yes
VIAL_ENABLE = yes

PS2_MOUSE_ENABLE = yes
PS2_ENABLE = yes

# Upstream QMK changed this to PS2_DRIVER = [busywait|usart|interrupt]
ifeq ($(strip $(PS2_MOUSE_ENABLE)), yes)
	PS2_USE_USART = yes
endif

