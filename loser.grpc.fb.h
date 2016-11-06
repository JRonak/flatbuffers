// Generated by the gRPC flatbuffers plugin.
// If you make any local change, they will be lost.
// source: loser
#ifndef GRPC_loser__INCLUDED
#define GRPC_loser__INCLUDED

#include "loser_generated.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace User2 {

class mate GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status hello(::grpc::ClientContext* context, const flatbuffers::BufferRef<logins>& request, flatbuffers::BufferRef<login>* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::BufferRef<login>>> Asynchello(::grpc::ClientContext* context, const flatbuffers::BufferRef<logins>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::BufferRef<login>>>(AsynchelloRaw(context, request, cq));
    }
    virtual ::grpc::Status bye(::grpc::ClientContext* context, const flatbuffers::BufferRef<logins>& request, flatbuffers::BufferRef<login>* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::BufferRef<login>>> Asyncbye(::grpc::ClientContext* context, const flatbuffers::BufferRef<logins>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::BufferRef<login>>>(AsyncbyeRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::BufferRef<login>>* AsynchelloRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<logins>& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::BufferRef<login>>* AsyncbyeRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<logins>& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status hello(::grpc::ClientContext* context, const flatbuffers::BufferRef<logins>& request, flatbuffers::BufferRef<login>* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<login>>> Asynchello(::grpc::ClientContext* context, const flatbuffers::BufferRef<logins>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<login>>>(AsynchelloRaw(context, request, cq));
    }
    ::grpc::Status bye(::grpc::ClientContext* context, const flatbuffers::BufferRef<logins>& request, flatbuffers::BufferRef<login>* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<login>>> Asyncbye(::grpc::ClientContext* context, const flatbuffers::BufferRef<logins>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<login>>>(AsyncbyeRaw(context, request, cq));
    }
  
   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<login>>* AsynchelloRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<logins>& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<login>>* AsyncbyeRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<logins>& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_hello_;
    const ::grpc::RpcMethod rpcmethod_bye_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
  
  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status hello(::grpc::ServerContext* context, const flatbuffers::BufferRef<logins>* request, flatbuffers::BufferRef<login>* response);
    virtual ::grpc::Status bye(::grpc::ServerContext* context, const flatbuffers::BufferRef<logins>* request, flatbuffers::BufferRef<login>* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_hello : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_hello() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_hello() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status hello(::grpc::ServerContext* context, const flatbuffers::BufferRef<logins>* request, flatbuffers::BufferRef<login>* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requesthello(::grpc::ServerContext* context, flatbuffers::BufferRef<logins>* request, ::grpc::ServerAsyncResponseWriter< flatbuffers::BufferRef<login>>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_bye : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_bye() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_bye() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status bye(::grpc::ServerContext* context, const flatbuffers::BufferRef<logins>* request, flatbuffers::BufferRef<login>* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestbye(::grpc::ServerContext* context, flatbuffers::BufferRef<logins>* request, ::grpc::ServerAsyncResponseWriter< flatbuffers::BufferRef<login>>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef   WithAsyncMethod_hello<  WithAsyncMethod_bye<  Service   >   >   AsyncService;
  template <class BaseClass>
  class WithGenericMethod_hello : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_hello() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_hello() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status hello(::grpc::ServerContext* context, const flatbuffers::BufferRef<logins>* request, flatbuffers::BufferRef<login>* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_bye : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_bye() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_bye() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status bye(::grpc::ServerContext* context, const flatbuffers::BufferRef<logins>* request, flatbuffers::BufferRef<login>* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

class mate GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status yo(::grpc::ClientContext* context, const flatbuffers::BufferRef<lol>& request, flatbuffers::BufferRef<lol>* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::BufferRef<lol>>> Asyncyo(::grpc::ClientContext* context, const flatbuffers::BufferRef<lol>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::BufferRef<lol>>>(AsyncyoRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< flatbuffers::BufferRef<lol>>* AsyncyoRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<lol>& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status yo(::grpc::ClientContext* context, const flatbuffers::BufferRef<lol>& request, flatbuffers::BufferRef<lol>* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<lol>>> Asyncyo(::grpc::ClientContext* context, const flatbuffers::BufferRef<lol>& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<lol>>>(AsyncyoRaw(context, request, cq));
    }
  
   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< flatbuffers::BufferRef<lol>>* AsyncyoRaw(::grpc::ClientContext* context, const flatbuffers::BufferRef<lol>& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_yo_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());
  
  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status yo(::grpc::ServerContext* context, const flatbuffers::BufferRef<lol>* request, flatbuffers::BufferRef<lol>* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_yo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_yo() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_yo() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status yo(::grpc::ServerContext* context, const flatbuffers::BufferRef<lol>* request, flatbuffers::BufferRef<lol>* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void Requestyo(::grpc::ServerContext* context, flatbuffers::BufferRef<lol>* request, ::grpc::ServerAsyncResponseWriter< flatbuffers::BufferRef<lol>>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef   WithAsyncMethod_yo<  Service   >   AsyncService;
  template <class BaseClass>
  class WithGenericMethod_yo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_yo() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_yo() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status yo(::grpc::ServerContext* context, const flatbuffers::BufferRef<lol>* request, flatbuffers::BufferRef<lol>* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
};

}  // namespace User2


#endif  // GRPC_loser__INCLUDED
