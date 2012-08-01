/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:15 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qvector2d.sip"
#include <qvector2d.h>
#line 39 "sipQtGuiQVector2D.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 43 "sipQtGuiQVector2D.cpp"
#line 92 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 46 "sipQtGuiQVector2D.cpp"
#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qvector3d.sip"
#include <qvector3d.h>
#line 49 "sipQtGuiQVector2D.cpp"
#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qvector4d.sip"
#include <qvector4d.h>
#line 52 "sipQtGuiQVector2D.cpp"


extern "C" {static PyObject *meth_QVector2D_length(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector2D, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->length();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_length, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_lengthSquared(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_lengthSquared(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector2D, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lengthSquared();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_lengthSquared, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_normalized(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_normalized(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector2D, &sipCpp))
        {
            QVector2D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector2D(sipCpp->normalized());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector2D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_normalized, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_normalize(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_normalize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector2D, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->normalize();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_normalize, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_dotProduct(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_dotProduct(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector2D * a0;
        const QVector2D * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J9", sipType_QVector2D, &a0, sipType_QVector2D, &a1))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QVector2D::dotProduct(*a0,*a1);
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_dotProduct, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_toVector3D(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_toVector3D(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector2D, &sipCpp))
        {
            QVector3D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector3D(sipCpp->toVector3D());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_toVector3D, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_toVector4D(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_toVector4D(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector2D, &sipCpp))
        {
            QVector4D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector4D(sipCpp->toVector4D());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector4D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_toVector4D, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_isNull(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector2D, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_isNull, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_x(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector2D, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->x();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_x, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_y(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector2D, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->y();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_y, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_setX(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_setX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QVector2D, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setX(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_setX, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_setY(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_setY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QVector2D, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setY(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_setY, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_toPoint(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_toPoint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector2D, &sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->toPoint());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_toPoint, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QVector2D_toPointF(PyObject *, PyObject *);}
static PyObject *meth_QVector2D_toPointF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVector2D *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVector2D, &sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->toPointF());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVector2D, sipName_toPointF, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QVector2D___eq__(PyObject *,PyObject *);}
static PyObject *slot_QVector2D___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QVector2D *sipCpp = reinterpret_cast<QVector2D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector2D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVector2D * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector2D, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator==((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QVector2D,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QVector2D___mul__(PyObject *,PyObject *);}
static PyObject *slot_QVector2D___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        const QVector2D * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "dJ9", &a0, sipType_QVector2D, &a1))
        {
            QVector2D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector2D((a0 * *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector2D,NULL);
        }
    }

    {
        const QVector2D * a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QVector2D, &a0, &a1))
        {
            QVector2D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector2D((*a0 * a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector2D,NULL);
        }
    }

    {
        const QVector2D * a0;
        const QVector2D * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QVector2D, &a0, sipType_QVector2D, &a1))
        {
            QVector2D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector2D((*a0 * *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector2D,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVector2D___div__(PyObject *,PyObject *);}
static PyObject *slot_QVector2D___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector2D * a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QVector2D, &a0, &a1))
        {
            QVector2D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector2D((*a0 / a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector2D,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVector2D___add__(PyObject *,PyObject *);}
static PyObject *slot_QVector2D___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector2D * a0;
        const QVector2D * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QVector2D, &a0, sipType_QVector2D, &a1))
        {
            QVector2D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector2D((*a0 + *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector2D,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVector2D___sub__(PyObject *,PyObject *);}
static PyObject *slot_QVector2D___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector2D * a0;
        const QVector2D * a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QVector2D, &a0, sipType_QVector2D, &a1))
        {
            QVector2D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector2D((*a0 - *a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector2D,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QVector2D___neg__(PyObject *);}
static PyObject *slot_QVector2D___neg__(PyObject *sipSelf)
{
    QVector2D *sipCpp = reinterpret_cast<QVector2D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector2D));

    if (!sipCpp)
        return 0;


    {
        {
            QVector2D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector2D(-(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector2D,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QVector2D___ne__(PyObject *,PyObject *);}
static PyObject *slot_QVector2D___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QVector2D *sipCpp = reinterpret_cast<QVector2D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector2D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVector2D * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector2D, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator!=((*sipCpp), *a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QVector2D,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QVector2D___idiv__(PyObject *,PyObject *);}
static PyObject *slot_QVector2D___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVector2D)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVector2D *sipCpp = reinterpret_cast<QVector2D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector2D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QVector2D::operator/=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QVector2D___imul__(PyObject *,PyObject *);}
static PyObject *slot_QVector2D___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVector2D)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVector2D *sipCpp = reinterpret_cast<QVector2D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector2D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QVector2D::operator*=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const QVector2D * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector2D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QVector2D::operator*=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QVector2D___isub__(PyObject *,PyObject *);}
static PyObject *slot_QVector2D___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVector2D)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVector2D *sipCpp = reinterpret_cast<QVector2D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector2D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVector2D * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector2D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QVector2D::operator-=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QVector2D___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QVector2D___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QVector2D)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QVector2D *sipCpp = reinterpret_cast<QVector2D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector2D));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QVector2D * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QVector2D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QVector2D::operator+=(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QVector2D___repr__(PyObject *);}
static PyObject *slot_QVector2D___repr__(PyObject *sipSelf)
{
    QVector2D *sipCpp = reinterpret_cast<QVector2D *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QVector2D));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 60 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qvector2d.sip"
        PyObject *x = PyFloat_FromDouble(sipCpp->x());
        PyObject *y = PyFloat_FromDouble(sipCpp->y());
        
        if (x && y)
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt4.QtGui.QVector2D(%R, %R)", x, y);
        #else
            sipRes = PyString_FromString("PyQt4.QtGui.QVector2D(");
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(x));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(y));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
        }
        
        Py_XDECREF(x);
        Py_XDECREF(y);
#line 890 "sipQtGuiQVector2D.cpp"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QVector2D(void *, const sipTypeDef *);}
static void *cast_QVector2D(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QVector2D)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QVector2D(void *, int);}
static void release_QVector2D(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QVector2D *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static PyObject *pickle_QVector2D(void *);}
static PyObject *pickle_QVector2D(void *sipCppV)
{
    QVector2D *sipCpp = reinterpret_cast<QVector2D *>(sipCppV);
    PyObject *sipRes;

#line 48 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qvector2d.sip"
    sipRes = Py_BuildValue((char *)"dd", sipCpp->x(), sipCpp->y());
#line 929 "sipQtGuiQVector2D.cpp"

    return sipRes;
}


extern "C" {static void assign_QVector2D(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector2D(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector2D *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector2D *>(sipSrc);
}


extern "C" {static void *array_QVector2D(SIP_SSIZE_T);}
static void *array_QVector2D(SIP_SSIZE_T sipNrElem)
{
    return new QVector2D[sipNrElem];
}


extern "C" {static void *copy_QVector2D(const void *, SIP_SSIZE_T);}
static void *copy_QVector2D(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector2D(reinterpret_cast<const QVector2D *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QVector2D(sipSimpleWrapper *);}
static void dealloc_QVector2D(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QVector2D(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QVector2D(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QVector2D(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QVector2D *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector2D();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        qreal a0;
        qreal a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "dd", &a0, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector2D(a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QPoint * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPoint, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector2D(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QPointF * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPointF, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector2D(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QVector3D * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QVector3D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector2D(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QVector4D * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QVector4D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector2D(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QVector2D * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QVector2D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVector2D(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QVector2D[] = {
    {(void *)slot_QVector2D___eq__, eq_slot},
    {(void *)slot_QVector2D___mul__, mul_slot},
    {(void *)slot_QVector2D___div__, div_slot},
    {(void *)slot_QVector2D___add__, add_slot},
    {(void *)slot_QVector2D___sub__, sub_slot},
    {(void *)slot_QVector2D___neg__, neg_slot},
    {(void *)slot_QVector2D___ne__, ne_slot},
    {(void *)slot_QVector2D___idiv__, idiv_slot},
    {(void *)slot_QVector2D___imul__, imul_slot},
    {(void *)slot_QVector2D___isub__, isub_slot},
    {(void *)slot_QVector2D___iadd__, iadd_slot},
    {(void *)slot_QVector2D___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QVector2D[] = {
    {SIP_MLNAME_CAST(sipName_dotProduct), meth_QVector2D_dotProduct, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QVector2D_isNull, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_length), meth_QVector2D_length, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_lengthSquared), meth_QVector2D_lengthSquared, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_normalize), meth_QVector2D_normalize, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_normalized), meth_QVector2D_normalized, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setX), meth_QVector2D_setX, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setY), meth_QVector2D_setY, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toPoint), meth_QVector2D_toPoint, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toPointF), meth_QVector2D_toPointF, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toVector3D), meth_QVector2D_toVector3D, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_toVector4D), meth_QVector2D_toVector4D, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_x), meth_QVector2D_x, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_y), meth_QVector2D_y, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QVector2D = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QVector2D,
        {0}
    },
    {
        sipNameNr_QVector2D,
        {0, 0, 1},
        14, methods_QVector2D,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QVector2D,
    init_QVector2D,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QVector2D,
    assign_QVector2D,
    array_QVector2D,
    copy_QVector2D,
    release_QVector2D,
    cast_QVector2D,
    0,
    0,
    pickle_QVector2D
},
    0,
    0,
    0
};
