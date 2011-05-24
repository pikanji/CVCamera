/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.31
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */


#ifdef __cplusplus
template<class T> class SwigValueWrapper {
    T *tt;
public:
    SwigValueWrapper() : tt(0) { }
    SwigValueWrapper(const SwigValueWrapper<T>& rhs) : tt(new T(*rhs.tt)) { }
    SwigValueWrapper(const T& t) : tt(new T(t)) { }
    ~SwigValueWrapper() { delete tt; } 
    SwigValueWrapper& operator=(const T& t) { delete tt; tt = new T(t); return *this; }
    operator T&() const { return *tt; }
    T *operator&() { return tt; }
private:
    SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
};
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC)
#   if (__SUNPRO_CC <= 0x560)
#     define SWIGTEMPLATEDISAMBIGUATOR template
#   else
#     define SWIGTEMPLATEDISAMBIGUATOR 
#   endif
# else
#   define SWIGTEMPLATEDISAMBIGUATOR 
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__)) 
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__)) 
# else
#   define SWIGUNUSED 
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED 
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif 
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTELC__)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" } };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include "Processor.h"
#include "image_pool.h"
using namespace cv;


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jint JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_DETECT_1FAST_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int) 0;
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_DETECT_1STAR_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int) 1;
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_DETECT_1SURF_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int) 2;
  
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_new_1Processor(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  Processor *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (Processor *)new Processor();
  *(Processor **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_delete_1Processor(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  Processor *arg1 = (Processor *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(Processor **)&jarg1; 
  delete arg1;
  
}


SWIGEXPORT void JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_Processor_1detectAndDrawFeatures(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jlong jarg3, jobject jarg3_, jint jarg4) {
  Processor *arg1 = (Processor *) 0 ;
  int arg2 ;
  image_pool *arg3 = (image_pool *) 0 ;
  int arg4 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg3_;
  arg1 = *(Processor **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = *(image_pool **)&jarg3; 
  arg4 = (int)jarg4; 
  (arg1)->detectAndDrawFeatures(arg2,arg3,arg4);
}


SWIGEXPORT jboolean JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_Processor_1detectAndDrawChessboard(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jlong jarg3, jobject jarg3_) {
  jboolean jresult = 0 ;
  Processor *arg1 = (Processor *) 0 ;
  int arg2 ;
  image_pool *arg3 = (image_pool *) 0 ;
  bool result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg3_;
  arg1 = *(Processor **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = *(image_pool **)&jarg3; 
  result = (bool)(arg1)->detectAndDrawChessboard(arg2,arg3);
  jresult = (jboolean)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_Processor_1resetChess(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  Processor *arg1 = (Processor *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Processor **)&jarg1; 
  (arg1)->resetChess();
}


SWIGEXPORT jint JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_Processor_1getNumberDetectedChessboards(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Processor *arg1 = (Processor *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Processor **)&jarg1; 
  result = (int)(arg1)->getNumberDetectedChessboards();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_Processor_1calibrate(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  Processor *arg1 = (Processor *) 0 ;
  char *arg2 = (char *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Processor **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)jenv->GetStringUTFChars(jarg2, 0);
    if (!arg2) return ;
  }
  (arg1)->calibrate((char const *)arg2);
  if (arg2) jenv->ReleaseStringUTFChars(jarg2, (const char *)arg2);
}


SWIGEXPORT void JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_Processor_1drawText(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2, jlong jarg3, jobject jarg3_, jstring jarg4) {
  Processor *arg1 = (Processor *) 0 ;
  int arg2 ;
  image_pool *arg3 = (image_pool *) 0 ;
  char *arg4 = (char *) 0 ;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  (void)jarg3_;
  arg1 = *(Processor **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = *(image_pool **)&jarg3; 
  arg4 = 0;
  if (jarg4) {
    arg4 = (char *)jenv->GetStringUTFChars(jarg4, 0);
    if (!arg4) return ;
  }
  (arg1)->drawText(arg2,arg3,(char const *)arg4);
  if (arg4) jenv->ReleaseStringUTFChars(jarg4, (const char *)arg4);
}


SWIGEXPORT jint JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_Processor_1getCenterXvec(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Processor *arg1 = (Processor *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Processor **)&jarg1; 
  result = (int)(arg1)->getCenterXvec();
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_theveganrobot_cvcamera_jni_cvcameraJNI_Processor_1getCenterYvec(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  Processor *arg1 = (Processor *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(Processor **)&jarg1; 
  result = (int)(arg1)->getCenterYvec();
  jresult = (jint)result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

