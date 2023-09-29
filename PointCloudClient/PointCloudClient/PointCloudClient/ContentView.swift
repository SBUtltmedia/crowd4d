//
//  ContentView.swift
//  PointCloudClient
//
//  Created by Kairav Parekh on 5/5/23.
//

import SwiftUI
import Foundation

struct ContentView: View {
    
    var body: some View {
        VStack {
            Image(systemName: "globe")
                .imageScale(.large)
                .foregroundColor(.accentColor)
            Text("Hello, world!")
        }
        .padding()
    }

}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView();
    }
}
