// PrintableSum.cpp

#include "PrintableSum.h"

void PrintableSum::Print(ostream& os, uint64 index, const vector<shared_ptr<IPrintable>>& layers) const
{}

void PrintableSum::ComputeLayout(const CommandLineArgs& args, double yOffset)
{

}

Point PrintableSum::GetBeginPoint(uint64 index) const
{
    return Point();
}

Point PrintableSum::GetEndPoint(uint64 index) const
{
    return Point();
}

double PrintableSum::GetWidth() const
{
    return 700;
}

double PrintableSum::GetHeight() const
{
    return 50;
}

string PrintableSum::GetTypeName() const
{
    return string("SUM");
}