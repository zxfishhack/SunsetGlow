/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: SGCompute.SR.proto */

#ifndef PROTOBUF_C_SGCompute_2eSR_2eproto__INCLUDED
#define PROTOBUF_C_SGCompute_2eSR_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _SGCompute__SR__WorkInfo SGCompute__SR__WorkInfo;
typedef struct _SGCompute__SR__WorkInfo__FileInfo SGCompute__SR__WorkInfo__FileInfo;
typedef struct _SGCompute__SR__RunInfo SGCompute__SR__RunInfo;
typedef struct _SGCompute__SR__RunInfo__Unit SGCompute__SR__RunInfo__Unit;
typedef struct _SGCompute__SR__ResultInfo SGCompute__SR__ResultInfo;
typedef struct _SGCompute__SR__RegistorInfo SGCompute__SR__RegistorInfo;


/* --- enums --- */

typedef enum _SGCompute__SR__WorkInfo__TYPE {
  SGCOMPUTE__SR__WORK_INFO__TYPE__MAP = 0,
  SGCOMPUTE__SR__WORK_INFO__TYPE__REDUCE = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(SGCOMPUTE__SR__WORK_INFO__TYPE)
} SGCompute__SR__WorkInfo__TYPE;
typedef enum _SGCompute__SR__ResultInfo__STATUS {
  SGCOMPUTE__SR__RESULT_INFO__STATUS__SUCCESS = 0,
  SGCOMPUTE__SR__RESULT_INFO__STATUS__FAILED = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(SGCOMPUTE__SR__RESULT_INFO__STATUS)
} SGCompute__SR__ResultInfo__STATUS;
typedef enum _SGCompute__SR__RegistorInfo__TYPE {
  SGCOMPUTE__SR__REGISTOR_INFO__TYPE__LOCAL = 0,
  SGCOMPUTE__SR__REGISTOR_INFO__TYPE__TCP = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(SGCOMPUTE__SR__REGISTOR_INFO__TYPE)
} SGCompute__SR__RegistorInfo__TYPE;

/* --- messages --- */

struct  _SGCompute__SR__WorkInfo__FileInfo
{
  ProtobufCMessage base;
  size_t n_key_dimesion;
  uint32_t *key_dimesion;
  char *path;
  char *type;
};
#define SGCOMPUTE__SR__WORK_INFO__FILE_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sgcompute__sr__work_info__file_info__descriptor) \
    , 0,NULL, NULL, NULL }


struct  _SGCompute__SR__WorkInfo
{
  ProtobufCMessage base;
  size_t n_inputs;
  SGCompute__SR__WorkInfo__FileInfo **inputs;
  SGCompute__SR__WorkInfo__FileInfo *output;
  SGCompute__SR__WorkInfo__TYPE type;
  char *formula;
  char *inputtypes;
  char *parameters;
};
#define SGCOMPUTE__SR__WORK_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sgcompute__sr__work_info__descriptor) \
    , 0,NULL, NULL, SGCOMPUTE__SR__WORK_INFO__TYPE__MAP, NULL, NULL, NULL }


struct  _SGCompute__SR__RunInfo__Unit
{
  ProtobufCMessage base;
  size_t n_inputkeys;
  uint32_t *inputkeys;
  size_t n_outputkeys;
  uint32_t *outputkeys;
};
#define SGCOMPUTE__SR__RUN_INFO__UNIT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sgcompute__sr__run_info__unit__descriptor) \
    , 0,NULL, 0,NULL }


struct  _SGCompute__SR__RunInfo
{
  ProtobufCMessage base;
  size_t n_work_content;
  SGCompute__SR__RunInfo__Unit **work_content;
  uint64_t work_magic;
};
#define SGCOMPUTE__SR__RUN_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sgcompute__sr__run_info__descriptor) \
    , 0,NULL, 0 }


struct  _SGCompute__SR__ResultInfo
{
  ProtobufCMessage base;
  SGCompute__SR__ResultInfo__STATUS status;
  char *message;
  uint64_t magic;
};
#define SGCOMPUTE__SR__RESULT_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sgcompute__sr__result_info__descriptor) \
    , SGCOMPUTE__SR__RESULT_INFO__STATUS__SUCCESS, NULL, 0 }


struct  _SGCompute__SR__RegistorInfo
{
  ProtobufCMessage base;
  char *info;
  SGCompute__SR__RegistorInfo__TYPE type;
};
#define SGCOMPUTE__SR__REGISTOR_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&sgcompute__sr__registor_info__descriptor) \
    , NULL, SGCOMPUTE__SR__REGISTOR_INFO__TYPE__LOCAL }


/* SGCompute__SR__WorkInfo__FileInfo methods */
void   sgcompute__sr__work_info__file_info__init
                     (SGCompute__SR__WorkInfo__FileInfo         *message);
/* SGCompute__SR__WorkInfo methods */
void   sgcompute__sr__work_info__init
                     (SGCompute__SR__WorkInfo         *message);
