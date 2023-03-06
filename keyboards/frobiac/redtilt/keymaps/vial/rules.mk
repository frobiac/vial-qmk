USER_NAME := frobiac

VIA_ENABLE = yes
VIAL_ENABLE = yes

PS2_MOUSE_ENABLE = no
PS2_ENABLE = no

# Upstream QMK changed this to PS2_DRIVER = busywait
# But only activate once global setting is re-activated
ifeq ($(strip $(PS2_MOUSE_ENABLE)), yes)
	PS2_USE_BUSYWAIT = yes
endif

