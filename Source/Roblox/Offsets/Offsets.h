#pragma once

#include <cstdint>
#include <string>

namespace Offsets {
    inline std::string ClientVersion = "0.743.0.7431134";

    namespace Luau {
        inline constexpr std::size_t BytecodeVerificationTableA = REBASE(0x85D3CB0);
        inline constexpr std::size_t CastArgs                   = REBASE(0x4102410);
        inline constexpr std::size_t GcStep                     = REBASE(0x26440E0);
        inline constexpr std::size_t GetGlobalState             = REBASE(0x41ACDB0);
        inline constexpr std::size_t HClone                     = REBASE(0x2652FF0);
        inline constexpr std::size_t KTable                     = REBASE(0x846BAA0);
        inline constexpr std::size_t LoadSafe                   = REBASE(0x269E780);
        inline constexpr std::size_t LuaCStep                   = REBASE(0x2644300);
        inline constexpr std::size_t LuaCheckStack              = REBASE(0x2619930);
        inline constexpr std::size_t LuaDThrow                  = REBASE(0x58EC6B0);
        inline constexpr std::size_t LuaError                   = REBASE(0x261D640);
        inline constexpr std::size_t LuaGRunError               = REBASE(0x2623300);
        inline constexpr std::size_t LuaHDummyNode              = REBASE(0x667F2E8);
        inline constexpr std::size_t LuaMNewGco                 = REBASE(0x265DE50);
        inline constexpr std::size_t LuaNewState                = REBASE(0x26210C0);
        inline constexpr std::size_t LuaONilObject              = REBASE(0x667F848);
        inline constexpr std::size_t LuaOPushFString            = REBASE(0x2656F00);
        inline constexpr std::size_t LuaPushFString             = REBASE(0x2657710);
        inline constexpr std::size_t LuaPushString              = REBASE(0x5CE8FF0);
        inline constexpr std::size_t LuaSetField                = REBASE(0x40F83A1);
        inline constexpr std::size_t LuaTTypeNames              = REBASE(0x66A0F70);
        inline constexpr std::size_t LuaVMLoad                  = REBASE(0x41A3610);
        inline constexpr std::size_t LuauExecute                = REBASE(0x265F2B0);
        inline constexpr std::size_t OpcodeLookUpTable          = REBASE(0x71433E0);
        inline constexpr std::size_t Pseudo2Addr                = REBASE(0x2619780);
        inline constexpr std::size_t RunError                   = REBASE(0x2623300);
        inline constexpr std::size_t TClone                     = REBASE(0x2694180);
        inline constexpr std::size_t print                      = REBASE(0x1CE58F0);
    }

    namespace LuaB {
        inline constexpr std::size_t LuaBAssert       = REBASE(0x2682C50);
        inline constexpr std::size_t LuaBError        = REBASE(0x267B730);
        inline constexpr std::size_t LuaBGcinfo       = REBASE(0x2681590);
        inline constexpr std::size_t LuaBGetfenv      = REBASE(0x267CCE0);
        inline constexpr std::size_t LuaBGetmetatable = REBASE(0x267C170);
        inline constexpr std::size_t LuaBNewproxy     = REBASE(0x2683B70);
        inline constexpr std::size_t LuaBNext         = REBASE(0x26821A0);
        inline constexpr std::size_t LuaBPrint        = REBASE(0x267B2D0);
        inline constexpr std::size_t LuaBRawequal     = REBASE(0x267CFD0);
        inline constexpr std::size_t LuaBRawget       = REBASE(0x267D0E0);
        inline constexpr std::size_t LuaBRawlen       = REBASE(0x26814F0);
        inline constexpr std::size_t LuaBRawset       = REBASE(0x267DF50);
        inline constexpr std::size_t LuaBSelect       = REBASE(0x2682D00);
        inline constexpr std::size_t LuaBSetfenv      = REBASE(0x267CDA0);
        inline constexpr std::size_t LuaBSetmetatable = REBASE(0x267C300);
        inline constexpr std::size_t LuaBTonumber     = REBASE(0x267B3A0);
        inline constexpr std::size_t LuaBTostring     = REBASE(0x2683B10);
        inline constexpr std::size_t LuaBType         = REBASE(0x26815B0);
        inline constexpr std::size_t LuaBTypeof       = REBASE(0x2681BB0);
    }

