set(ITKIOMesh_SRCS
  itkBYUMeshIO.cxx
  itkBYUMeshIOFactory.cxx
  itkFreeSurferAsciiMeshIO.cxx
  itkFreeSurferAsciiMeshIOFactory.cxx
  itkFreeSurferBinaryMeshIO.cxx
  itkFreeSurferBinaryMeshIOFactory.cxx
  itkGiftiMeshIO.cxx
  itkGiftiMeshIOFactory.cxx
  itkOBJMeshIO.cxx
  itkOBJMeshIOFactory.cxx
  itkOFFMeshIO.cxx
  itkOFFMeshIOFactory.cxx
  itkVTKPolyDataMeshIO.cxx
  itkVTKPolyDataMeshIOFactory.cxx
  )

itk_module_add_library(ITKIOMesh ${ITKIOMesh_SRCS})
