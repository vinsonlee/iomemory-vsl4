#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001AEDd00003001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00003002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00003003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001AEDd00003004sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "63AE87C668625D3C88C82D7");
