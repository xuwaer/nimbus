//
// Copyright 2011 Jeff Verkoeyen
// This file has been automatically generated by Nimbus' namespacing script.
//
// Licensed under the Apache License, Version 2.0 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#ifndef __NIMBUS_NAMESPACE_PREFIX_
#error You must define __NIMBUS_NAMESPACE_PREFIX_ in your project settings in order to use a Nimbus namespace.
#else

#ifndef __NIMBUS_NS_SYMBOL
// We need to have multiple levels of macros here so that __NIMBUS_NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define __NIMBUS_NS_REWRITE(ns, symbol) ns ## _ ## symbol
#define __NIMBUS_NS_BRIDGE(ns, symbol) __NIMBUS_NS_REWRITE(ns, symbol)
#define __NIMBUS_NS_SYMBOL(symbol) __NIMBUS_NS_BRIDGE(__NIMBUS_NAMESPACE_PREFIX_, symbol)
#endif

// Classes
#ifndef NIImageMemoryCache
#define NIImageMemoryCache __NIMBUS_NS_SYMBOL(NIImageMemoryCache)
#endif
#ifndef NILinkedList
#define NILinkedList __NIMBUS_NS_SYMBOL(NILinkedList)
#endif
#ifndef NILinkedListEnumerator
#define NILinkedListEnumerator __NIMBUS_NS_SYMBOL(NILinkedListEnumerator)
#endif
#ifndef NILinkedListLocation
#define NILinkedListLocation __NIMBUS_NS_SYMBOL(NILinkedListLocation)
#endif
#ifndef NILinkedListNode
#define NILinkedListNode __NIMBUS_NS_SYMBOL(NILinkedListNode)
#endif
#ifndef NIMemoryCache
#define NIMemoryCache __NIMBUS_NS_SYMBOL(NIMemoryCache)
#endif
#ifndef NIMemoryCacheInfo
#define NIMemoryCacheInfo __NIMBUS_NS_SYMBOL(NIMemoryCacheInfo)
#endif
#ifndef NINavigationAppearance
#define NINavigationAppearance __NIMBUS_NS_SYMBOL(NINavigationAppearance)
#endif
#ifndef NINavigationAppearanceSnapshot
#define NINavigationAppearanceSnapshot __NIMBUS_NS_SYMBOL(NINavigationAppearanceSnapshot)
#endif
#ifndef NINetworkActivity
#define NINetworkActivity __NIMBUS_NS_SYMBOL(NINetworkActivity)
#endif
#ifndef NIOperation
#define NIOperation __NIMBUS_NS_SYMBOL(NIOperation)
#endif
#ifndef NIRecyclableView
#define NIRecyclableView __NIMBUS_NS_SYMBOL(NIRecyclableView)
#endif
#ifndef NIViewRecycler
#define NIViewRecycler __NIMBUS_NS_SYMBOL(NIViewRecycler)
#endif
#ifndef NI_FIX_CATEGORY_BUG_NSDataNimbusCore
#define NI_FIX_CATEGORY_BUG_NSDataNimbusCore __NIMBUS_NS_SYMBOL(NI_FIX_CATEGORY_BUG_NSDataNimbusCore)
#endif
#ifndef NI_FIX_CATEGORY_BUG_NSStringNimbusCore
#define NI_FIX_CATEGORY_BUG_NSStringNimbusCore __NIMBUS_NS_SYMBOL(NI_FIX_CATEGORY_BUG_NSStringNimbusCore)
#endif
#ifndef NI_FIX_CATEGORY_BUG_UIViewNimbusCore
#define NI_FIX_CATEGORY_BUG_UIViewNimbusCore __NIMBUS_NS_SYMBOL(NI_FIX_CATEGORY_BUG_UIViewNimbusCore)
#endif
#ifndef Nimbus
#define Nimbus __NIMBUS_NS_SYMBOL(Nimbus)
#endif
// Functions
#ifndef NICreateNonRetainingMutableArray
#define NICreateNonRetainingMutableArray __NIMBUS_NS_SYMBOL(NICreateNonRetainingMutableArray)
#endif
#ifndef NIIsArrayWithObjects
#define NIIsArrayWithObjects __NIMBUS_NS_SYMBOL(NIIsArrayWithObjects)
#endif
#ifndef NIIsInDebugger
#define NIIsInDebugger __NIMBUS_NS_SYMBOL(NIIsInDebugger)
#endif
#ifndef NIIsPad
#define NIIsPad __NIMBUS_NS_SYMBOL(NIIsPad)
#endif
#ifndef NIIsSupportedOrientation
#define NIIsSupportedOrientation __NIMBUS_NS_SYMBOL(NIIsSupportedOrientation)
#endif
#ifndef NIPathForBundleResource
#define NIPathForBundleResource __NIMBUS_NS_SYMBOL(NIPathForBundleResource)
#endif
#ifndef NIRectContract
#define NIRectContract __NIMBUS_NS_SYMBOL(NIRectContract)
#endif
#ifndef NISwapInstanceMethods
#define NISwapInstanceMethods __NIMBUS_NS_SYMBOL(NISwapInstanceMethods)
#endif
#ifndef NIToolbarHeightForOrientation
#define NIToolbarHeightForOrientation __NIMBUS_NS_SYMBOL(NIToolbarHeightForOrientation)
#endif
#ifndef NICreateNonRetainingMutableDictionary
#define NICreateNonRetainingMutableDictionary __NIMBUS_NS_SYMBOL(NICreateNonRetainingMutableDictionary)
#endif
#ifndef NISwapClassMethods
#define NISwapClassMethods __NIMBUS_NS_SYMBOL(NISwapClassMethods)
#endif
#ifndef NICreateNonRetainingMutableSet
#define NICreateNonRetainingMutableSet __NIMBUS_NS_SYMBOL(NICreateNonRetainingMutableSet)
#endif
#ifndef NIInterfaceOrientation
#define NIInterfaceOrientation __NIMBUS_NS_SYMBOL(NIInterfaceOrientation)
#endif
#ifndef NIStatusBarAnimationCurve
#define NIStatusBarAnimationCurve __NIMBUS_NS_SYMBOL(NIStatusBarAnimationCurve)
#endif
#ifndef NIStatusBarAnimationDuration
#define NIStatusBarAnimationDuration __NIMBUS_NS_SYMBOL(NIStatusBarAnimationDuration)
#endif
#ifndef NIStatusBarBoundsChangeAnimationCurve
#define NIStatusBarBoundsChangeAnimationCurve __NIMBUS_NS_SYMBOL(NIStatusBarBoundsChangeAnimationCurve)
#endif
#ifndef NIIsSetWithObjects
#define NIIsSetWithObjects __NIMBUS_NS_SYMBOL(NIIsSetWithObjects)
#endif
#ifndef NIStatusBarBoundsChangeAnimationDuration
#define NIStatusBarBoundsChangeAnimationDuration __NIMBUS_NS_SYMBOL(NIStatusBarBoundsChangeAnimationDuration)
#endif
#ifndef NINetworkActivityTaskDidStart
#define NINetworkActivityTaskDidStart __NIMBUS_NS_SYMBOL(NINetworkActivityTaskDidStart)
#endif
#ifndef NIRectShift
#define NIRectShift __NIMBUS_NS_SYMBOL(NIRectShift)
#endif
#ifndef NIStatusBarHeight
#define NIStatusBarHeight __NIMBUS_NS_SYMBOL(NIStatusBarHeight)
#endif
#ifndef NIPathForDocumentsResource
#define NIPathForDocumentsResource __NIMBUS_NS_SYMBOL(NIPathForDocumentsResource)
#endif
#ifndef NIDeviceOSVersionIsAtLeast
#define NIDeviceOSVersionIsAtLeast __NIMBUS_NS_SYMBOL(NIDeviceOSVersionIsAtLeast)
#endif
#ifndef NIRotateTransformForOrientation
#define NIRotateTransformForOrientation __NIMBUS_NS_SYMBOL(NIRotateTransformForOrientation)
#endif
#ifndef NIScreenScale
#define NIScreenScale __NIMBUS_NS_SYMBOL(NIScreenScale)
#endif
#ifndef NIMakeNSRangeFromCFRange
#define NIMakeNSRangeFromCFRange __NIMBUS_NS_SYMBOL(NIMakeNSRangeFromCFRange)
#endif
#ifndef NIIsStringWithAnyText
#define NIIsStringWithAnyText __NIMBUS_NS_SYMBOL(NIIsStringWithAnyText)
#endif
#ifndef NINetworkActivityTaskDidFinish
#define NINetworkActivityTaskDidFinish __NIMBUS_NS_SYMBOL(NINetworkActivityTaskDidFinish)
#endif
#ifndef NIDeviceRotationDuration
#define NIDeviceRotationDuration __NIMBUS_NS_SYMBOL(NIDeviceRotationDuration)
#endif
#ifndef NIPathForLibraryResource
#define NIPathForLibraryResource __NIMBUS_NS_SYMBOL(NIPathForLibraryResource)
#endif
#ifndef NICellContentPadding
#define NICellContentPadding __NIMBUS_NS_SYMBOL(NICellContentPadding)
#endif
#ifndef NIUIPopoverControllerClass
#define NIUIPopoverControllerClass __NIMBUS_NS_SYMBOL(NIUIPopoverControllerClass)
#endif
#ifndef boundf
#define boundf __NIMBUS_NS_SYMBOL(boundf)
#endif
#ifndef NIUITapGestureRecognizerClass
#define NIUITapGestureRecognizerClass __NIMBUS_NS_SYMBOL(NIUITapGestureRecognizerClass)
#endif
#ifndef NIPathForCachesResource
#define NIPathForCachesResource __NIMBUS_NS_SYMBOL(NIPathForCachesResource)
#endif
#ifndef boundi
#define boundi __NIMBUS_NS_SYMBOL(boundi)
#endif
#ifndef NISwizzleMethodsForNetworkActivityDebugging
#define NISwizzleMethodsForNetworkActivityDebugging __NIMBUS_NS_SYMBOL(NISwizzleMethodsForNetworkActivityDebugging)
#endif
#ifndef NIEnableNetworkActivityDebugging
#define NIEnableNetworkActivityDebugging __NIMBUS_NS_SYMBOL(NIEnableNetworkActivityDebugging)
#endif
#ifndef NIDisableNetworkActivityDebugging
#define NIDisableNetworkActivityDebugging __NIMBUS_NS_SYMBOL(NIDisableNetworkActivityDebugging)
#endif
// Externs
#ifndef NIMaxLogLevel
#define NIMaxLogLevel __NIMBUS_NS_SYMBOL(NIMaxLogLevel)
#endif
#ifndef NIDebugAssertionsShouldBreak
#define NIDebugAssertionsShouldBreak __NIMBUS_NS_SYMBOL(NIDebugAssertionsShouldBreak)
#endif
#ifndef NINimbusErrorDomain
#define NINimbusErrorDomain __NIMBUS_NS_SYMBOL(NINimbusErrorDomain)
#endif
#ifndef NIImageErrorKey
#define NIImageErrorKey __NIMBUS_NS_SYMBOL(NIImageErrorKey)
#endif
#endif
