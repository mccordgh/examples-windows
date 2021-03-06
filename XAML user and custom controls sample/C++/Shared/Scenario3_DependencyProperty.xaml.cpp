﻿//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

//
// Scenario3.xaml.cpp
// Implementation of the Scenario3 class
//

#include "pch.h"
#include "Scenario3_DependencyProperty.xaml.h"

using namespace SDKSample::UserAndCustomControls;

using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Navigation;

Scenario3::Scenario3()
{
    InitializeComponent();
}

/// <summary>
/// Invoked when this page is about to be displayed in a Frame.
/// </summary>
/// <param name="e">Event data that describes how this page was reached.  The Parameter
/// property is typically used to configure the page.</param>
void Scenario3::OnNavigatedTo(NavigationEventArgs^ e)
{
    // A pointer back to the main page.  This is needed if you want to call methods in MainPage such
    // as NotifyUser()
    rootPage = MainPage::Current;
#if WINAPI_FAMILY == WINAPI_FAMILY_PHONE_APP
	MainScrollViewer->VerticalScrollMode = ScrollMode::Enabled;
	MainScrollViewer->VerticalScrollBarVisibility = ScrollBarVisibility::Visible;
#else
	MainScrollViewer->VerticalScrollMode = ScrollMode::Enabled;
	MainScrollViewer->VerticalScrollBarVisibility = ScrollBarVisibility::Disabled;
#endif
}

void SDKSample::UserAndCustomControls::Scenario3::NavigateDPHelp(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	auto uri = ref new Windows::Foundation::Uri("http://go.microsoft.com/fwlink/?LinkID=236356");

	Windows::System::Launcher::LaunchUriAsync(uri);
}
