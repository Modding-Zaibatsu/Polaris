    #pragma once
    #include "Modules/ModuleInterface.h"
    #include "Modules/ModuleManager.h"

    class FPolarisEditorModule : public IModuleInterface
    {
    public:

        virtual void StartupModule() override;
        virtual void ShutdownModule() override;
        
    private:

        TSharedPtr<FCustomizeSetActions> CustomizeSetAssetTypeActions;
    };