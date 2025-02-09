﻿//
// App.xaml.cpp
// App sınıfının uygulanması.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace HelloC__;

using namespace Platform;
using namespace Windows::ApplicationModel;
using namespace Windows::ApplicationModel::Activation;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Interop;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

/// <summary>
/// Tek örnekli uygulama nesnesini başlatır. Kodunuzun çalışacak ilk satırıdır.
/// Mantıksal olarak main() veya WinMain() eşdeğeridir. 
/// </summary>
App::App()
{
    InitializeComponent();
    Suspending += ref new SuspendingEventHandler(this, &App::OnSuspending);
}

/// <summary>
/// Uygulama son kullanıcı tarafından normal olarak başlatıldığında çağrılır. Diğer giriş noktaları
/// uygulamanın belirli bir dosyayı açmak için çalıştırılması gibi durumlarda kullanılır.
/// </summary>
/// <param name="e">Başlatma isteği ve işlemi ile ilgili ayrıntılar.</param>
void App::OnLaunched(Windows::ApplicationModel::Activation::LaunchActivatedEventArgs^ e)
{
    auto rootFrame = dynamic_cast<Frame^>(Window::Current->Content);

    // Pencerede içerik varken uygulama başlatmayı tekrarlamayın,
    // yalnızca pencerenin etkin olduğundan emin olun
    if (rootFrame == nullptr)
    {
        //Gezinti bağlamı olarak görev yapacak bir Çerçeve oluşturun ve bunu
        //bir SuspensionManager anahtarıyla ilişkilendirin
        rootFrame = ref new Frame();

        rootFrame->NavigationFailed += ref new Windows::UI::Xaml::Navigation::NavigationFailedEventHandler(this, &App::OnNavigationFailed);

        if (e->PreviousExecutionState == ApplicationExecutionState::Terminated)
        {
            // TODO: Kayıtlı oturum durumunu yalnızca uygun olduğunda, son başlatma adımlarını
            // zamanlayarak geri yükleme tamamlandıktan sonra geri yükleyin

        }

        if (e->PrelaunchActivated == false)
        {
            if (rootFrame->Content == nullptr)
            {
                // Gezinme yığını geri yüklenmediğinde, ilk sayfaya gidin,
                // gerekli bilgiyi gezinti parametresi olarak geçirerek
                // oluşturun
                rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);
            }
            // Çerçeveyi geçerli Pencereye yerleştirin
            Window::Current->Content = rootFrame;
            // Geçerli pencerenin etkin olduğundan emin olun
            Window::Current->Activate();
        }
    }
    else
    {
        if (e->PrelaunchActivated == false)
        {
            if (rootFrame->Content == nullptr)
            {
                // Gezinme yığını geri yüklenmediğinde, ilk sayfaya gidin,
                // gerekli bilgiyi gezinti parametresi olarak geçirerek
                // yapılandırın
                rootFrame->Navigate(TypeName(MainPage::typeid), e->Arguments);
            }
            // Geçerli pencerenin etkin olduğundan emin olun
            Window::Current->Activate();
        }
    }
}

/// <summary>
/// Uygulama yürütmesi askıya alınırken çağırılır. Uygulama durumu kaydedilir
/// uygulamanın sonlandırılacağı veya bellekte bulunan içerikle kaldığı yerden devam edeceği
/// bilinmeden kaydedilir.
/// </summary>
/// <param name="sender">Askıya alma isteğinin kaynağı.</param>
/// <param name="e">Askıya alma isteği hakkında detaylar.</param>
void App::OnSuspending(Object^ sender, SuspendingEventArgs^ e)
{
    (void) sender;  // Kullanılmamış parametre
    (void) e;   // Kullanılmamış parametre

    //TODO: Uygulama durumunu kaydet ve tüm arka plan etkinliklerini durdur
}

/// <summary>
/// Belirli bir sayfaya gitme işlemi başarısız olduğunda çağrılır
/// </summary>
/// <param name="sender">Gitme işleminde başarısız olan çerçeve</param>
/// <param name="e">Gitme işlemi hatasıyla ilgili ayrıntılar</param>
void App::OnNavigationFailed(Platform::Object ^sender, Windows::UI::Xaml::Navigation::NavigationFailedEventArgs ^e)
{
    throw ref new FailureException("Failed to load Page " + e->SourcePageType.Name);
}