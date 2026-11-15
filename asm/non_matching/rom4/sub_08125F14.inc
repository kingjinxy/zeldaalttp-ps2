	THUMB_FUNC_START sub_08125F14
sub_08125F14: @ 0x08125F14
	push {r4,lr}
	bl sub_08125860
	bl sub_08125FA0
	ldr r2, _08125F7C  @ =gRam
	ldr r0, _08125F80  @ =0x00001B0A
	add r1, r2, r0
	ldr r0, _08125F84  @ =0x0000FFFF
	strh r0, [r1]
	ldr r1, _08125F88  @ =0x00001B09
	add r0, r2, r1
	mov r3, #1
	strb r3, [r0]
	ldr r4, _08125F8C  @ =0x00001B12
	add r0, r2, r4
	mov r1, #32
	strb r1, [r0]
	add r4, r4, #1
	add r0, r2, r4
	strb r1, [r0]
	add r4, r4, #1
	add r0, r2, r4
	strh r1, [r0]
	ldr r1, _08125F90  @ =0x00001B0C
	add r0, r2, r1
	strb r3, [r0]
	sub r4, r4, #6
	add r1, r2, r4
	mov r0, #160
	lsl r0, r0, #8
	strh r0, [r1]
	ldr r0, _08125F94  @ =0x00001B10
	add r1, r2, r0
	mov r0, #192
	lsl r0, r0, #7
	strh r0, [r1]
	ldr r1, _08125F98  @ =0x00000A38
	add r0, r2, r1
	mov r1, #1
	strh r3, [r0]
	sub r4, r4, #6
	add r2, r2, r4
	strb r1, [r2]
	ldr r0, _08125F9C  @ =gUnknown_03000050
	mov r1, #104
	bl sub_08069358
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08125F7C:
	.4byte gRam
_08125F80:
	.4byte 0x00001B0A
_08125F84:
	.4byte 0x0000FFFF
_08125F88:
	.4byte 0x00001B09
_08125F8C:
	.4byte 0x00001B12
_08125F90:
	.4byte 0x00001B0C
_08125F94:
	.4byte 0x00001B10
_08125F98:
	.4byte 0x00000A38
_08125F9C:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_08125F14