    namespace LuaL {
        inline constexpr std::size_t LuaLCheckType    = REBASE(0x2622820);
        inline constexpr std::size_t LuaLGetMetafield = REBASE(0x26226B0);
    }

    namespace Capability {
        inline constexpr std::size_t Capability      = REBASE(0x30);
        inline constexpr std::size_t GetCapabilities = REBASE(0x1D241C0);
    }

    namespace ClassDescriptor {
        inline constexpr std::size_t GetPropertyData       = REBASE(0x1D25C30);
        inline constexpr std::size_t GetPropertyDescriptor = REBASE(0x1D223A0);
        inline constexpr std::size_t HashLookUp            = REBASE(0x2A5DC90);
    }

    namespace Coroutine {
        inline constexpr std::size_t CoroutineClose       = REBASE(0x5905630);
        inline constexpr std::size_t CoroutineCreate      = REBASE(0x5904CA0);
        inline constexpr std::size_t CoroutineFinally     = REBASE(0x5906BF0);
        inline constexpr std::size_t CoroutineIsyieldable = REBASE(0x59055A0);
        inline constexpr std::size_t CoroutineRunning     = REBASE(0x5905530);
        inline constexpr std::size_t CoroutineStatus      = REBASE(0x5903230);
        inline constexpr std::size_t CoroutineWrap        = REBASE(0x5905260);
        inline constexpr std::size_t CoroutineYield       = REBASE(0x59054D0);
    }

    namespace EngineMisc {
        inline constexpr std::size_t ScriptContextResume = REBASE(0x4258330);
    }

    namespace Global {
        inline constexpr std::size_t GlobalAssert       = REBASE(0x2682C50);
        inline constexpr std::size_t GlobalError        = REBASE(0x267B730);
        inline constexpr std::size_t GlobalGcinfo       = REBASE(0x2681590);
        inline constexpr std::size_t GlobalGetFenv      = REBASE(0x267CCE0);
        inline constexpr std::size_t GlobalGetmetatable = REBASE(0x267C170);
        inline constexpr std::size_t GlobalNewproxy     = REBASE(0x2683B70);
        inline constexpr std::size_t GlobalNext         = REBASE(0x26821A0);
        inline constexpr std::size_t GlobalPrint        = REBASE(0x267B2D0);
        inline constexpr std::size_t GlobalRawequal     = REBASE(0x267CFD0);
        inline constexpr std::size_t GlobalRawget       = REBASE(0x267D0E0);
        inline constexpr std::size_t GlobalRawlen       = REBASE(0x26814F0);
        inline constexpr std::size_t GlobalRawset       = REBASE(0x267DF50);
        inline constexpr std::size_t GlobalSelect       = REBASE(0x2682D00);
        inline constexpr std::size_t GlobalSetFenv      = REBASE(0x267CDA0);
        inline constexpr std::size_t GlobalSetmetatable = REBASE(0x267C300);
        inline constexpr std::size_t GlobalTable        = REBASE(0x66A1590);
        inline constexpr std::size_t GlobalTonumber     = REBASE(0x267B3A0);
        inline constexpr std::size_t GlobalTostring     = REBASE(0x2683B10);
        inline constexpr std::size_t GlobalType         = REBASE(0x26815B0);
        inline constexpr std::size_t GlobalTypeof       = REBASE(0x2681BB0);
    }

