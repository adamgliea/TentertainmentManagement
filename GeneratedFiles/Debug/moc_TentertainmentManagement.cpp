/****************************************************************************
** Meta object code from reading C++ file 'TentertainmentManagement.h'
**
** Created: Thu Jan 10 13:52:51 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Main/TentertainmentManagement.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TentertainmentManagement.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_YR2K__TentertainmentManagement[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      32,   31,   31,   31, 0x08,
      39,   31,   31,   31, 0x08,
      47,   31,   31,   31, 0x08,
      54,   31,   31,   31, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_YR2K__TentertainmentManagement[] = {
    "YR2K::TentertainmentManagement\0\0save()\0"
    "print()\0undo()\0about()\0"
};

void YR2K::TentertainmentManagement::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        TentertainmentManagement *_t = static_cast<TentertainmentManagement *>(_o);
        switch (_id) {
        case 0: _t->save(); break;
        case 1: _t->print(); break;
        case 2: _t->undo(); break;
        case 3: _t->about(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData YR2K::TentertainmentManagement::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject YR2K::TentertainmentManagement::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_YR2K__TentertainmentManagement,
      qt_meta_data_YR2K__TentertainmentManagement, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &YR2K::TentertainmentManagement::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *YR2K::TentertainmentManagement::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *YR2K::TentertainmentManagement::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_YR2K__TentertainmentManagement))
        return static_cast<void*>(const_cast< TentertainmentManagement*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int YR2K::TentertainmentManagement::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
