ifeq ($(CONFIG_SOC_INTEL_SKYLAKE),y)

subdirs-y += nhlt
subdirs-y += romstage
subdirs-y += ../../../cpu/intel/microcode
subdirs-y += ../../../cpu/intel/turbo
subdirs-y += ../../../cpu/x86/lapic
subdirs-y += ../../../cpu/x86/mtrr
subdirs-y += ../../../cpu/x86/smm
subdirs-y += ../../../cpu/x86/tsc

bootblock-y += bootblock/bootblock.c
bootblock-y += bootblock/cache_as_ram.S
bootblock-y += bootblock/cpu.c
bootblock-y += bootblock/i2c.c
bootblock-y += bootblock/pch.c
bootblock-y += bootblock/report_platform.c
bootblock-y += bootblock/smbus.c
bootblock-y += bootblock/systemagent.c
bootblock-y += flash_controller.c
bootblock-$(CONFIG_UART_DEBUG) += bootblock/uart.c
bootblock-$(CONFIG_UART_DEBUG) += uart_debug.c
bootblock-y += gpio.c
bootblock-y += monotonic_timer.c
bootblock-y += pch.c
bootblock-y += pcr.c
bootblock-y += pmutil.c
bootblock-y += tsc_freq.c

verstage-y += flash_controller.c
verstage-y += monotonic_timer.c
verstage-y += pch.c
verstage-$(CONFIG_UART_DEBUG) += uart_debug.c

romstage-y += flash_controller.c
romstage-y += gpio.c
romstage-y += memmap.c
romstage-y += monotonic_timer.c
romstage-y += me.c
romstage-y += pch.c
romstage-y += pcr.c
romstage-y += pei_data.c
romstage-y += pmutil.c
romstage-$(CONFIG_PLATFORM_USES_FSP2_0) += reset.c
romstage-y += smbus_common.c
romstage-y += tsc_freq.c
romstage-$(CONFIG_UART_DEBUG) += uart_debug.c

ramstage-$(CONFIG_HAVE_ACPI_TABLES) += acpi.c
ramstage-$(CONFIG_PLATFORM_USES_FSP1_1) += chip.c
ramstage-$(CONFIG_PLATFORM_USES_FSP2_0) += chip_fsp20.c
ramstage-y += cpu.c
ramstage-y += cpu_info.c
ramstage-y += dsp.c
ramstage-y += elog.c
ramstage-y += finalize.c
ramstage-y += flash_controller.c
ramstage-y += gpio.c
ramstage-y += i2c.c
ramstage-y += igd.c
ramstage-y += irq.c
ramstage-y += lpc.c
ramstage-y += me.c
ramstage-y += memmap.c
ramstage-y += monotonic_timer.c
ramstage-$(CONFIG_PLATFORM_USES_FSP1_1) += opregion.c
ramstage-y += pch.c
ramstage-y += pcie.c
ramstage-y += pcr.c
ramstage-y += pei_data.c
ramstage-y += pmc.c
ramstage-y += pmutil.c
ramstage-$(CONFIG_PLATFORM_USES_FSP2_0) += reset.c
ramstage-y += sd.c
ramstage-y += smbus.c
ramstage-y += smbus_common.c
ramstage-y += smi.c
ramstage-y += smmrelocate.c
ramstage-y += systemagent.c
ramstage-y += tsc_freq.c
ramstage-y += uart.c
ramstage-$(CONFIG_UART_DEBUG) += uart_debug.c
ramstage-y += vr_config.c
ramstage-y += xhci.c

smm-y += cpu_info.c
smm-y += gpio.c
smm-y += monotonic_timer.c
smm-y += pcr.c
smm-y += pch.c
smm-y += pmutil.c
smm-y += smihandler.c
smm-$(CONFIG_SPI_FLASH_SMM) += flash_controller.c
smm-y += tsc_freq.c
smm-$(CONFIG_UART_DEBUG) += uart_debug.c

# cpu_microcode_bins += ???

CPPFLAGS_common += -I$(src)/soc/intel/skylake
CPPFLAGS_common += -I$(src)/soc/intel/skylake/include

ifeq ($(CONFIG_PLATFORM_USES_FSP1_1),y)
CPPFLAGS_common += -I$(src)/soc/intel/skylake/include/fsp11
CPPFLAGS_common += -I$(src)/vendorcode/intel/fsp/fsp1_1/skylake
else
CPPFLAGS_common += -I$(src)/soc/intel/skylake/include/fsp20
CPPFLAGS_common += -I$(src)/vendorcode/intel/fsp/fsp2_0/skykabylake
endif

# Currently used for microcode path.
CPPFLAGS_common += -I3rdparty/blobs/mainboard/$(MAINBOARDDIR)

ROMCCFLAGS := -mcpu=p4 -fno-simplify-phi -O2

endif
