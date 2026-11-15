	THUMB_FUNC_START sub_080F8108
sub_080F8108: @ 0x080F8108
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080F8134  @ =gRam
	ldr r0, _080F8138  @ =0x00001624
	add r1, r6, r0
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
	ldr r1, _080F813C  @ =0x00000F92
	add r0, r6, r1
	add r7, r5, r0
	ldrb r0, [r7]
	cmp r0, #4
	bne _080F8144
	ldr r1, _080F8140  @ =gUnknown_08179EF8
	add r0, r5, #0
	mov r2, #2
	bl sub_080C9480
	b _080F8192
	.byte 0x00
	.byte 0x00
_080F8134:
	.4byte gRam
_080F8138:
	.4byte 0x00001624
_080F813C:
	.4byte 0x00000F92
_080F8140:
	.4byte gUnknown_08179EF8
_080F8144:
	ldr r1, _080F81A0  @ =0x00000F52
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #3
	ldr r0, _080F81A4  @ =gUnknown_08179F30
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #1
	bl sub_080C9480
	ldr r4, _080F81A8  @ =gUnknown_03003E74
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	ldr r1, _080F81AC  @ =0x00000F62
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080F81B0  @ =gUnknown_08179F40
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #2
	bl sub_080C9480
	ldrh r0, [r4]
	add r0, r0, #2
	strh r0, [r4]
	ldrb r0, [r7]
	mov r1, #1
	and r1, r1, r0
	lsl r1, r1, #5
	ldr r0, _080F81B4  @ =gUnknown_08179F60
	add r1, r1, r0
	add r0, r5, #0
	mov r2, #4
	bl sub_080C9480
_080F8192:
	add r0, r5, #0
	bl sub_080C1F70
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F81A0:
	.4byte 0x00000F52
_080F81A4:
	.4byte gUnknown_08179F30
_080F81A8:
	.4byte gUnknown_03003E74
_080F81AC:
	.4byte 0x00000F62
_080F81B0:
	.4byte gUnknown_08179F40
_080F81B4:
	.4byte gUnknown_08179F60
	THUMB_FUNC_END sub_080F8108

