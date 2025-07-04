# HuaTeng Vision Camera SDK Integration for MATLAB

This repository contains materials and helper tools for integrating the **HuaTeng Vision Camera SDK** with **MATLAB**.
It provides a clean interface between the C-based SDK (DLL and headers) and MATLAB via both C-style headers and a custom MATLAB prototype file (`.m` protofile).

## 📦 Contents

- `Matlab_Camera_SDK_x64.h` — cleaned-up C header file compatible with MATLAB's `loadlibrary()` function.
- `Camera_SDK_x64_protofile.m` — prototype file that ensures correct structure definitions and memory layout in MATLAB.
- `examples/` — minimal working examples that show how to:
  - Load the SDK dynamically in MATLAB
  - Access SDK functions using both the header and the protofile
  - Pass and receive structured data correctly

## ⚙️ Requirements

- MATLAB (tested with R202x+)
- HuaTeng Vision Camera SDK (native C DLLs and headers)
- Windows OS (x64 or x86, matching DLL bitness)

## ❗ Why this is useful

MATLAB's automatic type inference often misinterprets structure fields from C headers, for example:
- Interpreting `int` as `double`
- Misaligning memory for nested structures or arrays

This project solves these issues by:
- Providing a MATLAB-ready `.h` file
- Defining an accurate `.m` protofile
- Giving usage examples for scientific applications

## 🚧 Roadmap

- [x] Initial header file adaptation
- [x] Write working `.m` protofile
- [ ] Expand test coverage for all SDK functions
- [ ] Add unit tests and verification tools

## 📄 License

MIT License or similar — this repo contains *no proprietary SDK code*, only interface helpers and examples.

> Note: You must obtain the official HuaTeng SDK separately from the vendor.

## 📬 Feedback / Contributions

Issues and pull requests are welcome! If you've successfully used this approach with other similar SDKs — feel free to contribute or share insights.
