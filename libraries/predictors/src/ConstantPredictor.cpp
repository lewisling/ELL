////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Project:  Embedded Machine Learning Library (EMLL)
//  File:     ConstantPredictor.cpp (predictors)
//  Authors:  Ofer Dekel
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include "ConstantPredictor.h"

// stl
#include <string>

namespace predictors
{
    ConstantPredictor::ConstantPredictor(double value) : _value(value)
    {}

    void ConstantPredictor::Serialize(utilities::Serializer& serializer) const
    {
        serializer.Serialize("value", _value);
    }

    void ConstantPredictor::Deserialize(utilities::Deserializer& serializer, utilities::SerializationContext& context)
    {
        serializer.Deserialize("value", _value, context);
    }

    void ConstantPredictor::Print(std::ostream& os) const
    {
        os << "Constant predictor = " << _value;
    }

    void ConstantPredictor::PrintLine(std::ostream& os, size_t tabs) const
    {
        os << std::string(tabs * 4, ' ');
        Print(os);
        os << "\n";
    }
}