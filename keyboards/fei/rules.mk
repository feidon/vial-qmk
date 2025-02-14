# MCU name
MCU = atmega32u4

# Processor frequency.
#     This will define a symbol, F_CPU, in all source code files equal to the
#     processor frequency in Hz. You can then use this symbol in your source code to
#     calculate timings. Do NOT tack on a 'UL' at the end, this will be done
#     automatically to create a 32-bit value in your source code.
#
#     This will be an integer division of F_USB below, as it is sourced by
#     F_USB after it has run through any CPU prescalers. Note that this value
#     does not *change* the processor frequency - it should merely be updated to
#     reflect the processor speed set externally so that the code can use accurate
#     software delays.
# F_CPU = 16000000

# #
# # LUFA specific
# #
# # Target architecture (see library "Board Types" documentation).
# ARCH = AVR8

# # Input clock frequency.
# #     This will define a symbol, F_USB, in all source code files equal to the
# #     input clock frequency (before any prescaling is performed) in Hz. This value may
# #     differ from F_CPU if prescaling is used on the latter, and is required as the
# #     raw input clock is fed directly to the PLL sections of the AVR for high speed
# #     clock generation for the USB and other AVR subsections. Do NOT tack on a 'UL'
# #     at the end, this will be done automatically to create a 32-bit value in your
# #     source code.
# #
# #     If no clock division is performed on the input clock inside the AVR (via the
# #     CPU clock adjust registers or the clock division fuses), this will be equal to F_CPU.
# F_USB = $(F_CPU)

# # Interrupt driven control endpoint task(+60)
# OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT


# # Boot Section Size in *bytes*
# OPT_DEFS += -DBOOTLOADER_SIZE=4096

BOOTLOADER = atmel-dfu

# Build Options
#   comment out to disable the options.
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover
# BACKLIGHT_ENABLE = yes      # Enable keyboard backlight functionality
# RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
# AUDIO_ENABLE = no           # Audio output
