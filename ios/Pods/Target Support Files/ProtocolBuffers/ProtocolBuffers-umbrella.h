#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "ProtocolBuffers/AbstractMessage.h"
#import "ProtocolBuffers/AbstractMessageBuilder.h"
#import "ProtocolBuffers/Bootstrap.h"
#import "ProtocolBuffers/CodedInputStream.h"
#import "ProtocolBuffers/CodedOutputStream.h"
#import "ProtocolBuffers/ConcreteExtensionField.h"
#import "ProtocolBuffers/Descriptor.pb.h"
#import "ProtocolBuffers/ExtendableMessage.h"
#import "ProtocolBuffers/ExtendableMessageBuilder.h"
#import "ProtocolBuffers/ExtensionField.h"
#import "ProtocolBuffers/ExtensionRegistry.h"
#import "ProtocolBuffers/Field.h"
#import "ProtocolBuffers/ForwardDeclarations.h"
#import "ProtocolBuffers/GeneratedMessage.h"
#import "ProtocolBuffers/GeneratedMessageBuilder.h"
#import "ProtocolBuffers/Message.h"
#import "ProtocolBuffers/MessageBuilder.h"
#import "ProtocolBuffers/MutableExtensionRegistry.h"
#import "ProtocolBuffers/MutableField.h"
#import "ProtocolBuffers/ObjectivecDescriptor.pb.h"
#import "ProtocolBuffers/PBArray.h"
#import "ProtocolBuffers/ProtocolBuffers.h"
#import "ProtocolBuffers/RingBuffer.h"
#import "ProtocolBuffers/TextFormat.h"
#import "ProtocolBuffers/UnknownFieldSet.h"
#import "ProtocolBuffers/UnknownFieldSetBuilder.h"
#import "ProtocolBuffers/Utilities.h"
#import "ProtocolBuffers/WireFormat.h"

FOUNDATION_EXPORT double ProtocolBuffersVersionNumber;
FOUNDATION_EXPORT const unsigned char ProtocolBuffersVersionString[];

