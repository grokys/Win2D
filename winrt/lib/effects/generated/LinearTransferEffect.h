// Copyright (c) Microsoft Corporation. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may
// not use these files except in compliance with the License. You may obtain
// a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations
// under the License.

// This file was automatically generated. Please do not edit it manually.

#pragma once

namespace ABI { namespace Microsoft { namespace Graphics { namespace Canvas { namespace Effects 
{
    using namespace ::Microsoft::WRL;
    using namespace ABI::Microsoft::Graphics::Canvas;

    class LinearTransferEffect : public RuntimeClass<
        ILinearTransferEffect,
        MixIn<LinearTransferEffect, CanvasEffect>>,
        public CanvasEffect
    {
        InspectableClass(RuntimeClass_Microsoft_Graphics_Canvas_Effects_LinearTransferEffect, BaseTrust);

    public:
        LinearTransferEffect();

        PROPERTY(RedOffset, float);
        PROPERTY(RedSlope, float);
        PROPERTY(RedDisable, boolean);
        PROPERTY(GreenOffset, float);
        PROPERTY(GreenSlope, float);
        PROPERTY(GreenDisable, boolean);
        PROPERTY(BlueOffset, float);
        PROPERTY(BlueSlope, float);
        PROPERTY(BlueDisable, boolean);
        PROPERTY(AlphaOffset, float);
        PROPERTY(AlphaSlope, float);
        PROPERTY(AlphaDisable, boolean);
        PROPERTY(ClampOutput, boolean);
        PROPERTY(Source, IEffectInput*);
    };
}}}}}
