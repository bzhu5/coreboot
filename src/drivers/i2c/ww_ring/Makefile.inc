libverstage-$(CONFIG_DRIVERS_I2C_WW_RING) += ww_ring.c
libverstage-$(CONFIG_DRIVERS_I2C_WW_RING) += ww_ring_programs.c

ramstage-$(CONFIG_DRIVERS_I2C_WW_RING) += ww_ring.c
ramstage-$(CONFIG_DRIVERS_I2C_WW_RING) += ww_ring_programs.c
