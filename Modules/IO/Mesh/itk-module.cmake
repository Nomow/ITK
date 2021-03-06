set(DOCUMENTATION "This module contains classes for reading and writing
Meshes as opposed to general images.")
itk_module(ITKIOMesh
  ENABLE_SHARED
  DEPENDS
    ITKCommon
    ITKIOMeshBase
  PRIVATE_DEPENDS
    ITKIOImageBase
    ITKDoubleConversion
    ITKGIFTI
  COMPILE_DEPENDS
    ITKMesh
  TEST_DEPENDS
    ITKTestKernel
    ITKQuadEdgeMesh
  FACTORY_NAMES
    MeshIO::BYU
    MeshIO::FreeSurferAscii
    MeshIO::FreeSurferBinary
    MeshIO::Gifti
    MeshIO::OBJ
    MeshIO::OFF
    MeshIO::VTKPolyData
  DESCRIPTION
    "${DOCUMENTATION}"
)
