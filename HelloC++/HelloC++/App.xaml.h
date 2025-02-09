//
// App.xaml.h
// App sınıfının bildirimi.
//

#pragma once

#include "App.g.h"

namespace HelloC__
{
	/// <summary>
	/// Varsayılan Uygulama sınıfını tamamlayacak uygulamaya özgü davranış sağlar.
	/// </summary>
	ref class App sealed
	{
	protected:
		virtual void OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ e) override;

	internal:
		App();

	private:
		void OnSuspending(Platform::Object^ sender, Windows::ApplicationModel::SuspendingEventArgs^ e);
		void OnNavigationFailed(Platform::Object ^sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs ^e);
	};
}
