from conan import ConanFile
from conan.tools.cmake import cmake_layout

class ImageMorphRecipe(ConanFile):
    name = "ImageMorph"
    version = "1.0.0"
    license = "CaliRig LLC"
    author = "CAL"
    description = "Transforms Image and Video files"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"

    def requirements(self):
        self.requires("gtest/1.14.0")

    def layout(self):
        cmake_layout(self)