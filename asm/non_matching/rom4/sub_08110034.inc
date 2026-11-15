	THUMB_FUNC_START sub_08110034
sub_08110034: @ 0x08110034
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #135
	add r1, r5, #0
	mov r2, #13
	bl sub_080C9AAC
	add r4, r0, #0
	cmp r4, #0
	blt _081100D0
	ldr r2, _081100D8  @ =gRam
	ldr r1, _081100DC  @ =0x00000FB2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r3, [r0]
	mov r5, #150
	lsl r5, r5, #4
	add r1, r2, r5
	ldr r0, _081100E0  @ =gUnknown_0817D3CA
	add r0, r3, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _081100E4  @ =gUnknown_0817D3CE
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r5, _081100E8  @ =0x00000EE2
	add r0, r2, r5
	add r0, r4, r0
	strb r1, [r0]
	add r5, r5, #32
	add r0, r2, r5
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _081100EC  @ =0x00000964
	add r1, r2, r0
	ldr r0, _081100F0  @ =gUnknown_0817D3D2
	add r0, r3, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _081100F4  @ =gUnknown_0817D3D6
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r5, r5, #48
	add r0, r2, r5
	add r0, r4, r0
	strb r1, [r0]
	add r5, r5, #32
	add r0, r2, r5
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _081100F8  @ =0x00000F22
	add r1, r2, r0
	add r1, r4, r1
	ldr r0, _081100FC  @ =gUnknown_0817D3DA
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r5, r5, #32
	add r1, r2, r5
	add r1, r4, r1
	ldr r0, _08110100  @ =gUnknown_0817D3DE
	add r3, r3, r0
	ldrb r0, [r3]
	strb r0, [r1]
	ldr r0, _08110104  @ =0x00001172
	add r2, r2, r0
	add r2, r4, r2
	mov r0, #1
	strb r0, [r2]
_081100D0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081100D8:
	.4byte gRam
_081100DC:
	.4byte 0x00000FB2
_081100E0:
	.4byte gUnknown_0817D3CA
_081100E4:
	.4byte gUnknown_0817D3CE
_081100E8:
	.4byte 0x00000EE2
_081100EC:
	.4byte 0x00000964
_081100F0:
	.4byte gUnknown_0817D3D2
_081100F4:
	.4byte gUnknown_0817D3D6
_081100F8:
	.4byte 0x00000F22
_081100FC:
	.4byte gUnknown_0817D3DA
_08110100:
	.4byte gUnknown_0817D3DE
_08110104:
	.4byte 0x00001172
	THUMB_FUNC_END sub_08110034