size_t sgcompute__sr__work_info__get_packed_size
                     (const SGCompute__SR__WorkInfo   *message);
size_t sgcompute__sr__work_info__pack
                     (const SGCompute__SR__WorkInfo   *message,
                      uint8_t             *out);
size_t sgcompute__sr__work_info__pack_to_buffer
                     (const SGCompute__SR__WorkInfo   *message,
                      ProtobufCBuffer     *buffer);
SGCompute__SR__WorkInfo *
       sgcompute__sr__work_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sgcompute__sr__work_info__free_unpacked
                     (SGCompute__SR__WorkInfo *message,
                      ProtobufCAllocator *allocator);
/* SGCompute__SR__RunInfo__Unit methods */
void   sgcompute__sr__run_info__unit__init
                     (SGCompute__SR__RunInfo__Unit         *message);
/* SGCompute__SR__RunInfo methods */
void   sgcompute__sr__run_info__init
                     (SGCompute__SR__RunInfo         *message);
size_t sgcompute__sr__run_info__get_packed_size
                     (const SGCompute__SR__RunInfo   *message);
size_t sgcompute__sr__run_info__pack
                     (const SGCompute__SR__RunInfo   *message,
                      uint8_t             *out);
size_t sgcompute__sr__run_info__pack_to_buffer
                     (const SGCompute__SR__RunInfo   *message,
                      ProtobufCBuffer     *buffer);
SGCompute__SR__RunInfo *
       sgcompute__sr__run_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sgcompute__sr__run_info__free_unpacked
                     (SGCompute__SR__RunInfo *message,
                      ProtobufCAllocator *allocator);
/* SGCompute__SR__ResultInfo methods */
void   sgcompute__sr__result_info__init
                     (SGCompute__SR__ResultInfo         *message);
size_t sgcompute__sr__result_info__get_packed_size
                     (const SGCompute__SR__ResultInfo   *message);
size_t sgcompute__sr__result_info__pack
                     (const SGCompute__SR__ResultInfo   *message,
                      uint8_t             *out);
size_t sgcompute__sr__result_info__pack_to_buffer
                     (const SGCompute__SR__ResultInfo   *message,
                      ProtobufCBuffer     *buffer);
SGCompute__SR__ResultInfo *
       sgcompute__sr__result_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sgcompute__sr__result_info__free_unpacked
                     (SGCompute__SR__ResultInfo *message,
                      ProtobufCAllocator *allocator);
/* SGCompute__SR__RegistorInfo methods */
void   sgcompute__sr__registor_info__init
                     (SGCompute__SR__RegistorInfo         *message);
size_t sgcompute__sr__registor_info__get_packed_size
                     (const SGCompute__SR__RegistorInfo   *message);
size_t sgcompute__sr__registor_info__pack
                     (const SGCompute__SR__RegistorInfo   *message,
                      uint8_t             *out);
size_t sgcompute__sr__registor_info__pack_to_buffer
                     (const SGCompute__SR__RegistorInfo   *message,
                      ProtobufCBuffer     *buffer);
SGCompute__SR__RegistorInfo *
       sgcompute__sr__registor_info__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   sgcompute__sr__registor_info__free_unpacked
                     (SGCompute__SR__RegistorInfo *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*SGCompute__SR__WorkInfo__FileInfo_Closure)
                 (const SGCompute__SR__WorkInfo__FileInfo *message,
                  void *closure_data);
typedef void (*SGCompute__SR__WorkInfo_Closure)
                 (const SGCompute__SR__WorkInfo *message,
                  void *closure_data);
typedef void (*SGCompute__SR__RunInfo__Unit_Closure)
                 (const SGCompute__SR__RunInfo__Unit *message,
                  void *closure_data);
typedef void (*SGCompute__SR__RunInfo_Closure)
                 (const SGCompute__SR__RunInfo *message,
                  void *closure_data);
typedef void (*SGCompute__SR__ResultInfo_Closure)
                 (const SGCompute__SR__ResultInfo *message,
                  void *closure_data);
typedef void (*SGCompute__SR__RegistorInfo_Closure)
                 (const SGCompute__SR__RegistorInfo *message,
                  void *closure_data);

/* --- services --- */

typedef struct _SGCompute__SR__ComputeResponser_Service SGCompute__SR__ComputeResponser_Service;
struct _SGCompute__SR__ComputeResponser_Service
{
  ProtobufCService base;
  void (*create_work)(SGCompute__SR__ComputeResponser_Service *service,
                      const SGCompute__SR__WorkInfo *input,
                      SGCompute__SR__ResultInfo_Closure closure,
                      void *closure_data);
  void (*run_work)(SGCompute__SR__ComputeResponser_Service *service,
                   const SGCompute__SR__RunInfo *input,
                   SGCompute__SR__ResultInfo_Closure closure,
                   void *closure_data);
  void (*release_work)(SGCompute__SR__ComputeResponser_Service *service,
                       const SGCompute__SR__ResultInfo *input,
                       SGCompute__SR__ResultInfo_Closure closure,
                       void *closure_data);
};
typedef void (*SGCompute__SR__ComputeResponser_ServiceDestroy)(SGCompute__SR__ComputeResponser_Service *);
void sgcompute__sr__compute_responser__init (SGCompute__SR__ComputeResponser_Service *service,
                                             SGCompute__SR__ComputeResponser_ServiceDestroy destroy);
