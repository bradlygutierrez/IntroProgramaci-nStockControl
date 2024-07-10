#include "FileManager.h"
#include <warning.h>
using namespace System;
using namespace System::Data;
using namespace System::IO;

void FileManager::WriteDataTableToFile(DataTable^ table, String^ filePath) {
    try {
        StreamWriter^ writer = gcnew StreamWriter(filePath);

        // Write column headers
        for (int i = 0; i < table->Columns->Count; i++) {
            writer->Write(table->Columns[i]->ColumnName);
            if (i < table->Columns->Count - 1) {
                writer->Write(", ");
            }
        }
        writer->WriteLine();

        // Write rows
        for each (DataRow ^ row in table->Rows) {
            for (int i = 0; i < table->Columns->Count; i++) {
                writer->Write(row[i]->ToString());
                if (i < table->Columns->Count - 1) {
                    writer->Write(", ");
                }
            }
            writer->WriteLine();
        }

        writer->Close();
    }
    catch (Exception^ e) {
        MessageBox::Show("Failed to write to file.", "File Write Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
    }
}
