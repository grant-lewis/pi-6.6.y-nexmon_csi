#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
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
__used __section("__versions") = {
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xc814526b, "brcmu_pktq_mlen" },
	{ 0x7ba6617a, "cfg80211_sched_scan_results" },
	{ 0x5bcfe71f, "sdio_retune_hold_now" },
	{ 0xfd381eee, "sdio_release_host" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xd22dc139, "usb_alloc_urb" },
	{ 0x38017935, "sdio_disable_func" },
	{ 0x2cae5bc2, "cfg80211_mgmt_tx_status_ext" },
	{ 0x90c3f15, "usb_autopm_put_interface" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xef50c346, "sdio_set_block_size" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc36efa72, "usb_free_urb" },
	{ 0x89ea9991, "__nlmsg_put" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xf61c822d, "devm_kmalloc" },
	{ 0x1bc00274, "of_node_put" },
	{ 0x9f3a75b7, "skb_put" },
	{ 0x20217b6e, "brcmu_pkt_buf_free_skb" },
	{ 0x5398a447, "of_property_read_variable_u32_array" },
	{ 0x456f1644, "sdio_retune_crc_disable" },
	{ 0x83ef8abc, "cfg80211_scan_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x28164c62, "firmware_request_nowarn" },
	{ 0x1a704aed, "platform_driver_unregister" },
	{ 0x5790d6c7, "sdio_claim_host" },
	{ 0x2ce23e87, "cfg80211_sched_scan_stopped" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xab72864e, "sdio_memcpy_fromio" },
	{ 0x9088922a, "consume_skb" },
	{ 0xdeff850, "sdio_register_driver" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0x852605d4, "unregister_netdev" },
	{ 0x6f3cb997, "cfg80211_remain_on_channel_expired" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x7903ba54, "cfg80211_register_netdevice" },
	{ 0x4223bbd, "request_firmware" },
	{ 0xf82e30d0, "usb_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xce05a7e2, "__netlink_kernel_create" },
	{ 0x4c5124, "cfg80211_port_authorized" },
	{ 0x7ae2f5c8, "brcmu_pktq_init" },
	{ 0xfd51a31d, "brcmu_pktq_penq_head" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x856e0686, "sdio_memcpy_toio" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x512a928a, "cfg80211_new_sta" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0x9171ca29, "cfg80211_disconnected" },
	{ 0x75534995, "ether_setup" },
	{ 0xf944b9cf, "of_get_property" },
	{ 0x8f12afa8, "pskb_expand_head" },
	{ 0xf832a847, "wake_up_process" },
	{ 0x85a2132a, "dev_addr_mod" },
	{ 0x124e54f3, "sdio_f0_readb" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0xa0bdf59d, "eth_type_trans" },
	{ 0x40846db2, "alloc_netdev_mqs" },
	{ 0xe1579a56, "wiphy_new_nm" },
	{ 0x122c3a7e, "_printk" },
	{ 0xb5900c0a, "cfg80211_ready_on_channel" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x157c1459, "of_get_next_child" },
	{ 0xe663e7a9, "cfg80211_classify8021d" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xa515b078, "sdio_release_irq" },
	{ 0xf64100b7, "debugfs_create_devm_seqfile" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xa1489113, "cfg80211_crit_proto_stopped" },
	{ 0x380d5b4d, "wiphy_register" },
	{ 0xb74730d2, "__cfg80211_alloc_reply_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa8cc86b4, "__alloc_skb" },
	{ 0x7ae589c9, "cfg80211_put_bss" },
	{ 0xe9fb8157, "cfg80211_roamed" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x24268928, "usb_submit_urb" },
	{ 0x9f984513, "strrchr" },
	{ 0x2f19d425, "_dev_info" },
	{ 0x485af17d, "skb_queue_tail" },
	{ 0x5a380091, "ieee80211_get_channel_khz" },
	{ 0xe0409452, "cfg80211_check_combinations" },
	{ 0xfadd4c79, "sdio_f0_writeb" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0x444d245f, "sdio_unregister_driver" },
	{ 0xe2a4d1e6, "sdio_readsb" },
	{ 0xa90a46f6, "of_get_child_by_name" },
	{ 0x9dbcd801, "brcmu_dbg_hex_dump" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7e4c3df5, "efi" },
	{ 0xae383b88, "_dev_err" },
	{ 0x53e50b25, "init_net" },
	{ 0x187a53e0, "cfg80211_ibss_joined" },
	{ 0x70532c4a, "request_firmware_nowait" },
	{ 0x35266f60, "simple_open" },
	{ 0x6fb62242, "skb_pull" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0x692e9678, "netlink_unicast" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2e286507, "irq_get_irq_data" },
	{ 0x960cd483, "wiphy_apply_custom_regulatory" },
	{ 0x2a4edede, "cfg80211_michael_mic_failure" },
	{ 0xe9a1121e, "kfree_skb_reason" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6efed5f1, "skb_push" },
	{ 0x5e6685af, "sdio_retune_crc_enable" },
	{ 0x68f846c9, "brcmu_pktq_flush" },
	{ 0x3e17493, "brcmu_pktq_peek_tail" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5a921311, "strncmp" },
	{ 0x409445a1, "cfg80211_del_sta_sinfo" },
	{ 0x141c9ae9, "sdio_readl" },
	{ 0x5e62210e, "mmc_set_data_timeout" },
	{ 0x97def7b, "nla_put" },
	{ 0x96127e64, "register_netdev" },
	{ 0x9166fada, "strncpy" },
	{ 0xc45ba4c7, "wiphy_unregister" },
	{ 0xb351edac, "free_netdev" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0x394569ce, "netlink_kernel_release" },
	{ 0x12784906, "wiphy_read_of_freq_limits" },
	{ 0x8dde9cf6, "of_find_property" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0x98185062, "kthread_stop" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xb0865f39, "dev_coredumpv" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x5641ef6d, "usb_deregister" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x11089ac7, "_ctype" },
	{ 0x80d393d2, "netif_tx_wake_queue" },
	{ 0x6bedf402, "ieee80211_freq_khz_to_channel" },
	{ 0xdcb764ad, "memset" },
	{ 0x87c62d2f, "_dev_warn" },
	{ 0x3f319ca0, "brcmu_pktq_pdeq_match" },
	{ 0x9245d26f, "cfg80211_vendor_cmd_reply" },
	{ 0xc07db8e9, "sdio_writel" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xa90cfa67, "debugfs_create_u32" },
	{ 0x8cb2336a, "mmc_wait_for_req" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xa2eaafa1, "__pskb_pull_tail" },
	{ 0x69e4380d, "netif_rx" },
	{ 0x9698c77f, "__netdev_alloc_skb" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x2b56a2d0, "param_ops_string" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f6178db, "skb_trim" },
	{ 0x71dea0ab, "skb_unlink" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xef16c549, "kthread_create_on_node" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd64e639, "strscpy" },
	{ 0x4c5a3b1, "pm_runtime_forbid" },
	{ 0x487ba5ee, "debugfs_create_file" },
	{ 0xfac6ff0a, "brcmu_pktq_mdeq" },
	{ 0x20add19a, "cfg80211_unregister_wdev" },
	{ 0x49f4e4a2, "brcmu_pktq_penq" },
	{ 0xe47d6967, "pm_runtime_allow" },
	{ 0x999e8297, "vfree" },
	{ 0x3d300d7c, "__platform_driver_probe" },
	{ 0xc84dd39c, "of_device_is_compatible" },
	{ 0x79b29dc5, "cfg80211_rx_mgmt_ext" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6b676568, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x86d5c2b3, "brcmu_pktq_pdeq_tail" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x37961881, "driver_for_each_device" },
	{ 0xc310b981, "strnstr" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x6d4380aa, "seq_write" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xabd2601b, "usb_kill_urb" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc827718a, "netif_carrier_off" },
	{ 0x9ce185b9, "seq_printf" },
	{ 0x5584448a, "ieee80211_channel_to_freq_khz" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x4815895d, "netif_carrier_on" },
	{ 0xa272930d, "brcmu_pkt_buf_get_skb" },
	{ 0x623c35e9, "mmc_hw_reset" },
	{ 0x93f7265a, "sdio_retune_release" },
	{ 0x6172f4c3, "sdio_claim_irq" },
	{ 0xe4fc5001, "cfg80211_report_wowlan_wakeup" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xd1174211, "sdio_enable_func" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa65c6def, "alt_cb_patch_nops" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x54621093, "send_sig" },
	{ 0x1906648e, "brcmu_boardrev_str" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x90db61fa, "cfg80211_inform_bss_data" },
	{ 0x9d003377, "kmalloc_trace" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xea124bd1, "gcd" },
	{ 0x26b2eb6d, "irq_of_parse_and_map" },
	{ 0xfdfc4815, "device_release_driver" },
	{ 0x98cf60b3, "strlen" },
	{ 0xda56c90d, "dev_kfree_skb_any_reason" },
	{ 0xcc1bde15, "param_ops_int" },
	{ 0x4130d479, "of_find_node_opts_by_path" },
	{ 0x349cba85, "strchr" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xd8af8677, "cfg80211_connect_done" },
	{ 0x7410aba2, "strreplace" },
	{ 0x7842bca0, "wiphy_free" },
	{ 0x83ffe097, "of_property_read_string_helper" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xa16765cd, "cfg80211_cqm_rssi_notify" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1521a1a5, "kmalloc_caches" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0x9858f364, "get_random_u8" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5fe96002, "sdio_readb" },
	{ 0x41e8677a, "sdio_writeb" },
	{ 0x773354b7, "module_layout" },
};

MODULE_INFO(depends, "brcmutil,cfg80211");

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4359*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("sdio:c*v02D0dAAE8*");
MODULE_ALIAS("sdio:c*v02D0d4355*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B54F0AF54B660B2C06EFC99");
