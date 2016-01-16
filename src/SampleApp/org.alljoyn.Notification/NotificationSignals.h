//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace alljoyn { namespace Notification {

ref class NotificationSignals;

public interface class INotificationSignals
{
    event Windows::Foundation::TypedEventHandler<NotificationSignals^, NotificationNotifyReceivedEventArgs^>^ NotifyReceived;
};

public ref class NotificationSignals sealed : [Windows::Foundation::Metadata::Default] INotificationSignals
{
public:
    // Calling this method will send the notify signal to every member of the session.
    void Notify(_In_ uint16 interfaceMemberVersion, _In_ int32 interfaceMemberMsgId, _In_ uint16 interfaceMemberMsgType, _In_ Platform::String^ interfaceMemberDeviceId, _In_ Platform::String^ interfaceMemberDeviceName, _In_ Windows::Foundation::Collections::IVectorView<byte>^ interfaceMemberAppId, _In_ Platform::String^ interfaceMemberAppName, _In_ Windows::Foundation::Collections::IMapView<int32,Platform::Object^>^ interfaceMemberAttributes, _In_ Windows::Foundation::Collections::IMapView<Platform::String^,Platform::String^>^ interfaceMemberCustomAttributes, _In_ Windows::Foundation::Collections::IVectorView<NotificationLangTextItem^>^ interfaceMemberLangText);

    // This event fires whenever the notify signal is sent by another member of the session.
    virtual event Windows::Foundation::TypedEventHandler<NotificationSignals^, NotificationNotifyReceivedEventArgs^>^ NotifyReceived 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<NotificationSignals^, NotificationNotifyReceivedEventArgs^>^ handler) 
        { 
            return _NotifyReceived += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<NotificationSignals^>(sender), safe_cast<NotificationNotifyReceivedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _NotifyReceived -= token; 
        } 
    internal: 
        void raise(NotificationSignals^ sender, NotificationNotifyReceivedEventArgs^ args) 
        { 
            _NotifyReceived(sender, args);
        } 
    }

internal:
    void Initialize(_In_ alljoyn_busobject busObject, _In_ alljoyn_sessionid sessionId);
    void CallNotifyReceived(_In_ NotificationSignals^ sender, _In_ NotificationNotifyReceivedEventArgs^ args);

private:
    alljoyn_busobject m_busObject;
    alljoyn_sessionid m_sessionId;

    virtual event Windows::Foundation::EventHandler<Platform::Object^>^ _NotifyReceived;

    alljoyn_interfacedescription_member m_memberNotify;
};

} } } 
