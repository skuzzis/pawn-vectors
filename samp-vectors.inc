/*
=================================================================================================================================================

Copyright 2021 - Andrei "SkuZZi" Sebastian

Permission is hereby granted, free of charge, to any person obtaining a copy of this software 
and associated documentation files (the "Software"), to deal in the Software without restriction, 
including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, 
and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR 
PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE 
FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

=================================================================================================================================================
*/

#if defined _SAMP_VECTORS_included
	#endinput
#endif
#define _SAMP_VECTORS_included

#define foreachVector(%1,%2)			for(new %2 = Vector_FindValue(%1, 0), vector_index = 1; vector_index <= Vector_Size(%1); %2 = Vector_FindValue(%1, vector_index), vector_index ++)

native Vector:Vector_Create();
native Vector_Size(Vector:vector_name);
native Vector_Even(Vector:vector_name);
native Vector_Odd(Vector:vector_name);
native Vector_Empty(Vector:vector_name);
native Vector_Random(Vector:vector_name);
native Vector_DebugMode(bool:toggle);

native Vector_Begin(Vector:vector_name);
native Vector_End(Vector:vector_name);
native Vector_First(Vector:vector_name);
native Vector_Last(Vector:vector_name);
native Vector_Next(Vector:vector_name, value);
native Vector_Prev(Vector:vector_name, value);
native Vector_PopBack(Vector:vector_name);
native Vector_PopFront(Vector:vector_name);
native Vector_FindIndex(Vector:vector_name, value);
native Vector_FindValue(Vector:vector_name, index);

native Vector_Add(Vector:vector_name, value);
native Vector_Remove(Vector:vector_name, value);
native Vector_Delete(Vector:vector_name, index);
native Vector_Replace(Vector:vector_name, old_value, new_value);
native Vector_ReplaceIndex(Vector:vector_name, index, new_value);
native Vector_Insert(Vector:vector_name, index, value);
native Vector_Clear(Vector:vector_name);
