#!/usr/bin/env python3
# You need install rarfile package
# nix-shell -p python310Packages.rarfile

import rarfile
from pathlib import Path

directory = ""  # Replace with your desired directory path
cbr_path = Path.home() / "Arts_and_Entertainment/literature/Yukito Kishiro"

if __name__ == "__main__":
    for file in cbr_path.glob('**/*.cbr'):
        with rarfile.RarFile(file) as rf:
            first_file = rf.namelist()[0]  # Get the name of the first file in the archive
            print("Extracting: " + first_file)
            rf.extract(first_file, directory)  # Extract the first file to the same directory

