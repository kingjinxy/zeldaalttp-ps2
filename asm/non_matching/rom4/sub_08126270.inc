	THUMB_FUNC_START sub_08126270
sub_08126270: @ 0x08126270
	push {lr}
	ldr r2, _081262E0  @ =gRam
	ldr r1, _081262E4  @ =0x00001B10
	add r0, r2, r1
	mov r1, #0
	strh r1, [r0]
	ldr r3, _081262E8  @ =0x00001B0E
	add r0, r2, r3
	strh r1, [r0]
	ldr r1, _081262EC  @ =gUnknown_03000050
	ldrb r0, [r1, #1]
	sub r0, r0, #1
	strb r0, [r1, #1]
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _081262DA
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #1
	strb r0, [r1, #21]
	mov r0, #3
	strb r0, [r1, #29]
	ldr r0, _081262F0  @ =0x0000099B
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _081262F4  @ =0x000009AD
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _081262F8  @ =0x000009B4
	add r1, r2, r0
	mov r0, #16
	strb r0, [r1]
	ldr r0, _081262FC  @ =0x000009B5
	add r1, r2, r0
	mov r0, #5
	strb r0, [r1]
	ldr r0, _08126300  @ =0x000009D3
	add r1, r2, r0
	mov r0, #2
	strb r0, [r1]
	ldr r0, _08126304  @ =0x000009D4
	add r1, r2, r0
	mov r0, #49
	strb r0, [r1]
	ldr r1, _08126308  @ =0x000009E8
	add r0, r2, r1
	strh r3, [r0]
_081262DA:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081262E0:
	.4byte gRam
_081262E4:
	.4byte 0x00001B10
_081262E8:
	.4byte 0x00001B0E
_081262EC:
	.4byte gUnknown_03000050
_081262F0:
	.4byte 0x0000099B
_081262F4:
	.4byte 0x000009AD
_081262F8:
	.4byte 0x000009B4
_081262FC:
	.4byte 0x000009B5
_08126300:
	.4byte 0x000009D3
_08126304:
	.4byte 0x000009D4
_08126308:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08126270

