/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -a qibusconfigadaptor -c IBusConfigAdaptor -v org.freedesktop.IBus.Config.xml org.freedesktop.IBus.Config
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef QIBUSCONFIGADAPTOR_H_1268725630
#define QIBUSCONFIGADAPTOR_H_1268725630

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface org.freedesktop.IBus.Config
 */
class IBusConfigAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.freedesktop.IBus.Config")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.freedesktop.IBus.Config\">\n"
"    <method name=\"Destroy\"/>\n"
"    <signal name=\"ValueChanged\">\n"
"      <arg type=\"s\" name=\"section\"/>\n"
"      <arg type=\"s\" name=\"name\"/>\n"
"      <arg type=\"v\" name=\"value\"/>\n"
"    </signal>\n"
"    <method name=\"SetValue\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"section\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"name\"/>\n"
"      <arg direction=\"in\" type=\"v\" name=\"value\"/>\n"
"    </method>\n"
"    <method name=\"GetValue\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"section\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"name\"/>\n"
"      <arg direction=\"out\" type=\"v\"/>\n"
"    </method>\n"
"    <method name=\"Unset\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"section\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"name\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    IBusConfigAdaptor(QObject *parent);
    virtual ~IBusConfigAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void Destroy();
    QDBusVariant GetValue(const QString &section, const QString &name);
    void SetValue(const QString &section, const QString &name, const QDBusVariant &value);
    void Unset(const QString &section, const QString &name);
Q_SIGNALS: // SIGNALS
    void ValueChanged(const QString &section, const QString &name, const QDBusVariant &value);
};

#endif
