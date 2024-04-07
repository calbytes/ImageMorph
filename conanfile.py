from conan import ConanFile
#from conan.tools.cmake import cmake_layout

class ImageMorphRecipe(ConanFile):
    name = "ImageMorph"
    version = "1.0.0"
    license = "CaliRig LLC"
    author = "CAL"
    description = "Transforms Image and Video files"
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"
    source_folder = "."
    build_folder = "build"
    install_folder = "build"
    package_folder = "package"
    
    def requirements(self):
        self.requires("gtest/1.14.0")