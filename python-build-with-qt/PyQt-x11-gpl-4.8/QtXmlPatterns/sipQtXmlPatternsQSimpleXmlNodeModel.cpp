/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:04:00 2012
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

#include "sipAPIQtXmlPatterns.h"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qsimplexmlnodemodel.sip"
#include <qsimplexmlnodemodel.h>
#line 39 "sipQtXmlPatternsQSimpleXmlNodeModel.cpp"

#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qxmlnamepool.sip"
#include <qxmlnamepool.h>
#line 43 "sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvector.sip"
#include <qvector.h>
#line 46 "sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 49 "sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qxmlname.sip"
#include <qxmlname.h>
#line 52 "sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 55 "sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvector.sip"
#include <qvector.h>
#line 58 "sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 61 "sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 91 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 64 "sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 38 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtXmlPatterns/qsourcelocation.sip"
#include <qsourcelocation.h>
#line 67 "sipQtXmlPatternsQSimpleXmlNodeModel.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 70 "sipQtXmlPatternsQSimpleXmlNodeModel.cpp"


class sipQSimpleXmlNodeModel : public QSimpleXmlNodeModel
{
public:
    sipQSimpleXmlNodeModel(const QXmlNamePool&);
    virtual ~sipQSimpleXmlNodeModel();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QXmlNodeModelIndex sipProtect_nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis,const QXmlNodeModelIndex&) const;
    QVector<QXmlNodeModelIndex> sipProtect_attributes(const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex sipProtect_createIndex(qint64) const;
    QXmlNodeModelIndex sipProtect_createIndex(qint64,qint64) const;
    QXmlNodeModelIndex sipProtect_createIndex(void *,qint64) const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QUrl baseUri(const QXmlNodeModelIndex&) const;
    QVector<QXmlName> namespaceBindings(const QXmlNodeModelIndex&) const;
    QString stringValue(const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex elementById(const QXmlName&) const;
    QVector<QXmlNodeModelIndex> nodesByIdref(const QXmlName&) const;
    QUrl documentUri(const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex::NodeKind kind(const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex::DocumentOrder compareOrder(const QXmlNodeModelIndex&,const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex root(const QXmlNodeModelIndex&) const;
    QXmlName name(const QXmlNodeModelIndex&) const;
    QVariant typedValue(const QXmlNodeModelIndex&) const;
    QXmlNodeModelIndex nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis,const QXmlNodeModelIndex&) const;
    QVector<QXmlNodeModelIndex> attributes(const QXmlNodeModelIndex&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSimpleXmlNodeModel(const sipQSimpleXmlNodeModel &);
    sipQSimpleXmlNodeModel &operator = (const sipQSimpleXmlNodeModel &);

    char sipPyMethods[13];
};

sipQSimpleXmlNodeModel::sipQSimpleXmlNodeModel(const QXmlNamePool& a0): QSimpleXmlNodeModel(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSimpleXmlNodeModel::~sipQSimpleXmlNodeModel()
{
    sipCommonDtor(sipPySelf);
}

QUrl sipQSimpleXmlNodeModel::baseUri(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_baseUri);

    if (!meth)
        return QSimpleXmlNodeModel::baseUri(a0);

    extern QUrl sipVH_QtXmlPatterns_8(sip_gilstate_t,PyObject *,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_8(sipGILState,meth,a0);
}

QVector<QXmlName> sipQSimpleXmlNodeModel::namespaceBindings(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_namespaceBindings);

    if (!meth)
        return QSimpleXmlNodeModel::namespaceBindings(a0);

    extern QVector<QXmlName> sipVH_QtXmlPatterns_7(sip_gilstate_t,PyObject *,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_7(sipGILState,meth,a0);
}

QString sipQSimpleXmlNodeModel::stringValue(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_stringValue);

    if (!meth)
        return QSimpleXmlNodeModel::stringValue(a0);

    extern QString sipVH_QtXmlPatterns_6(sip_gilstate_t,PyObject *,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_6(sipGILState,meth,a0);
}

QXmlNodeModelIndex sipQSimpleXmlNodeModel::elementById(const QXmlName& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_elementById);

    if (!meth)
        return QSimpleXmlNodeModel::elementById(a0);

    extern QXmlNodeModelIndex sipVH_QtXmlPatterns_5(sip_gilstate_t,PyObject *,const QXmlName&);

    return sipVH_QtXmlPatterns_5(sipGILState,meth,a0);
}

QVector<QXmlNodeModelIndex> sipQSimpleXmlNodeModel::nodesByIdref(const QXmlName& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,NULL,sipName_nodesByIdref);

    if (!meth)
        return QSimpleXmlNodeModel::nodesByIdref(a0);

    extern QVector<QXmlNodeModelIndex> sipVH_QtXmlPatterns_4(sip_gilstate_t,PyObject *,const QXmlName&);

    return sipVH_QtXmlPatterns_4(sipGILState,meth,a0);
}

QUrl sipQSimpleXmlNodeModel::documentUri(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_documentUri);

    if (!meth)
        return QUrl();

    extern QUrl sipVH_QtXmlPatterns_8(sip_gilstate_t,PyObject *,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_8(sipGILState,meth,a0);
}

QXmlNodeModelIndex::NodeKind sipQSimpleXmlNodeModel::kind(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_kind);

    if (!meth)
        return (QXmlNodeModelIndex::NodeKind)0;

    extern QXmlNodeModelIndex::NodeKind sipVH_QtXmlPatterns_15(sip_gilstate_t,PyObject *,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_15(sipGILState,meth,a0);
}

QXmlNodeModelIndex::DocumentOrder sipQSimpleXmlNodeModel::compareOrder(const QXmlNodeModelIndex& a0,const QXmlNodeModelIndex& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_compareOrder);

    if (!meth)
        return (QXmlNodeModelIndex::DocumentOrder)0;

    extern QXmlNodeModelIndex::DocumentOrder sipVH_QtXmlPatterns_14(sip_gilstate_t,PyObject *,const QXmlNodeModelIndex&,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_14(sipGILState,meth,a0,a1);
}

QXmlNodeModelIndex sipQSimpleXmlNodeModel::root(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_root);

    if (!meth)
        return QXmlNodeModelIndex();

    extern QXmlNodeModelIndex sipVH_QtXmlPatterns_13(sip_gilstate_t,PyObject *,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_13(sipGILState,meth,a0);
}

QXmlName sipQSimpleXmlNodeModel::name(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_name);

    if (!meth)
        return QXmlName();

    extern QXmlName sipVH_QtXmlPatterns_12(sip_gilstate_t,PyObject *,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_12(sipGILState,meth,a0);
}

QVariant sipQSimpleXmlNodeModel::typedValue(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_typedValue);

    if (!meth)
        return QVariant();

    extern QVariant sipVH_QtXmlPatterns_11(sip_gilstate_t,PyObject *,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_11(sipGILState,meth,a0);
}

QXmlNodeModelIndex sipQSimpleXmlNodeModel::nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis a0,const QXmlNodeModelIndex& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[11]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_nextFromSimpleAxis);

    if (!meth)
        return QXmlNodeModelIndex();

    extern QXmlNodeModelIndex sipVH_QtXmlPatterns_10(sip_gilstate_t,PyObject *,QAbstractXmlNodeModel::SimpleAxis,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_10(sipGILState,meth,a0,a1);
}

QVector<QXmlNodeModelIndex> sipQSimpleXmlNodeModel::attributes(const QXmlNodeModelIndex& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QSimpleXmlNodeModel,sipName_attributes);

    if (!meth)
        return QVector<QXmlNodeModelIndex>();

    extern QVector<QXmlNodeModelIndex> sipVH_QtXmlPatterns_9(sip_gilstate_t,PyObject *,const QXmlNodeModelIndex&);

    return sipVH_QtXmlPatterns_9(sipGILState,meth,a0);
}

QXmlNodeModelIndex sipQSimpleXmlNodeModel::sipProtect_nextFromSimpleAxis(QAbstractXmlNodeModel::SimpleAxis a0,const QXmlNodeModelIndex& a1) const
{
    return nextFromSimpleAxis(a0,a1);
}

QVector<QXmlNodeModelIndex> sipQSimpleXmlNodeModel::sipProtect_attributes(const QXmlNodeModelIndex& a0) const
{
    return attributes(a0);
}

QXmlNodeModelIndex sipQSimpleXmlNodeModel::sipProtect_createIndex(qint64 a0) const
{
    return QAbstractXmlNodeModel::createIndex(a0);
}

QXmlNodeModelIndex sipQSimpleXmlNodeModel::sipProtect_createIndex(qint64 a0,qint64 a1) const
{
    return QAbstractXmlNodeModel::createIndex(a0,a1);
}

QXmlNodeModelIndex sipQSimpleXmlNodeModel::sipProtect_createIndex(void *a0,qint64 a1) const
{
    return QAbstractXmlNodeModel::createIndex(a0,a1);
}


extern "C" {static PyObject *meth_QSimpleXmlNodeModel_nextFromSimpleAxis(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_nextFromSimpleAxis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractXmlNodeModel::SimpleAxis a0;
        const QXmlNodeModelIndex * a1;
        sipQSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ9", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, sipType_QAbstractXmlNodeModel_SimpleAxis, &a0, sipType_QXmlNodeModelIndex, &a1))
        {
            QXmlNodeModelIndex *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSimpleXmlNodeModel, sipName_nextFromSimpleAxis);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex(sipCpp->sipProtect_nextFromSimpleAxis(a0,*a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_nextFromSimpleAxis, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSimpleXmlNodeModel_attributes(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_attributes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlNodeModelIndex * a0;
        sipQSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QVector<QXmlNodeModelIndex> *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QSimpleXmlNodeModel, sipName_attributes);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector<QXmlNodeModelIndex>(sipCpp->sipProtect_attributes(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_attributes, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSimpleXmlNodeModel_createIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_createIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        sipQSimpleXmlNodeModel *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "Bn", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, &a0))
        {
            QXmlNodeModelIndex *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex(sipCpp->sipProtect_createIndex(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    {
        qint64 a0;
        qint64 a1;
        sipQSimpleXmlNodeModel *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "Bnn", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, &a0, &a1))
        {
            QXmlNodeModelIndex *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex(sipCpp->sipProtect_createIndex(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    {
        PyObject * a0;
        qint64 a1 = 0;
        sipQSimpleXmlNodeModel *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_additionalData,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BP0|n", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, &a0, &a1))
        {
            QXmlNodeModelIndex *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex(sipCpp->sipProtect_createIndex(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_createIndex, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSimpleXmlNodeModel_baseUri(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_baseUri(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlNodeModelIndex * a0;
        QSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QUrl *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl((sipSelfWasArg ? sipCpp->QSimpleXmlNodeModel::baseUri(*a0) : sipCpp->baseUri(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_baseUri, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSimpleXmlNodeModel_namePool(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_namePool(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp))
        {
            QXmlNamePool *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = &sipCpp->namePool();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QXmlNamePool,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_namePool, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSimpleXmlNodeModel_namespaceBindings(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_namespaceBindings(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlNodeModelIndex * a0;
        QSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QVector<QXmlName> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector<QXmlName>((sipSelfWasArg ? sipCpp->QSimpleXmlNodeModel::namespaceBindings(*a0) : sipCpp->namespaceBindings(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QXmlName,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_namespaceBindings, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSimpleXmlNodeModel_stringValue(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_stringValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlNodeModelIndex * a0;
        QSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, sipType_QXmlNodeModelIndex, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString((sipSelfWasArg ? sipCpp->QSimpleXmlNodeModel::stringValue(*a0) : sipCpp->stringValue(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_stringValue, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSimpleXmlNodeModel_elementById(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_elementById(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlName * a0;
        QSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, sipType_QXmlName, &a0))
        {
            QXmlNodeModelIndex *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex((sipSelfWasArg ? sipCpp->QSimpleXmlNodeModel::elementById(*a0) : sipCpp->elementById(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_elementById, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QSimpleXmlNodeModel_nodesByIdref(PyObject *, PyObject *);}
static PyObject *meth_QSimpleXmlNodeModel_nodesByIdref(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QXmlName * a0;
        QSimpleXmlNodeModel *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSimpleXmlNodeModel, &sipCpp, sipType_QXmlName, &a0))
        {
            QVector<QXmlNodeModelIndex> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector<QXmlNodeModelIndex>((sipSelfWasArg ? sipCpp->QSimpleXmlNodeModel::nodesByIdref(*a0) : sipCpp->nodesByIdref(*a0)));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSimpleXmlNodeModel, sipName_nodesByIdref, NULL);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSimpleXmlNodeModel(void *, const sipTypeDef *);}
static void *cast_QSimpleXmlNodeModel(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSimpleXmlNodeModel)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QAbstractXmlNodeModel)->ctd_cast((QAbstractXmlNodeModel *)(QSimpleXmlNodeModel *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSimpleXmlNodeModel(void *, int);}
static void release_QSimpleXmlNodeModel(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSimpleXmlNodeModel *>(sipCppV);
    else
        delete reinterpret_cast<QSimpleXmlNodeModel *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSimpleXmlNodeModel(sipSimpleWrapper *);}
static void dealloc_QSimpleXmlNodeModel(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSimpleXmlNodeModel *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSimpleXmlNodeModel(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_QSimpleXmlNodeModel(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QSimpleXmlNodeModel(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSimpleXmlNodeModel *sipCpp = 0;

    {
        const QXmlNamePool * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlNamePool, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSimpleXmlNodeModel(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSimpleXmlNodeModel[] = {{2, 255, 1}};


static PyMethodDef methods_QSimpleXmlNodeModel[] = {
    {SIP_MLNAME_CAST(sipName_attributes), meth_QSimpleXmlNodeModel_attributes, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_baseUri), meth_QSimpleXmlNodeModel_baseUri, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_createIndex), (PyCFunction)meth_QSimpleXmlNodeModel_createIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_elementById), meth_QSimpleXmlNodeModel_elementById, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_namePool), meth_QSimpleXmlNodeModel_namePool, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_namespaceBindings), meth_QSimpleXmlNodeModel_namespaceBindings, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_nextFromSimpleAxis), meth_QSimpleXmlNodeModel_nextFromSimpleAxis, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_nodesByIdref), meth_QSimpleXmlNodeModel_nodesByIdref, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_stringValue), meth_QSimpleXmlNodeModel_stringValue, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QSimpleXmlNodeModel = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QSimpleXmlNodeModel,
        {0}
    },
    {
        sipNameNr_QSimpleXmlNodeModel,
        {0, 0, 1},
        9, methods_QSimpleXmlNodeModel,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QSimpleXmlNodeModel,
    0,
    init_QSimpleXmlNodeModel,
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
    dealloc_QSimpleXmlNodeModel,
    0,
    0,
    0,
    release_QSimpleXmlNodeModel,
    cast_QSimpleXmlNodeModel,
    0,
    0,
    0
},
    0,
    0,
    0
};