    namespace Instance {
        inline constexpr std::size_t FireProximityPrompt           = REBASE(0x30D1720);
        inline constexpr std::size_t FireTouchInterest             = REBASE(0xA08FC0);
        inline constexpr std::size_t InstanceFindFirstAncestor     = REBASE(0x4FA370);
        inline constexpr std::size_t InstanceFindFirstChild        = REBASE(0x4FDA80);
        inline constexpr std::size_t InstanceFindFirstChildOfClass = REBASE(0x4FA650);
        inline constexpr std::size_t InstanceGetAttribute          = REBASE(0x483DE70);
        inline constexpr std::size_t InstanceGetChildren           = REBASE(0x4FB690);
        inline constexpr std::size_t InstanceIndex                 = REBASE(0x412B7D0);
        inline constexpr std::size_t InstanceNew                   = REBASE(0x42C96A0);
    }

    namespace Misc {
        inline constexpr std::size_t BooleanType                = REBASE(0x6FC6358);
        inline constexpr std::size_t EnableLoadModule           = REBASE(0x8891880);
        inline constexpr std::size_t FFlagPointer               = REBASE(0x8C885C8);
        inline constexpr std::size_t GetFFlag                   = REBASE(0x49FFF90);
        inline constexpr std::size_t LockViolationInstanceCrash = REBASE(0x893E918);
        inline constexpr std::size_t LockViolationScriptCrash   = REBASE(0x88916D8);
        inline constexpr std::size_t PrintIdentity              = REBASE(0x425F710);
        inline constexpr std::size_t SetFFlag                   = REBASE(0x49F8270);
    }

    namespace RakNet {
        inline constexpr std::size_t ConvertItemEnumToString = REBASE(0x4819F10);
        inline constexpr std::size_t HandleConnectionState   = REBASE(0x47CBB00);
        inline constexpr std::size_t ProcessNetworkPacket    = REBASE(0x2867F60);
        inline constexpr std::size_t RakPeerReceive          = REBASE(0x2853170);
        inline constexpr std::size_t RakPeerVirtualTable     = REBASE(0x6EC0CD8);
        inline constexpr std::size_t Receive                 = REBASE(0x287EC30);
        inline constexpr std::size_t ReportNetworkError      = REBASE(0x47B8110);
        inline constexpr std::size_t SendPacketsToSelf       = REBASE(0x2851760);
        inline constexpr std::size_t UpdateNetworkLoop       = REBASE(0x284D980);
        inline constexpr std::size_t ReliabilityLayerSend    = REBASE(0x0);
        inline constexpr std::size_t Send                    = REBASE(0x0);
    }

    namespace Raycast {
        inline constexpr std::size_t BlockCast               = REBASE(0xD5DD70);
        inline constexpr std::size_t FastClusterEntityVTable = REBASE(0x6F2C158);
        inline constexpr std::size_t ShapeCast               = REBASE(0xD5E510);
        inline constexpr std::size_t SphereCast              = REBASE(0xD5DEC0);
        inline constexpr std::size_t WorldRootRaycast        = REBASE(0xD5C500);
    }