#define SGCOMPUTE__SR__COMPUTE_RESPONSER__BASE_INIT \
    { &sgcompute__sr__compute_responser__descriptor, protobuf_c_service_invoke_internal, NULL }
#define SGCOMPUTE__SR__COMPUTE_RESPONSER__INIT(function_prefix__) \
    { SGCOMPUTE__SR__COMPUTE_RESPONSER__BASE_INIT,\
      function_prefix__ ## create_work,\
      function_prefix__ ## run_work,\
      function_prefix__ ## release_work  }
void sgcompute__sr__compute_responser__create_work(ProtobufCService *service,
                                                   const SGCompute__SR__WorkInfo *input,
                                                   SGCompute__SR__ResultInfo_Closure closure,
                                                   void *closure_data);
void sgcompute__sr__compute_responser__run_work(ProtobufCService *service,
                                                const SGCompute__SR__RunInfo *input,
                                                SGCompute__SR__ResultInfo_Closure closure,
                                                void *closure_data);
void sgcompute__sr__compute_responser__release_work(ProtobufCService *service,
                                                    const SGCompute__SR__ResultInfo *input,
                                                    SGCompute__SR__ResultInfo_Closure closure,
                                                    void *closure_data);
typedef struct _SGCompute__SR__ComputeServerWaiter_Service SGCompute__SR__ComputeServerWaiter_Service;
struct _SGCompute__SR__ComputeServerWaiter_Service
{
  ProtobufCService base;
  void (*report_success)(SGCompute__SR__ComputeServerWaiter_Service *service,
                         const SGCompute__SR__ResultInfo *input,
                         SGCompute__SR__ResultInfo_Closure closure,
                         void *closure_data);
  void (*registor)(SGCompute__SR__ComputeServerWaiter_Service *service,
                   const SGCompute__SR__RegistorInfo *input,
                   SGCompute__SR__ResultInfo_Closure closure,
                   void *closure_data);
};
typedef void (*SGCompute__SR__ComputeServerWaiter_ServiceDestroy)(SGCompute__SR__ComputeServerWaiter_Service *);
void sgcompute__sr__compute_server_waiter__init (SGCompute__SR__ComputeServerWaiter_Service *service,
                                                 SGCompute__SR__ComputeServerWaiter_ServiceDestroy destroy);
#define SGCOMPUTE__SR__COMPUTE_SERVER_WAITER__BASE_INIT \
    { &sgcompute__sr__compute_server_waiter__descriptor, protobuf_c_service_invoke_internal, NULL }
#define SGCOMPUTE__SR__COMPUTE_SERVER_WAITER__INIT(function_prefix__) \
    { SGCOMPUTE__SR__COMPUTE_SERVER_WAITER__BASE_INIT,\
      function_prefix__ ## report_success,\
      function_prefix__ ## registor  }
void sgcompute__sr__compute_server_waiter__report_success(ProtobufCService *service,
                                                          const SGCompute__SR__ResultInfo *input,
                                                          SGCompute__SR__ResultInfo_Closure closure,
                                                          void *closure_data);
void sgcompute__sr__compute_server_waiter__registor(ProtobufCService *service,
                                                    const SGCompute__SR__RegistorInfo *input,
                                                    SGCompute__SR__ResultInfo_Closure closure,
                                                    void *closure_data);

/* --- descriptors --- */

extern const ProtobufCMessageDescriptor sgcompute__sr__work_info__descriptor;
extern const ProtobufCMessageDescriptor sgcompute__sr__work_info__file_info__descriptor;
extern const ProtobufCEnumDescriptor    sgcompute__sr__work_info__type__descriptor;
extern const ProtobufCMessageDescriptor sgcompute__sr__run_info__descriptor;
extern const ProtobufCMessageDescriptor sgcompute__sr__run_info__unit__descriptor;
extern const ProtobufCMessageDescriptor sgcompute__sr__result_info__descriptor;
extern const ProtobufCEnumDescriptor    sgcompute__sr__result_info__status__descriptor;
extern const ProtobufCMessageDescriptor sgcompute__sr__registor_info__descriptor;
extern const ProtobufCEnumDescriptor    sgcompute__sr__registor_info__type__descriptor;
extern const ProtobufCServiceDescriptor sgcompute__sr__compute_responser__descriptor;
extern const ProtobufCServiceDescriptor sgcompute__sr__compute_server_waiter__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_SGCompute_2eSR_2eproto__INCLUDED */
