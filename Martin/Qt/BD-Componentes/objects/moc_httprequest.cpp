/****************************************************************************
** Meta object code from reading C++ file 'httprequest.h'
**
** Created: Mon 2. Dec 18:59:36 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../SiTTuGAs/SharedMemory/httprequest.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httprequest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HTTPRequest[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      23,   12,   12,   12, 0x08,
      38,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_HTTPRequest[] = {
    "HTTPRequest\0\0Refresh()\0HTTPFinished()\0"
    "HTTPReadyRead()\0"
};

void HTTPRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        HTTPRequest *_t = static_cast<HTTPRequest *>(_o);
        switch (_id) {
        case 0: _t->Refresh(); break;
        case 1: _t->HTTPFinished(); break;
        case 2: _t->HTTPReadyRead(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData HTTPRequest::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject HTTPRequest::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_HTTPRequest,
      qt_meta_data_HTTPRequest, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HTTPRequest::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HTTPRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HTTPRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HTTPRequest))
        return static_cast<void*>(const_cast< HTTPRequest*>(this));
    return QWidget::qt_metacast(_clname);
}

int HTTPRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void HTTPRequest::Refresh()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
