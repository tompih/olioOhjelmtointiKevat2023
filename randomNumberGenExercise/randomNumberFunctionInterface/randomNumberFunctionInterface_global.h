#ifndef RANDOMNUMBERFUNCTIONINTERFACE_GLOBAL_H
#define RANDOMNUMBERFUNCTIONINTERFACE_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RANDOMNUMBERFUNCTIONINTERFACE_LIBRARY)
#  define RANDOMNUMBERFUNCTIONINTERFACE_EXPORT Q_DECL_EXPORT
#else
#  define RANDOMNUMBERFUNCTIONINTERFACE_EXPORT Q_DECL_IMPORT
#endif

#endif // RANDOMNUMBERFUNCTIONINTERFACE_GLOBAL_H
