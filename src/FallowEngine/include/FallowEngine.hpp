#ifndef Fallow_Engine_Hpp
#define Fallow_Engine_Hpp

//---------MODULES---------//
#include <Modules/Audio/AudioManager.hpp>
#include <Modules/IO/Keyboard.hpp>
//--Graphics
#include <Modules/Graphics/Buffers/VAO.hpp>
#include <Modules/Graphics/Buffers/VBO.hpp>
#include <Modules/Graphics/FallowAlias.hpp>
#include <Modules/Graphics/Components/Mash.hpp>

//-------CORE------//
//--Window
#include <Core/Window/Window.hpp>
#include <Core/Window/WindowState.hpp>
#include <Core/Window/WindowTraits.hpp>
//--Memory
#include <Core/MemoryManager/Allocator/StackAllocator.hpp>
//--Math
#include <Core/Math/Matrix.hpp>
#include <Core/Math/MatrixTraits.hpp>
//-------TOOLS------//
#include <Tools/Logger/Container.hpp>
#include <Tools/Logger/LogBehavior.hpp>
#include <Tools/Logger/LogStyle.hpp>
#include <Tools/Logger/Logging.hpp>

#endif // Fallow_Engine_Hpp