/*******************************************************************************
    This file is part of ColPack, which is under its License protection.
    You should have received a copy of the License. If not, see
    <https://github.com/CSCsw/ColPack>
*******************************************************************************/

/************************************************************************************/
/*																					*/
/*  Headers.h (Header of header files)
 */
/*																					*/
/************************************************************************************/
#ifndef HEADER_H
#define HEADER_H

#include <ColPack/Definitions.h>

#ifdef SYSTEM_TIME

  #include <sys/times.h>

#else

  #include <ctime>

#endif

#include <cstdarg>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

#include <list>
#include <map>
#include <queue>
#include <set>
#include <vector>

#include <algorithm>
#include <iterator>
#include <utility> //for pair<dataType1, dataType2>

#ifdef _OPENMP
  #include <omp.h>
#endif

#include <ColPack/Utilities/CoutLock.h>
#include <ColPack/Utilities/DisjointSets.h>
#include <ColPack/Utilities/File.h>
#include <ColPack/Utilities/MatrixDeallocation.h>
#include <ColPack/Utilities/Pause.h>
#include <ColPack/Utilities/StringTokenizer.h>
#include <ColPack/Utilities/Timer.h>
#include <ColPack/Utilities/current_time.h>
#include <ColPack/Utilities/mmio.h>

#include <ColPack/GeneralGraphColoring/GraphColoring.h>
#include <ColPack/GeneralGraphColoring/GraphColoringInterface.h>
#include <ColPack/GeneralGraphColoring/GraphCore.h>
#include <ColPack/GeneralGraphColoring/GraphInputOutput.h>
#include <ColPack/GeneralGraphColoring/GraphOrdering.h>

#include <ColPack/BipartiteGraphBicoloring/BipartiteGraphBicoloring.h>
#include <ColPack/BipartiteGraphBicoloring/BipartiteGraphBicoloringInterface.h>
#include <ColPack/BipartiteGraphBicoloring/BipartiteGraphCore.h>
#include <ColPack/BipartiteGraphBicoloring/BipartiteGraphInputOutput.h>
#include <ColPack/BipartiteGraphBicoloring/BipartiteGraphOrdering.h>
#include <ColPack/BipartiteGraphBicoloring/BipartiteGraphVertexCover.h>

#include <ColPack/BipartiteGraphPartialColoring/BipartiteGraphPartialColoring.h>
#include <ColPack/BipartiteGraphPartialColoring/BipartiteGraphPartialColoringInterface.h>
#include <ColPack/BipartiteGraphPartialColoring/BipartiteGraphPartialOrdering.h>

#include <ColPack/Recovery/HessianRecovery.h>
#include <ColPack/Recovery/JacobianRecovery1D.h>
#include <ColPack/Recovery/JacobianRecovery2D.h>
#include <ColPack/Recovery/RecoveryCore.h>

#include <ColPack/Utilities/extra.h>

#endif
