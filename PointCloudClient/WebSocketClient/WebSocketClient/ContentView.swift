//
//  ContentView.swift
//  WebSocketClient
//
//  Created by Kairav Parekh on 9/28/23.
//

import SwiftUI

struct ContentView: View {
    @ObservedObject var webSocket = WebSocket()
    
    var body: some View {
        VStack {
            Text("Websocket test\n")
            List(webSocket.messages, id: \.self) { message in
                Text(message)
            }
            Button(action: sendMessage) {
                Text("Send data!")
            }
        }
        .padding()
    }
    
    func sendMessage() {
        webSocket.sendMessage("some random data");
    }
}



#Preview {
    ContentView()
}
