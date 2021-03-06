#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x6537a300, "module_layout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfafcad57, "netdev_info" },
	{ 0xd4a67639, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40f36591, "ethtool_op_get_ts_info" },
	{ 0xc7f84b57, "skb_clone_tx_timestamp" },
	{ 0x571c4c52, "__skb_gso_segment" },
	{ 0xe01d5c3b, "pci_write_config_word" },
	{ 0x750c138b, "single_open" },
	{ 0xa6975448, "param_ops_int" },
	{ 0x24c00ada, "napi_disable" },
	{ 0x1f26bc58, "pci_read_config_byte" },
	{ 0x75e563c4, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x76666f97, "dma_set_mask" },
	{ 0x22a79e65, "dev_printk" },
	{ 0x6268ebf5, "single_release" },
	{ 0x6db8e8f4, "pci_get_slot" },
	{ 0x3ce09050, "seq_puts" },
	{ 0x897a1c88, "boot_cpu_data" },
	{ 0xa9a45615, "pci_disable_device" },
	{ 0xaaacaa1f, "netif_carrier_on" },
	{ 0x1d455b30, "delayed_work_timer_fn" },
	{ 0xf6df71d0, "seq_printf" },
	{ 0xb447e148, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2bc9e08a, "dma_direct_sync_single_for_cpu" },
	{ 0xbb861aac, "pci_write_config_byte" },
	{ 0x23fc6cfa, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x86c05291, "pci_release_regions" },
	{ 0x58c6dd5a, "init_timer_key" },
	{ 0xa936fe5e, "cancel_delayed_work_sync" },
	{ 0x50b266f9, "pci_enable_wake" },
	{ 0x85542022, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3a059d68, "seq_read" },
	{ 0x7f0e3910, "dma_set_coherent_mask" },
	{ 0x30da2ed1, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x978e5dcb, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9e74c95, "PDE_DATA" },
	{ 0xca15d838, "pci_set_master" },
	{ 0x1b5068b, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x711845a8, "proc_mkdir" },
	{ 0x2000d438, "netif_tx_wake_queue" },
	{ 0x5fedbf88, "pci_restore_state" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x4b5ae83a, "register_netdev" },
	{ 0x5d0514a7, "seq_putc" },
	{ 0xbbeb8241, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xffe04c40, "dma_direct_map_page" },
	{ 0xb922c50d, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x12b8acea, "proc_mkdir_data" },
	{ 0xadd4427b, "mod_timer" },
	{ 0xe1a58688, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x87849aba, "init_net" },
	{ 0x59f03ea9, "_dev_err" },
	{ 0x368c26e2, "pci_enable_msi" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xb009fef7, "pci_clear_master" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x2e35e900, "pci_find_capability" },
	{ 0xb123d8b9, "pci_set_mwi" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f4309db, "dma_direct_unmap_page" },
	{ 0x2b7c00f4, "netif_device_attach" },
	{ 0x7edfc67, "napi_gro_receive" },
	{ 0xbb870d68, "_dev_info" },
	{ 0xae60a51b, "pci_disable_link_state" },
	{ 0x91b101cc, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x405f462b, "__napi_schedule" },
	{ 0x28cf662b, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x3c200491, "skb_checksum_help" },
	{ 0xa0cb5e17, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xf0b7431, "pci_read_config_dword" },
	{ 0x3a3f89c3, "eth_type_trans" },
	{ 0x8c8c8a32, "proc_get_parent_data" },
	{ 0xaa3334b8, "dev_driver_string" },
	{ 0x53e4aa52, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x40415387, "netdev_err" },
	{ 0xa3a10fca, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xf79a73d2, "pci_set_power_state" },
	{ 0x259bff8, "remove_proc_subtree" },
	{ 0xaf12ce1, "proc_create_data" },
	{ 0x33b4e938, "pci_clear_mwi" },
	{ 0x904ee5bb, "seq_lseek" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5c92ee33, "pci_request_regions" },
	{ 0xa6170d, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xd1123fa, "dma_direct_sync_single_for_device" },
	{ 0xbe99dd20, "__pci_register_driver" },
	{ 0x15af7f4, "system_state" },
	{ 0x142d8bb5, "unregister_netdev" },
	{ 0x44698541, "pci_choose_state" },
	{ 0x62429bd8, "consume_skb" },
	{ 0x4ea5aa9f, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xe1e9589a, "__napi_alloc_skb" },
	{ 0x180b10d8, "skb_tstamp_tx" },
	{ 0xaddf8582, "skb_put" },
	{ 0x7bbc7c6c, "pci_enable_device" },
	{ 0x51f33205, "pci_wake_from_d3" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf765d8f4, "param_ops_ulong" },
	{ 0x666c6d7f, "param_ops_uint" },
	{ 0x6b534fb8, "skb_copy_bits" },
	{ 0x5840c7a8, "dma_ops" },
	{ 0x55697a88, "__skb_pad" },
	{ 0xd3cdc63c, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xca489632, "pci_save_state" },
	{ 0xe914e41e, "strcpy" },
	{ 0x9cbc7788, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");

MODULE_INFO(srcversion, "0A1D1745470ADDFDB6218D0");
