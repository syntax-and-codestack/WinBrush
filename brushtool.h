#pragma once

#include "source/stdafx.h"

#ifndef BRUSHTOOL_H
#define BRUSHTOOL_H

BrushTool SignalBrush;//use this one

class BrushTool {
public:
    int m_iBrushSize();

    bool m_bBrushDrag_Failed(brush_t* b);
    bool m_bBrushCreation_Failed(brush_t* b);
    bool m_bBrushCreate(brush_t* b, vec3_t mins, vec3_t maxs, bool bDetailed);

    bool m_bBrushConvert_Node(brush_t* b);

    void m_BrushCastNode(brush_t* b) {
        if (SignalBrush.m_bBrushConvert_Node(b))
        {
                using brush_t = BrushNode;
        }
    };

    int m_iClipBrush( int point );

};

class BrushNode : public BrushTool {
public:
    vec_t SetBrushNodeColor(vec3_t r, vec3_t g, vec3_t b);
    const char* Key;
    const char* Value;
    const char* INFO = " Brush Node ( Not Quaked from .def ) ";

    size_t Brush_NodeSize();

};

class BrushMessage : public BrushTool{
public:
 void Brush_SysPrintf(const char* bmsg, ...);
 const char* BRUSH_MESSAGE_MODULE;
};

#endif