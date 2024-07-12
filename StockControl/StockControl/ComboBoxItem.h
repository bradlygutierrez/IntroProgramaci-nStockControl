#pragma once

using namespace System;

public ref class ComboBoxItem
{
public:
    String^ DisplayMember;
    String^ ValueMember;

    ComboBoxItem(String^ display, String^ value)
    {
        DisplayMember = display;
        ValueMember = value;
    }

    virtual String^ ToString() override
    {
        return DisplayMember;
    }
};

