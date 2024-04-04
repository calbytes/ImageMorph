from conan import ConanFile
from conan.tools.cmake import cmake_layout

class ImageMorphRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"

    def requirements(self):
        self.requires("gtest/1.8.1")

    def layout(self):
        cmake_layout(self)