/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -a qibusengineadaptor -c IBusEngineAdaptor -v org.freedesktop.IBus.Engine.xml org.freedesktop.IBus.Engine
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "qibusengineadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class IBusEngineAdaptor
 */

IBusEngineAdaptor::IBusEngineAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

IBusEngineAdaptor::~IBusEngineAdaptor()
{
    // destructor
}

void IBusEngineAdaptor::CandidateClicked(uint index, uint button, uint state)
{
    // handle method call org.freedesktop.IBus.Engine.CandidateClicked
    QMetaObject::invokeMethod(parent(), "CandidateClicked", Q_ARG(uint, index), Q_ARG(uint, button), Q_ARG(uint, state));
}

void IBusEngineAdaptor::CursorDown()
{
    // handle method call org.freedesktop.IBus.Engine.CursorDown
    QMetaObject::invokeMethod(parent(), "CursorDown");
}

void IBusEngineAdaptor::CursorUp()
{
    // handle method call org.freedesktop.IBus.Engine.CursorUp
    QMetaObject::invokeMethod(parent(), "CursorUp");
}

void IBusEngineAdaptor::Destroy()
{
    // handle method call org.freedesktop.IBus.Engine.Destroy
    QMetaObject::invokeMethod(parent(), "Destroy");
}

void IBusEngineAdaptor::Disable()
{
    // handle method call org.freedesktop.IBus.Engine.Disable
    QMetaObject::invokeMethod(parent(), "Disable");
}

void IBusEngineAdaptor::Enable()
{
    // handle method call org.freedesktop.IBus.Engine.Enable
    QMetaObject::invokeMethod(parent(), "Enable");
}

void IBusEngineAdaptor::FocusIn()
{
    // handle method call org.freedesktop.IBus.Engine.FocusIn
    QMetaObject::invokeMethod(parent(), "FocusIn");
}

void IBusEngineAdaptor::FocusOut()
{
    // handle method call org.freedesktop.IBus.Engine.FocusOut
    QMetaObject::invokeMethod(parent(), "FocusOut");
}

void IBusEngineAdaptor::PageDown()
{
    // handle method call org.freedesktop.IBus.Engine.PageDown
    QMetaObject::invokeMethod(parent(), "PageDown");
}

void IBusEngineAdaptor::PageUp()
{
    // handle method call org.freedesktop.IBus.Engine.PageUp
    QMetaObject::invokeMethod(parent(), "PageUp");
}

bool IBusEngineAdaptor::ProcessKeyEvent(uint keyval, uint keycode, uint state)
{
    // handle method call org.freedesktop.IBus.Engine.ProcessKeyEvent
    bool out0;
    QMetaObject::invokeMethod(parent(), "ProcessKeyEvent", Q_RETURN_ARG(bool, out0), Q_ARG(uint, keyval), Q_ARG(uint, keycode), Q_ARG(uint, state));
    return out0;
}

void IBusEngineAdaptor::PropertyActivate(const QString &prop_name, int prop_state)
{
    // handle method call org.freedesktop.IBus.Engine.PropertyActivate
    QMetaObject::invokeMethod(parent(), "PropertyActivate", Q_ARG(QString, prop_name), Q_ARG(int, prop_state));
}

void IBusEngineAdaptor::PropertyHide(const QString &prop_name)
{
    // handle method call org.freedesktop.IBus.Engine.PropertyHide
    QMetaObject::invokeMethod(parent(), "PropertyHide", Q_ARG(QString, prop_name));
}

void IBusEngineAdaptor::PropertyShow(const QString &prop_name)
{
    // handle method call org.freedesktop.IBus.Engine.PropertyShow
    QMetaObject::invokeMethod(parent(), "PropertyShow", Q_ARG(QString, prop_name));
}

void IBusEngineAdaptor::Reset()
{
    // handle method call org.freedesktop.IBus.Engine.Reset
    QMetaObject::invokeMethod(parent(), "Reset");
}

void IBusEngineAdaptor::SetCapabilities(uint cap)
{
    // handle method call org.freedesktop.IBus.Engine.SetCapabilities
    QMetaObject::invokeMethod(parent(), "SetCapabilities", Q_ARG(uint, cap));
}

void IBusEngineAdaptor::SetCursorLocation(int x, int y, int w, int h)
{
    // handle method call org.freedesktop.IBus.Engine.SetCursorLocation
    QMetaObject::invokeMethod(parent(), "SetCursorLocation", Q_ARG(int, x), Q_ARG(int, y), Q_ARG(int, w), Q_ARG(int, h));
}

