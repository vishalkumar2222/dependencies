
#ifndef VTKFILTERSSELECTION_EXPORT_H
#define VTKFILTERSSELECTION_EXPORT_H

#ifdef VTKFILTERSSELECTION_STATIC_DEFINE
#  define VTKFILTERSSELECTION_EXPORT
#  define VTKFILTERSSELECTION_NO_EXPORT
#else
#  ifndef VTKFILTERSSELECTION_EXPORT
#    ifdef FiltersSelection_EXPORTS
        /* We are building this library */
#      define VTKFILTERSSELECTION_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKFILTERSSELECTION_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKFILTERSSELECTION_NO_EXPORT
#    define VTKFILTERSSELECTION_NO_EXPORT 
#  endif
#endif

#ifndef VTKFILTERSSELECTION_DEPRECATED
#  define VTKFILTERSSELECTION_DEPRECATED __declspec(deprecated)
#endif

#ifndef VTKFILTERSSELECTION_DEPRECATED_EXPORT
#  define VTKFILTERSSELECTION_DEPRECATED_EXPORT VTKFILTERSSELECTION_EXPORT VTKFILTERSSELECTION_DEPRECATED
#endif

#ifndef VTKFILTERSSELECTION_DEPRECATED_NO_EXPORT
#  define VTKFILTERSSELECTION_DEPRECATED_NO_EXPORT VTKFILTERSSELECTION_NO_EXPORT VTKFILTERSSELECTION_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKFILTERSSELECTION_NO_DEPRECATED
#    define VTKFILTERSSELECTION_NO_DEPRECATED
#  endif
#endif

/* VTK-HeaderTest-Exclude: vtkFiltersSelectionModule.h */

/* Include ABI Namespace */
#include "vtkABINamespace.h"

#endif /* VTKFILTERSSELECTION_EXPORT_H */
