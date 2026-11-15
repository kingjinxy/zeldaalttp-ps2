	THUMB_FUNC_START sub_08118028
sub_08118028: @ 0x08118028
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _08118090  @ =gRam
	ldr r1, _08118094  @ =0x000009AD
	add r0, r5, r1
	ldrb r6, [r0]
	cmp r6, #0
	bne _081180C0
	add r0, r4, #0
	bl sub_0811822C
	ldr r2, _08118098  @ =0x00001844
	add r0, r5, r2
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _081180C0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0811809C  @ =gUnknown_0817F0D4
	ldr r2, _081180A0  @ =0x00000E3D
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r3, r5, r1
	strb r0, [r3]
	sub r2, r2, #20
	add r0, r5, r2
	add r2, r4, r0
	ldrb r0, [r2]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #10
	bne _081180A8
	ldr r1, _081180A4  @ =0x00000E15
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	mov r2, #190
	lsl r2, r2, #5
	add r0, r5, r2
	strb r6, [r0]
	b _081180D4
_08118090:
	.4byte gRam
_08118094:
	.4byte 0x000009AD
_08118098:
	.4byte 0x00001844
_0811809C:
	.4byte gUnknown_0817F0D4
_081180A0:
	.4byte 0x00000E3D
_081180A4:
	.4byte 0x00000E15
_081180A8:
	strb r1, [r2]
	ldrb r0, [r3]
	add r0, r1, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _081180DC  @ =0x00001855
	add r2, r5, r1
	add r2, r4, r2
	ldr r1, _081180E0  @ =gUnknown_0817F0AC
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
_081180C0:
	ldr r0, _081180E4  @ =gRam
	ldr r2, _081180E8  @ =0x00000E5B
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	bl sub_080C1984
	add r0, r4, #0
	bl sub_081180EC
_081180D4:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081180DC:
	.4byte 0x00001855
_081180E0:
	.4byte gUnknown_0817F0AC
_081180E4:
	.4byte gRam
_081180E8:
	.4byte 0x00000E5B
	THUMB_FUNC_END sub_08118028

