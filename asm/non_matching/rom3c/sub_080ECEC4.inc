	THUMB_FUNC_START sub_080ECEC4
sub_080ECEC4: @ 0x080ECEC4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	ldr r5, _080ECF4C  @ =gRam
	ldr r0, _080ECF50  @ =0x00000FC2
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080ECF54  @ =0x00001142
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	bne _080ECF46
	add r0, r4, #0
	mov r1, #32
	bl sub_080C35FC
	ldr r1, _080ECF58  @ =0x00001152
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	ldr r2, _080ECF5C  @ =0x000010A2
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080ECF60  @ =0x00000F72
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _080ECF64  @ =0x000016C4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080ECF68  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080ECF6C  @ =0x00001062
	add r0, r5, r1
	add r0, r4, r0
	sub r2, r2, #5
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080ECF70  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #108
	bl sub_080CF0AC
_080ECF46:
	pop {r4,r5}
	pop {r0}
	bx r0
_080ECF4C:
	.4byte gRam
_080ECF50:
	.4byte 0x00000FC2
_080ECF54:
	.4byte 0x00001142
_080ECF58:
	.4byte 0x00001152
_080ECF5C:
	.4byte 0x000010A2
_080ECF60:
	.4byte 0x00000F72
_080ECF64:
	.4byte 0x000016C4
_080ECF68:
	.4byte 0x00000F82
_080ECF6C:
	.4byte 0x00001062
_080ECF70:
	.4byte 0x00001082
	THUMB_FUNC_END sub_080ECEC4

