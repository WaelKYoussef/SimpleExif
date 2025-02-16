// swift-tools-version: 5.6

import PackageDescription

let package = Package(
    name: "SimpleExif",

    platforms: [
        .iOS(.v10) 
    ],

    products: [
        .library(
            name: "SimpleExif",
            targets: ["SimpleExif"]),
    ],
    dependencies: [ ],
    targets: [
        .target(
            name: "SimpleExif",
            dependencies: []),
    ]
)