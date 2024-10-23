
#ifndef VTKFILTERSEXTRACTION_EXPORT_H
#define VTKFILTERSEXTRACTION_EXPORT_H

#ifdef VTKFILTERSEXTRACTION_STATIC_DEFINE
#  define VTKFILTERSEXTRACTION_EXPORT
#  define VTKFILTERSEXTRACTION_NO_EXPORT
#else
#  ifndef VTKFILTERSEXTRACTION_EXPORT
#    ifdef FiltersExtraction_EXPORTS
        /* We are building this library */
#      define VTKFILTERSEXTRACTION_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define VTKFILTERSEXTRACTION_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef VTKFILTERSEXTRACTION_NO_EXPORT
#    define VTKFILTERSEXTRACTION_NO_EXPORT 
#  endif
#endif

#ifndef VTKFILTERSEXTRACTION_DEPRECATED
#  define VTKFILTERSEXTRACTION_DEPRECATED __declspec(deprecated)
#endif

#ifndef VTKFILTERSEXTRACTION_DEPRECATED_EXPORT
#  define VTKFILTERSEXTRACTION_DEPRECATED_EXPORT VTKFILTERSEXTRACTION_EXPORT VTKFILTERSEXTRACTION_DEPRECATED
#endif

#ifndef VTKFILTERSEXTRACTION_DEPRECATED_NO_EXPORT
#  define VTKFILTERSEXTRACTION_DEPRECATED_NO_EXPORT VTKFILTERSEXTRACTION_NO_EXPORT VTKFILTERSEXTRACTION_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKFILTERSEXTRACTION_NO_DEPRECATED
#    define VTKFILTERSEXTRACTION_NO_DEPRECATED
#  endif
#endif

/* VTK-HeaderTest-Exclude: vtkFiltersExtractionModule.h */

/* Include ABI Namespace */
#include "vtkABINamespace.h"

#endif /* VTKFILTERSEXTRACTION_EXPORT_H */