    namespace RbxTransport {
        inline constexpr std::size_t AppDestructor                 = REBASE(0x2155F90);
        inline constexpr std::size_t AppReceive                    = REBASE(0x2150C30);
        inline constexpr std::size_t AppReceiveMaxBytes            = REBASE(0x21514E0);
        inline constexpr std::size_t AppRtti                       = REBASE(0x762B640);
        inline constexpr std::size_t AppSend                       = REBASE(0x214FE00);
        inline constexpr std::size_t AppVTable                     = REBASE(0x6EB3930);
        inline constexpr std::size_t AppVtableSlots                = 0x1C;
        inline constexpr std::size_t ChannelCount                  = 0xE;
        inline constexpr std::size_t ClientAppConnection           = 0x890;
        inline constexpr std::size_t ClientChannelConfig           = REBASE(0x3A86A50);
        inline constexpr std::size_t ClientChannelMask             = 0x880;
        inline constexpr std::size_t ClientDestructor              = REBASE(0x3A86C50);
        inline constexpr std::size_t ClientReceive                 = REBASE(0x3A87330);
        inline constexpr std::size_t ClientRtti                    = REBASE(0x76C5958);
        inline constexpr std::size_t ClientSend                    = REBASE(0x3A86D70);
        inline constexpr std::size_t ClientVTable                  = REBASE(0x6F2CC08);
        inline constexpr std::size_t FailureFallbackToRbxTransport = REBASE(0x88983E8);
        inline constexpr std::size_t GetConnectionErrorName        = REBASE(0x52D1640);
        inline constexpr std::size_t ImageSize                     = 0x931F000;
        inline constexpr std::size_t ImageTimestamp                = 0xFD803185;
        inline constexpr std::size_t ReceiveBatchSize              = 0x28;
        inline constexpr std::size_t ReceivedStreamSize            = 0x70;
        inline constexpr std::size_t SendResultSize                = 0x18;
        inline constexpr std::size_t StreamAppend                  = REBASE(0x2158520);
        inline constexpr std::size_t StreamBytes                   = 0x18;
        inline constexpr std::size_t StreamCreate                  = REBASE(0x52CFEF0);
        inline constexpr std::size_t StreamDestroy                 = REBASE(0x211BBC0);
        inline constexpr std::size_t StreamInlineMode              = 0x38;
        inline constexpr std::size_t StreamLength                  = 0x20;
        inline constexpr std::size_t StreamPrefix                  = 0x40;
        inline constexpr std::size_t StreamSize                    = 0x58;
        inline constexpr std::size_t UseRbxTransportClient         = REBASE(0x8889A08);
    }

    namespace RemoteEvent {
        inline constexpr std::size_t FireAllClients = REBASE(0x3449F60);
        inline constexpr std::size_t FireClient     = REBASE(0x3449D10);
        inline constexpr std::size_t FireServer     = REBASE(0x3449B70);
        inline constexpr std::size_t InvokeClient   = REBASE(0x351FD40);
        inline constexpr std::size_t InvokeServer   = REBASE(0x351F9F0);
    }

    namespace ScriptContext {
        inline constexpr std::size_t RequireBypass = 0xA81;
    }

    namespace Sky {
        inline constexpr std::size_t CubeTextures = REBASE(0x37782F0);
        inline constexpr std::size_t DrawCubeCall = REBASE(0x377BE00);
        inline constexpr std::size_t DrawSkyEnv   = REBASE(0x377BE00);
        inline constexpr std::size_t DrawSkyPixel = REBASE(0x377BE00);
        inline constexpr std::size_t DrawStars    = REBASE(0x377BE00);
        inline constexpr std::size_t DrawSun      = REBASE(0x377BE00);
        inline constexpr std::size_t SkyGroup     = REBASE(0x8004A08);
        inline constexpr std::size_t SkyThread    = REBASE(0x3778590);
    }

    namespace Task {
        inline constexpr std::size_t TaskCancel        = REBASE(0x4322760);
        inline constexpr std::size_t TaskDefer         = REBASE(0x4323E50);
        inline constexpr std::size_t TaskDelay         = REBASE(0x43246D0);
        inline constexpr std::size_t TaskDesynchronize = REBASE(0x4323210);
        inline constexpr std::size_t TaskSpawn         = REBASE(0x4324330);
        inline constexpr std::size_t TaskSynchronize   = REBASE(0x4322DA0);
        inline constexpr std::size_t TaskWait          = REBASE(0x43249D0);
    }

    namespace TaskScheduler {
        inline constexpr std::size_t TaskScheduler          = REBASE(0x8D71348);
        inline constexpr std::size_t TaskSchedulerTargetFPS = REBASE(0x85DCC40);
    }

    namespace VTable {
        inline constexpr std::size_t vftFuncScriptSlot0   = REBASE(0x6F94238);
        inline constexpr std::size_t vftFuncScriptSlot1   = REBASE(0x6F94300);
        inline constexpr std::size_t vftMessageScriptSlot = REBASE(0x6F93F58);
        inline constexpr std::size_t vftNetworkStream     = REBASE(0x6EA7F90);
        inline constexpr std::size_t vftWaitScriptSlot    = REBASE(0x6F94020);
    }
}
