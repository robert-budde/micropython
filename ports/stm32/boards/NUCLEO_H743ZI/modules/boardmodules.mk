BOARD_MICROMOUSE_DIR = $(BOARD_DIR)/modules

INC += -I./$(BOARD_MICROMOUSE_DIR)
CFLAGS += -DBOARD_SPECIFIC_MODULES

SRC_BOARD_MODULES = $(addprefix $(BOARD_MICROMOUSE_DIR)/,\
                      modmicromouse.c \
                      )

OBJ += $(addprefix $(BUILD)/, $(SRC_BOARD_MODULES:.c=.o))

