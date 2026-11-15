	THUMB_FUNC_START sub_08118324
sub_08118324: @ 0x08118324
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _081183A8  @ =gRam
	ldr r2, _081183AC  @ =0x00000DCF
	add r1, r4, r2
	add r1, r0, r1
	ldrb r3, [r1]
	ldr r5, _081183B0  @ =0x00000DE3
	add r1, r4, r5
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r3, r3, r1
	lsl r3, r3, #16
	ldr r1, _081183B4  @ =0xFFF80000
	add r3, r3, r1
	lsr r3, r3, #16
	sub r2, r2, #10
	add r1, r4, r2
	add r1, r0, r1
	ldrb r2, [r1]
	sub r5, r5, #10
	add r1, r4, r5
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r2, r2, r1
	lsl r2, r2, #16
	ldr r1, _081183B4  @ =0xFFF80000
	add r2, r2, r1
	lsr r2, r2, #16
	ldr r5, _081183B8  @ =0x00001142
	add r1, r4, r5
	add r0, r0, r1
	ldrb r0, [r0]
	sub r2, r2, r0
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	strb r3, [r0]
	lsr r3, r3, #8
	mov r5, #151
	lsl r5, r5, #4
	add r0, r4, r5
	strb r3, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	lsr r2, r2, #8
	add r5, r5, #1
	add r0, r4, r5
	strb r2, [r0]
	add r1, r1, #3
	add r0, r4, r1
	mov r1, #15
	strb r1, [r0]
	ldr r2, _081183BC  @ =0x00000965
	add r4, r4, r2
	strb r1, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081183A8:
	.4byte gRam
_081183AC:
	.4byte 0x00000DCF
_081183B0:
	.4byte 0x00000DE3
_081183B4:
	.4byte 0xFFF80000
_081183B8:
	.4byte 0x00001142
_081183BC:
	.4byte 0x00000965
	THUMB_FUNC_END sub_08118324

