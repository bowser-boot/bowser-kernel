
obj-$(CONFIG_RMI4_CORE) += rmi_core.o
rmi_core-y := rmi_bus.o rmi_driver.o rmi_f01.o rmi_input_dev.o rmi_touchpad.o rmi_filter_tap.o rmi_filter_click.o rmi_filter_zone.o rmi_filter_palm.o
rmi_core-$(CONFIG_RMI4_FWLIB) += rmi_fw_update.o

# Function drivers
obj-$(CONFIG_RMI4_F11) += rmi_f11.o
obj-$(CONFIG_RMI4_F12) += rmi_f12.o
obj-$(CONFIG_RMI4_F30) += rmi_f30.o
obj-$(CONFIG_RMI4_F54) += rmi_f54.o

# Transport layers
obj-$(CONFIG_RMI4_I2C) += rmi_i2c.o
obj-$(CONFIG_RMI4_SPI) += rmi_spi.o

obj-$(CONFIG_RMI4_HID) += rmi_hid.o

# Control modules (implementing sysfs and debugfs)

ifeq ("$(CONFIG_RMI4_CONTROL)", "y")
obj-$(CONFIG_RMI4_CORE) += rmi_control.o rmi_f01_control.o rmi_driver_control.o
obj-$(CONFIG_RMI4_F11) += rmi_f11_control.o
obj-$(CONFIG_RMI4_F12) += rmi_f12_control.o
endif



ccflags-$(CONFIG_RMI4_DEBUG) += -DDEBUG
