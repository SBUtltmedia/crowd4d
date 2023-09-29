//
//  ContentView.swift
//  LiDARdata
//
//  Created by Kairav Parekh on 5/12/23.
//

import SwiftUI
import UIKit
import AVFoundation

struct ContentView: View {
    @State private var isRecording = false
    
    var body: some View {
        VStack {
            Button(isRecording ? "Stop Recording" : "Start Recording") {
                isRecording.toggle()
                if isRecording {
                    startRecording()
                } else {
                    stopRecording()
                }
            }
        }
        .padding()
    }
    
    func startRecording() {
        // Create an AVCaptureSession
        let session = AVCaptureSession()
        
        // Find the LiDAR camera device
        var device: AVCaptureDevice? = AVCaptureDevice.default(for: .video)
        if #available(iOS 14.0, *), let lidarDevice = AVCaptureDevice.default(.builtInLiDARCamera, for: .video, position: .back) {
            device = lidarDevice
        }
        guard let inputDevice = device else {
            fatalError("No video device found")
        }
        
        // Add the device input to the session
        do {
            let input = try AVCaptureDeviceInput(device: inputDevice)
            session.addInput(input)
            
        } catch {
            fatalError(error.localizedDescription)
        }
        
        // Add a depth data output to the session
        let output = AVCaptureDepthDataOutput()
        let queue = DispatchQueue(label: "com.myapp.captureQueue")
        output.setDelegate(self, callbackQueue: queue)
        if session.canAddOutput(output) {
            session.addOutput(output)
        } else {
            fatalError("Could not add depth data output")
        }
        
        // Start the session
        session.startRunning()
    }
    
    func stopRecording() {
        // Stop the recording
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
