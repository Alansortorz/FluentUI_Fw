#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>
#include <QtCore/qhash.h>
#include <QtCore/qstring.h>

namespace QmlCacheGeneratedCode {
namespace _fluentui_fw_src_main_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _fluentui_fw_src_ui_window_MachineData_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _fluentui_fw_src_ui_window_MainWindow_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _fluentui_fw_src_ui_setting_setting_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _fluentui_fw_src_ui_window_PageWindow_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _fluentui_fw_src_ui_window_CrashWindow_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _fluentui_fw_src_ui_window_AboutWindow_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _fluentui_fw_src_ui_window_LoginWindow_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}
namespace _fluentui_fw_src_ui_window_WelcomePage_qml { 
    extern const unsigned char qmlData[];
    extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), &aotBuiltFunctions[0], nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
    resourcePathToCachedUnit.insert(QStringLiteral("/fluentui_fw/src/main.qml"), &QmlCacheGeneratedCode::_fluentui_fw_src_main_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/fluentui_fw/src/ui/window/MachineData.qml"), &QmlCacheGeneratedCode::_fluentui_fw_src_ui_window_MachineData_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/fluentui_fw/src/ui/window/MainWindow.qml"), &QmlCacheGeneratedCode::_fluentui_fw_src_ui_window_MainWindow_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/fluentui_fw/src/ui/setting/setting.qml"), &QmlCacheGeneratedCode::_fluentui_fw_src_ui_setting_setting_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/fluentui_fw/src/ui/window/PageWindow.qml"), &QmlCacheGeneratedCode::_fluentui_fw_src_ui_window_PageWindow_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/fluentui_fw/src/ui/window/CrashWindow.qml"), &QmlCacheGeneratedCode::_fluentui_fw_src_ui_window_CrashWindow_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/fluentui_fw/src/ui/window/AboutWindow.qml"), &QmlCacheGeneratedCode::_fluentui_fw_src_ui_window_AboutWindow_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/fluentui_fw/src/ui/window/LoginWindow.qml"), &QmlCacheGeneratedCode::_fluentui_fw_src_ui_window_LoginWindow_qml::unit);
    resourcePathToCachedUnit.insert(QStringLiteral("/fluentui_fw/src/ui/window/WelcomePage.qml"), &QmlCacheGeneratedCode::_fluentui_fw_src_ui_window_WelcomePage_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.structVersion = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appfluentui_fw)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qmlcache_appfluentui_fw))
int QT_MANGLE_NAMESPACE(qCleanupResources_qmlcache_appfluentui_fw)() {
    return 1;
}
