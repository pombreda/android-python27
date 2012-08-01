/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:04 2012
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

#include "sipAPIQtCore.h"

#line 756 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 39 "sipQtCoreQList2400.cpp"



extern "C" {static void assign_QList_2400(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_2400(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<qreal> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<qreal> *>(sipSrc);
}


extern "C" {static void *array_QList_2400(SIP_SSIZE_T);}
static void *array_QList_2400(SIP_SSIZE_T sipNrElem)
{
    return new QList<qreal>[sipNrElem];
}


extern "C" {static void *copy_QList_2400(const void *, SIP_SSIZE_T);}
static void *copy_QList_2400(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<qreal>(reinterpret_cast<const QList<qreal> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_2400(void *, int);}
static void release_QList_2400(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<qreal> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_2400(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_2400(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<qreal> **sipCppPtr = reinterpret_cast<QList<qreal> **>(sipCppPtrV);

#line 785 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
        return (PySequence_Check(sipPy) && PySequence_Size(sipPy) >= 0);

    QList<qreal> *ql = new QList<qreal>;
    SIP_SSIZE_T len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);

        if (!itm)
        {
            delete ql;
            *sipIsErr = 1;

            return 0;
        }

        ql->append(PyFloat_AsDouble(itm));

        Py_DECREF(itm);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 108 "sipQtCoreQList2400.cpp"
}


extern "C" {static PyObject *convertFrom_QList_2400(void *, PyObject *);}
static PyObject *convertFrom_QList_2400(void *sipCppV,PyObject *)
{
   QList<qreal> *sipCpp = reinterpret_cast<QList<qreal> *>(sipCppV);

#line 760 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *pobj;

        if ((pobj = PyFloat_FromDouble(sipCpp->value(i))) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 140 "sipQtCoreQList2400.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_2400 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_28750,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_2400,
    array_QList_2400,
    copy_QList_2400,
    release_QList_2400,
    convertTo_QList_2400,
    convertFrom_QList_2400
};
