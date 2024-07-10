#pragma once

using namespace System;
using namespace System::Data;
using namespace System::IO;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Drawing;

ref class FileManager
{
public:
    static void WriteDataTableToFile(DataTable^ table, String^ filePath);
};
