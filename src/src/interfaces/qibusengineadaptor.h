/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -a qibusengineadaptor -c IBusEngineAdaptor -v org.freedesktop.IBus.Engine.xml org.freedesktop.IBus.Engine
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef QIBUSENGINEADAPTOR_H_1268726783
#define QIBUSENGINEADAPTOR_H_1268726783

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface org.freedesktop.IBus.Engine
 */
class IBusEngineAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.freedesktop.IBus.Engine")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.freedesktop.IBus.Engine\">\n"
"    <method name=\"CandidateClicked\">\n"
"      <arg direction=\"in\" type=\"u\" name=\"index\"/>\n"
"      <arg direction=\"in\" type=\"u\" name=\"button\"/>\n"
"      <arg direction=\"in\" type=\"u\" name=\"state\"/>\n"
"    </method>\n"
"    <method name=\"SetCursorLocation\">\n"
"      <arg direction=\"in\" type=\"i\" name=\"x\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"y\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"w\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"h\"/>\n"
"    </method>\n"
"    <signal name=\"UpdateAuxiliaryText\">\n"
"      <arg type=\"v\" name=\"text\"/>\n"
"      <arg type=\"b\" name=\"visible\"/>\n"
"    </signal>\n"
"    <method name=\"FocusOut\"/>\n"
"    <signal name=\"UpdateLookupTable\">\n"
"      <arg type=\"v\" name=\"lookup_table\"/>\n"
"      <arg type=\"b\" name=\"visible\"/>\n"
"    </signal>\n"
"    <signal name=\"HideAuxiliaryText\"/>\n"
"    <method name=\"Destroy\"/>\n"
"    <signal name=\"PageDownLookupTable\"/>\n"
"    <signal name=\"ForwardKeyEvent\">\n"
"      <arg type=\"u\" name=\"keyval\"/>\n"
"      <arg type=\"u\" name=\"keycode\"/>\n"
"      <arg type=\"u\" name=\"state\"/>\n"
"    </signal>\n"
"    <method name=\"Enable\"/>\n"
"    <signal name=\"ShowAuxiliaryText\"/>\n"
"    <method name=\"PageUp\"/>\n"
"    <method name=\"SetCapabilities\">\n"
"      <arg direction=\"in\" type=\"u\" name=\"cap\"/>\n"
"    </method>\n"
"    <method name=\"Disable\"/>\n"
"    <signal name=\"ShowPreeditText\"/>\n"
"    <method name=\"CursorUp\"/>\n"
"    <method name=\"Reset\"/>\n"
"    <signal name=\"UpdateProperty\">\n"
"      <arg type=\"v\" name=\"prop\"/>\n"
"    </signal>\n"
"    <method name=\"ProcessKeyEvent\">\n"
"      <arg direction=\"in\" type=\"u\" name=\"keyval\"/>\n"
"      <arg direction=\"in\" type=\"u\" name=\"keycode\"/>\n"
"      <arg direction=\"in\" type=\"u\" name=\"state\"/>\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"    <signal name=\"HidePreeditText\"/>\n"
"    <signal name=\"CommitText\">\n"
"      <arg type=\"v\" name=\"text\"/>\n"
"    </signal>\n"
"    <signal name=\"CursorUpLookupTable\"/>\n"
"    <method name=\"CursorDown\"/>\n"
"    <signal name=\"UpdatePreeditText\">\n"
"      <arg type=\"v\" name=\"text\"/>\n"
"      <arg type=\"u\" name=\"cursor_pos\"/>\n"
"      <arg type=\"b\" name=\"visible\"/>\n"
"      <arg type=\"u\" name=\"mode\"/>\n"
"    </signal>\n"
"    <signal name=\"RegisterProperties\">\n"
"      <arg type=\"v\" name=\"props\"/>\n"
"    </signal>\n"
"    <signal name=\"ShowLookupTable\"/>\n"
"    <signal name=\"CursorDownLookupTable\"/>\n"
"    <method name=\"PropertyShow\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"prop_name\"/>\n"
"    </method>\n"
"    <signal name=\"HideLookupTable\"/>\n"
"    <method name=\"PageDown\"/>\n"
"    <method name=\"PropertyHide\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"prop_name\"/>\n"
"    </method>\n"
"    <method name=\"FocusIn\"/>\n"
"    <method name=\"PropertyActivate\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"prop_name\"/>\n"
"      <arg direction=\"in\" type=\"i\" name=\"prop_state\"/>\n"
"    </method>\n"
"    <signal name=\"PageUpLookupTable\"/>\n"
"  </interface>\n"
        "")
public:
    IBusEngineAdaptor(QObject *parent);
    virtual ~IBusEngineAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void CandidateClicked(uint index, uint button, uint state);
    void CursorDown();
    void CursorUp();
    void Destroy();
    void Disable();
    void Enable();
    void FocusIn();
    void FocusOut();
    void PageDown();
    void PageUp();
    bool ProcessKeyEvent(uint keyval, uint keycode, uint state);
    void PropertyActivate(const QString &prop_name, int prop_state);
    void PropertyHide(const QString &prop_name);
    void PropertyShow(const QString &prop_name);
    void Reset();
    void SetCapabilities(uint cap);
    void SetCursorLocation(int x, int y, int w, int h);
Q_SIGNALS: // SIGNALS
    void CommitText(const QDBusVariant &text);
    void CursorDownLookupTable();
    void CursorUpLookupTable();
    void ForwardKeyEvent(uint keyval, uint keycode, uint state);
    void HideAuxiliaryText();
    void HideLookupTable();
    void HidePreeditText();
    void PageDownLookupTable();
    void PageUpLookupTable();
    void RegisterProperties(const QDBusVariant &props);
    void ShowAuxiliaryText();
    void ShowLookupTable();
    void ShowPreeditText();
    void UpdateAuxiliaryText(const QDBusVariant &text, bool visible);
    void UpdateLookupTable(const QDBusVariant &lookup_table, bool visible);
    void UpdatePreeditText(const QDBusVariant &text, uint cursor_pos, bool visible, uint mode);
    void UpdateProperty(const QDBusVariant &prop);
};

#endif
