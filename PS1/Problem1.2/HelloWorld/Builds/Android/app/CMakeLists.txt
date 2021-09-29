# Automatically generated makefile, created by the Projucer
# Don't edit this file! Your changes will be overwritten when you re-save the Projucer project!

cmake_minimum_required(VERSION 3.4.1)

set(BINARY_NAME "juce_jni")

add_library("cpufeatures" STATIC "${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c")
set_source_files_properties("${ANDROID_NDK}/sources/android/cpufeatures/cpu-features.c" PROPERTIES COMPILE_FLAGS "-Wno-sign-conversion -Wno-gnu-statement-expression")

add_definitions("-DJUCE_ANDROID=1" "-DJUCE_ANDROID_API_VERSION=16" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000")

include_directories( AFTER
    "../../../JuceLibraryCode"
    "/Applications/JUCE/modules"
    "${ANDROID_NDK}/sources/android/cpufeatures"
)

enable_language(ASM)

if(JUCE_BUILD_CONFIGURATION MATCHES "DEBUG")
    add_definitions("-DJUCE_DISPLAY_SPLASH_SCREEN=1" "-DJUCE_USE_DARK_SPLASH_SCREEN=1" "-DJUCE_PROJUCER_VERSION=0x60102" "-DJUCE_MODULE_AVAILABLE_juce_core=1" "-DJUCE_MODULE_AVAILABLE_juce_data_structures=1" "-DJUCE_MODULE_AVAILABLE_juce_events=1" "-DJUCE_MODULE_AVAILABLE_juce_graphics=1" "-DJUCE_MODULE_AVAILABLE_juce_gui_basics=1" "-DJUCE_GLOBAL_MODULE_SETTINGS_INCLUDED=1" "-DJUCE_STRICT_REFCOUNTEDPOINTER=1" "-DJUCE_STANDALONE_APPLICATION=1" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000" "-DDEBUG=1" "-D_DEBUG=1")
elseif(JUCE_BUILD_CONFIGURATION MATCHES "RELEASE")
    add_definitions("-DJUCE_DISPLAY_SPLASH_SCREEN=1" "-DJUCE_USE_DARK_SPLASH_SCREEN=1" "-DJUCE_PROJUCER_VERSION=0x60102" "-DJUCE_MODULE_AVAILABLE_juce_core=1" "-DJUCE_MODULE_AVAILABLE_juce_data_structures=1" "-DJUCE_MODULE_AVAILABLE_juce_events=1" "-DJUCE_MODULE_AVAILABLE_juce_graphics=1" "-DJUCE_MODULE_AVAILABLE_juce_gui_basics=1" "-DJUCE_GLOBAL_MODULE_SETTINGS_INCLUDED=1" "-DJUCE_STRICT_REFCOUNTEDPOINTER=1" "-DJUCE_STANDALONE_APPLICATION=1" "-DJUCER_ANDROIDSTUDIO_7F0E4A25=1" "-DJUCE_APP_VERSION=1.0.0" "-DJUCE_APP_VERSION_HEX=0x10000" "-DNDEBUG=1")
else()
    message( FATAL_ERROR "No matching build-configuration found." )
endif()

add_library( ${BINARY_NAME}

    SHARED

    "../../../Source/Main.cpp"
    "../../../Source/MainComponent.h"
    "../../../Source/MainComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_AbstractFifo.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_Array.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ArrayBase.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_DynamicObject.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ElementComparator.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_HashMap.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ListenerList.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_NamedValueSet.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_OwnedArray.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_PropertySet.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_PropertySet.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_SortedSet.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_SparseSet.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_SparseSet.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_Variant.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_Variant.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_DirectoryIterator.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_File.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_File.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileFilter.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileFilter.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileInputStream.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileInputStream.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileOutputStream.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileSearchPath.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_RangedDirectoryIterator.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_RangedDirectoryIterator.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_TemporaryFile.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/javascript/juce_Javascript.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/javascript/juce_Javascript.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/javascript/juce_JSON.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/javascript/juce_JSON.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/logging/juce_FileLogger.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/logging/juce_FileLogger.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/logging/juce_Logger.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/logging/juce_Logger.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_BigInteger.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_BigInteger.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_Expression.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_Expression.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_MathsFunctions.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_NormalisableRange.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_Random.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_Random.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_Range.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_AllocationHooks.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_AllocationHooks.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_Atomic.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_ByteOrder.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_HeapBlock.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_Memory.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_MemoryBlock.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_ScopedPointer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_Singleton.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_WeakReference.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_Functional.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_Result.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_Result.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_Uuid.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_Uuid.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/java/README.txt"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_Files.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_Misc.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_Network.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_Threads.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_curl_Network.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_intel_SharedCode.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_linux_Files.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_linux_Network.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_linux_Threads.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_CFHelpers.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_Files.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_Network.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_ObjCHelpers.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_Strings.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_Threads.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_posix_IPAddress.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_posix_SharedCode.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_wasm_SystemStats.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_win32_Files.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_win32_Network.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_win32_Registry.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_win32_Threads.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_IPAddress.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_IPAddress.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_MACAddress.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_MACAddress.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_NamedPipe.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_NamedPipe.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_Socket.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_Socket.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_URL.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_URL.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_WebInputStream.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_WebInputStream.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_FileInputSource.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_InputSource.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_InputStream.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_InputStream.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_OutputStream.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_OutputStream.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_SubregionStream.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_URLInputSource.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_CompilerSupport.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_CompilerWarnings.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_PlatformDefs.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_StandardHeader.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_SystemStats.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_SystemStats.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_TargetPlatform.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_Base64.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_Base64.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_CharacterFunctions.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_Identifier.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_Identifier.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_LocalisedStrings.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_NewLine.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_String.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_String.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringArray.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringArray.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringPairArray.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringPairArray.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringPool.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringPool.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringRef.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_TextDiff.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_TextDiff.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ChildProcess.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_CriticalSection.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_InterProcessLock.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_Process.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ScopedLock.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_SpinLock.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_Thread.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_Thread.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ThreadPool.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_WaitableEvent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_WaitableEvent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/time/juce_PerformanceCounter.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/time/juce_RelativeTime.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/time/juce_RelativeTime.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/time/juce_Time.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/time/juce_Time.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/xml/juce_XmlDocument.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/xml/juce_XmlElement.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/xml/juce_XmlElement.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/adler32.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/compress.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/crc32.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/crc32.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/deflate.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/deflate.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/infback.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inffast.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inffast.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inffixed.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inflate.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inflate.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inftrees.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inftrees.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/trees.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/trees.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/uncompr.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/zconf.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/zconf.in.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/zlib.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/zutil.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/zutil.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/juce_ZipFile.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/juce_ZipFile.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/juce_core.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/juce_core.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_core/juce_core.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_CachedValue.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_Value.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_Value.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_ValueTree.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/juce_data_structures.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/juce_data_structures.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/juce_data_structures.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_ApplicationBase.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_CallbackMessage.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_Initialisation.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_Message.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_MessageListener.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_MessageListener.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_MessageManager.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_MessageManager.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_NotificationType.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_android_Messaging.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_linux_EventLoop.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_ScopedLowPowerModeDisabler.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_ScopedLowPowerModeDisabler.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/timers/juce_MultiTimer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/timers/juce_Timer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/timers/juce_Timer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/juce_events.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/juce_events.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_events/juce_events.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_Colour.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_Colour.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_Colours.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_Colours.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_FillType.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_FillType.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_Font.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_Font.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_Typeface.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_Line.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_Path.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_Path.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_Point.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/png.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/png.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngdebug.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_Image.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_Image.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_ImageCache.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/placement/juce_Justification.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/juce_graphics.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/juce_graphics.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/juce_graphics.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/enums/juce_AccessibilityActions.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/enums/juce_AccessibilityEvent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/enums/juce_AccessibilityRole.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/interfaces/juce_AccessibilityCellInterface.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/interfaces/juce_AccessibilityTableInterface.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/interfaces/juce_AccessibilityTextInterface.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/interfaces/juce_AccessibilityValueInterface.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/juce_AccessibilityHandler.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/juce_AccessibilityHandler.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/juce_AccessibilityState.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/application/juce_Application.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/application/juce_Application.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_Button.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_Component.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_Component.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_ComponentTraverser.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_FocusTraverser.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_FocusTraverser.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_Grid.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_AccessibilityTextHelpers.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_android_Accessibility.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_ios_Accessibility.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_mac_Accessibility.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_mac_AccessibilitySharedCode.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_Accessibility.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_AccessibilityElement.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_AccessibilityElement.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAExpandCollapseProvider.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAGridItemProvider.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAGridProvider.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAHelpers.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAInvokeProvider.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAProviderBase.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAProviders.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIARangeValueProvider.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIASelectionProvider.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIATextProvider.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAToggleProvider.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIATransformProvider.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAValueProvider.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAWindowProvider.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_WindowsUIAWrapper.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/x11/juce_linux_X11_DragAndDrop.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/x11/juce_linux_X11_Symbols.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/x11/juce_linux_X11_Symbols.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/x11/juce_linux_XWindowSystem.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/x11/juce_linux_XWindowSystem.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_linux_Windowing.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_win32_ScopedThreadDPIAwarenessSetter.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_Label.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_MessageBoxOptions.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/juce_gui_basics.mm"
    "../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/juce_gui_basics.h"
    "../../../JuceLibraryCode/include_juce_core.cpp"
    "../../../JuceLibraryCode/include_juce_data_structures.cpp"
    "../../../JuceLibraryCode/include_juce_events.cpp"
    "../../../JuceLibraryCode/include_juce_graphics.cpp"
    "../../../JuceLibraryCode/include_juce_gui_basics.cpp"
    "../../../JuceLibraryCode/JuceHeader.h"
)

set_source_files_properties("../../../Source/MainComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_AbstractFifo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_AbstractFifo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_Array.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ArrayAllocationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ArrayBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ArrayBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_DynamicObject.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_DynamicObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ElementComparator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_HashMap.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_HashMap_test.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_LinkedListPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ListenerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_NamedValueSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_NamedValueSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_OwnedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_OwnedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_PropertySet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_PropertySet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ReferenceCountedArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_ScopedValueSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_SortedSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_SparseSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_SparseSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_Variant.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/containers/juce_Variant.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_DirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_DirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_File.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_File.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileSearchPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_FileSearchPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_MemoryMappedFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_RangedDirectoryIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_RangedDirectoryIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_TemporaryFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_TemporaryFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_WildcardFileFilter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/files/juce_WildcardFileFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/javascript/juce_Javascript.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/javascript/juce_Javascript.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/javascript/juce_JSON.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/javascript/juce_JSON.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/logging/juce_FileLogger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/logging/juce_FileLogger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/logging/juce_Logger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/logging/juce_Logger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_BigInteger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_BigInteger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_Expression.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_Expression.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_MathsFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_NormalisableRange.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_Random.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_Random.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_Range.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/maths/juce_StatisticsAccumulator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_AllocationHooks.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_AllocationHooks.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_Atomic.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_ByteOrder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_ContainerDeletePolicy.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_HeapBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_HeavyweightLeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_LeakedObjectDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_Memory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_MemoryBlock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_MemoryBlock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_OptionalScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_ReferenceCountedObject.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_ScopedPointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_SharedResourcePointer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_Singleton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/memory/juce_WeakReference.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_ConsoleApplication.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_ConsoleApplication.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_Functional.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_Result.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_Result.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_RuntimePermissions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_Uuid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_Uuid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/misc/juce_WindowsRegistry.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/java/README.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_JNIHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_JNIHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_Misc.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_RuntimePermissions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_android_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_BasicNativeHeaders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_curl_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_intel_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_linux_CommonFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_linux_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_linux_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_linux_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_linux_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_CFHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_Files.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_Network.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_ObjCHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_Strings.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_SystemStats.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_mac_Threads.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_posix_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_posix_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_posix_SharedCode.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_wasm_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_win32_ComSmartPtr.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_win32_Files.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_win32_Network.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_win32_Registry.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_win32_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/native/juce_win32_Threads.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_IPAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_IPAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_MACAddress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_MACAddress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_NamedPipe.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_NamedPipe.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_Socket.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_Socket.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_URL.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_URL.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_WebInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/network/juce_WebInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_BufferedInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_BufferedInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_FileInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_FileInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_InputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_InputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_InputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_MemoryInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_MemoryInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_MemoryOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_OutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_OutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_SubregionStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_SubregionStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_URLInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/streams/juce_URLInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_CompilerSupport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_CompilerWarnings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_PlatformDefs.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_StandardHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_SystemStats.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_SystemStats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/system/juce_TargetPlatform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_Base64.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_Base64.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_CharacterFunctions.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_CharacterFunctions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_CharPointer_ASCII.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_CharPointer_UTF8.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_CharPointer_UTF16.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_CharPointer_UTF32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_Identifier.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_Identifier.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_LocalisedStrings.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_LocalisedStrings.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_NewLine.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_String.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_String.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringPairArray.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringPairArray.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_StringRef.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_TextDiff.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/text/juce_TextDiff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_CriticalSection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_DynamicLibrary.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_HighResolutionTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_InterProcessLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_Process.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ReadWriteLock.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ReadWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ScopedLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ScopedReadLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ScopedWriteLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_SpinLock.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_Thread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_Thread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ThreadLocalValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ThreadPool.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_ThreadPool.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_TimeSliceThread.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_TimeSliceThread.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_WaitableEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/threads/juce_WaitableEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/time/juce_PerformanceCounter.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/time/juce_PerformanceCounter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/time/juce_RelativeTime.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/time/juce_RelativeTime.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/time/juce_Time.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/time/juce_Time.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/unit_tests/juce_UnitTest.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/unit_tests/juce_UnitTest.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/unit_tests/juce_UnitTestCategories.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/xml/juce_XmlDocument.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/xml/juce_XmlDocument.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/xml/juce_XmlElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/xml/juce_XmlElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/adler32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/compress.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/crc32.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/crc32.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/deflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/deflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/infback.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inffast.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inffast.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inffixed.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inflate.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inflate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inftrees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/inftrees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/trees.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/trees.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/uncompr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/zconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/zconf.in.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/zlib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/zutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/zlib/zutil.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/juce_GZIPCompressorOutputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/juce_GZIPDecompressorInputStream.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/juce_ZipFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/zip/juce_ZipFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/juce_core.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/juce_core.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_core/juce_core.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/app_properties/juce_ApplicationProperties.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/app_properties/juce_PropertiesFile.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/undomanager/juce_UndoableAction.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/undomanager/juce_UndoManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_CachedValue.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_CachedValue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_Value.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_Value.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_ValueTree.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_ValueTree.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_ValueTreeSynchroniser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/values/juce_ValueWithDefault.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/juce_data_structures.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/juce_data_structures.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_data_structures/juce_data_structures.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_ActionBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_ActionListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_AsyncUpdater.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_ChangeBroadcaster.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/broadcasters/juce_ChangeListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_ConnectedChildProcess.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_InterprocessConnection.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_InterprocessConnectionServer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/interprocess/juce_NetworkServiceDiscovery.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_ApplicationBase.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_ApplicationBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_CallbackMessage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_DeletedAtShutdown.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_Initialisation.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_Message.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_MessageListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_MessageListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_MessageManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_MessageManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_MountedVolumeListChangeDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/messages/juce_NotificationType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_android_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_ios_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_linux_EventLoop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_linux_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_mac_MessageManager.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_osx_MessageQueue.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_ScopedLowPowerModeDisabler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_ScopedLowPowerModeDisabler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_win32_HiddenMessageWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_win32_Messaging.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/native/juce_win32_WinRTWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/timers/juce_MultiTimer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/timers/juce_MultiTimer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/timers/juce_Timer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/timers/juce_Timer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/juce_events.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/juce_events.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_events/juce_events.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_Colour.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_Colour.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_ColourGradient.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_ColourGradient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_Colours.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_Colours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_FillType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_FillType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/colour/juce_PixelFormats.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_GraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsPostScriptRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/contexts/juce_LowLevelGraphicsSoftwareRenderer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/effects/juce_DropShadowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/effects/juce_GlowEffect.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/effects/juce_GlowEffect.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/effects/juce_ImageEffectFilter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_AttributedString.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_AttributedString.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_CustomTypeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_Font.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_Font.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_GlyphArrangement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_TextLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_TextLayout.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_Typeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/fonts/juce_Typeface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_AffineTransform.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_BorderSize.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_EdgeTable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_Line.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_Parallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_Path.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_Path.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_PathIterator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_PathIterator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_PathStrokeType.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_Point.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_Rectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/geometry/juce_RectangleList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/cderror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/changes to libjpeg for JUCE.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jccoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jccolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcdctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jchuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcinit.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcomapi.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jconfig.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcparam.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcprepct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jcsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jctrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdapimin.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdapistd.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdatasrc.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdcoefct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdcolor.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jddctmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdhuff.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdinput.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdmainct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdmarker.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdmaster.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdmerge.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdphuff.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdpostct.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdsample.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jdtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jerror.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jfdctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jidctflt.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jidctfst.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jidctint.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jidctred.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jinclude.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jmemmgr.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jmemnobs.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jmemsys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jmorecfg.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jpegint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jpeglib.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jquant1.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jquant2.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jutils.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/jversion.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/jpglib/transupp.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/libpng_readme.txt" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/png.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/png.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngconf.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngdebug.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngerror.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngget.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pnginfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngmem.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngpread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngpriv.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngread.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngrio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngrtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngrutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngset.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngstruct.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngtrans.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngwio.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngwrite.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngwtran.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/pnglib/pngwutil.c" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/juce_GIFLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/juce_JPEGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/image_formats/juce_PNGLoader.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_Image.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_Image.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_ImageCache.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_ImageCache.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_ImageConvolutionKernel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/images/juce_ImageFileFormat.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_android_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_android_GraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_android_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_freetype_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_linux_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_linux_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsContext.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_mac_CoreGraphicsHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_mac_Fonts.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_mac_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_RenderingHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_win32_Direct2DGraphicsContext.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeface.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_win32_DirectWriteTypeLayout.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_win32_Fonts.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/native/juce_win32_IconHelpers.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/placement/juce_Justification.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/placement/juce_RectanglePlacement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/juce_graphics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/juce_graphics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_graphics/juce_graphics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/enums/juce_AccessibilityActions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/enums/juce_AccessibilityEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/enums/juce_AccessibilityRole.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/interfaces/juce_AccessibilityCellInterface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/interfaces/juce_AccessibilityTableInterface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/interfaces/juce_AccessibilityTextInterface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/interfaces/juce_AccessibilityValueInterface.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/juce_AccessibilityHandler.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/juce_AccessibilityHandler.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/accessibility/juce_AccessibilityState.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/application/juce_Application.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/application/juce_Application.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ArrowButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_Button.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_Button.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_DrawableButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_HyperlinkButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ImageButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ShapeButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_TextButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ToggleButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/buttons/juce_ToolbarButton.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandID.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandInfo.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_ApplicationCommandTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/commands/juce_KeyPressMappingSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_CachedComponentImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_Component.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_Component.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_ComponentListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_ComponentTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_FocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_FocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/components/juce_ModalComponentManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/desktop/juce_Desktop.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/desktop/juce_Displays.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/desktop/juce_Displays.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_Drawable.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableComposite.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableImage.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawablePath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableShape.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_DrawableText.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/drawables/juce_SVGParser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_ContentSharer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsDisplayComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_DirectoryContentsList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileBrowserListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileChooserDialogBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FilenameComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FilePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileSearchPathListComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_FileTreeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/filebrowser/juce_ImagePreviewComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_CaretComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_KeyboardFocusTraverser.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_KeyListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_KeyPress.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_ModifierKeys.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_SystemClipboard.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_TextEditorKeyMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/keyboard/juce_TextInputTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPosition.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_AnimatedPositionBehaviours.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentAnimator.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentBoundsConstrainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentBuilder.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ComponentMovementWatcher.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ConcertinaPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_FlexBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_FlexItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_Grid.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_Grid.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_GridItem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_GridItem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_GroupComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_MultiDocumentPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ResizableBorderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ResizableCornerComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ResizableEdgeComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_ScrollBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_SidePanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutManager.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_StretchableLayoutResizerBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_StretchableObjectResizer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_TabbedButtonBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_TabbedComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_Viewport.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/layout/juce_Viewport.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V1.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V2.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V3.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/lookandfeel/juce_LookAndFeel_V4.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_BurgerMenuComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_MenuBarComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_MenuBarModel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/menus/juce_PopupMenu.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/misc/juce_BubbleComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/misc/juce_DropShadower.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/misc/juce_JUCESplashScreen.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_ComponentDragger.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropContainer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_DragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_FileDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_LassoComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseCursor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseEvent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseInactivityDetector.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseInputSource.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_MouseListener.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_SelectedItemSet.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_TextDragAndDropTarget.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/mouse/juce_TooltipClient.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_AccessibilityTextHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_android_Accessibility.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_ios_Accessibility.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_mac_Accessibility.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_mac_AccessibilitySharedCode.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_Accessibility.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_AccessibilityElement.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_AccessibilityElement.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAExpandCollapseProvider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAGridItemProvider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAGridProvider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAHelpers.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAInvokeProvider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAProviderBase.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAProviders.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIARangeValueProvider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIASelectionProvider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIATextProvider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAToggleProvider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIATransformProvider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAValueProvider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_UIAWindowProvider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/accessibility/juce_win32_WindowsUIAWrapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/x11/juce_linux_X11_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/x11/juce_linux_X11_Symbols.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/x11/juce_linux_X11_Symbols.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/x11/juce_linux_XWindowSystem.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/x11/juce_linux_XWindowSystem.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_android_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_android_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_android_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_common_MimeTypes.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_ios_ContentSharer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_ios_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_ios_UIViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_ios_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_linux_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_linux_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_mac_FileChooser.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_mac_MainMenu.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_mac_MouseCursor.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_mac_NSViewComponentPeer.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_mac_Windowing.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_MultiTouchMapper.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_win32_DragAndDrop.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_win32_FileChooser.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_win32_ScopedThreadDPIAwarenessSetter.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/native/juce_win32_Windowing.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_MarkerList.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinate.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeCoordinatePositioner.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeParallelogram.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativePoint.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativePointPath.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/positioning/juce_RelativeRectangle.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_BooleanPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_ButtonPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_ChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_MultiChoicePropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_PropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_PropertyPanel.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_SliderPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/properties/juce_TextPropertyComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ComboBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ImageComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_Label.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_Label.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ProgressBar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_Slider.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_Slider.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TableHeaderComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TableListBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TextEditor.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_Toolbar.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemComponent.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemFactory.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_ToolbarItemPalette.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/widgets/juce_TreeView.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_AlertWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_CallOutBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_ComponentPeer.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_DialogWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_DocumentWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_MessageBoxOptions.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_NativeMessageBox.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_ResizableWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_ThreadWithProgressWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_TooltipWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/windows/juce_TopLevelWindow.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/juce_gui_basics.cpp" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/juce_gui_basics.mm" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../../../../../../../../../../Applications/JUCE/modules/juce_gui_basics/juce_gui_basics.h" PROPERTIES HEADER_FILE_ONLY TRUE)
set_source_files_properties("../../../JuceLibraryCode/JuceHeader.h" PROPERTIES HEADER_FILE_ONLY TRUE)

target_compile_options( ${BINARY_NAME} PRIVATE "-fsigned-char" )

if( JUCE_BUILD_CONFIGURATION MATCHES "DEBUG" )
    target_compile_options( ${BINARY_NAME} PRIVATE)
endif()

if( JUCE_BUILD_CONFIGURATION MATCHES "RELEASE" )
    target_compile_options( ${BINARY_NAME} PRIVATE)
endif()

find_library(log "log")
find_library(android "android")
find_library(glesv2 "GLESv2")
find_library(egl "EGL")

target_link_libraries( ${BINARY_NAME}

    ${log}
    ${android}
    ${glesv2}
    ${egl}
    "cpufeatures"
)
