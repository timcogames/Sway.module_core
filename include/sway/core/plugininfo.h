#ifndef SWAY_CORE_PLUGININFO_H
#define SWAY_CORE_PLUGININFO_H

#include <sway/core/version.h>
#include <sway/namespacemacros.h>
#include <string>

NAMESPACE_BEGIN(sway)
NAMESPACE_BEGIN(core)

/*!
 * \brief
 *    Общедоступная информация плагина.
 */
struct PluginInfo {
	lpcstr_t name; /*!< Имя плагина. */
	lpcstr_t author; /*!< Автор плагина. */
	lpcstr_t description; /*!< Описание плагина. */
	lpcstr_t url; /*!< URL плагина. */
	lpcstr_t license; /*!< Лицензия плагина. */
	core::Version version; /*!< Версия плагина. */
};

NAMESPACE_END(core)
NAMESPACE_END(sway)

#endif // SWAY_CORE_PLUGININFO_H
