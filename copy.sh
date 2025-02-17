#!/bin/bash

# Define destination path
DEST_DIR="."
# Path to the source directories list file
SOURCE_LIST="source_ros2.txt"

ROS_VERSION="ros2"

# Check if the source list file exists
if [ ! -f "$SOURCE_LIST" ]; then
    echo "Error: Source list file '$SOURCE_LIST' not found"
    exit 1
fi

# Create destination directory if it doesn't exist
mkdir -p "$DEST_DIR"

# Read each source directory from the file and process it
while IFS= read -r SOURCE_DIR || [ -n "$SOURCE_DIR" ]; do
    # Skip empty lines and comments
    if [ -z "$SOURCE_DIR" ] || [[ "$SOURCE_DIR" =~ ^[[:space:]]*# ]]; then
        continue
    fi

    # Remove leading/trailing whitespace
    SOURCE_DIR=$(echo "$SOURCE_DIR" | xargs)

    echo "Processing directory: $SOURCE_DIR"

    # Sync files using rsync
    rsync -avh --progress --delete "${SOURCE_DIR}"/target/${ROS_VERSION}/* "$DEST_DIR"

    echo "----------------------------------------"
done < "$SOURCE_LIST"

echo "Synchronization process completed"
