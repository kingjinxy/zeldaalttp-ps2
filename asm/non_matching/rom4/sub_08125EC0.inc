	THUMB_FUNC_START sub_08125EC0
sub_08125EC0: @ 0x08125EC0
	push {r4,r5,lr}
	ldr r5, _08125F04  @ =gRam
	ldr r0, _08125F08  @ =0x00000C9C
	add r1, r5, r0
	mov r4, #0
	mov r0, #8
	strh r0, [r1]
	bl sub_08125F14
	ldr r0, _08125F0C  @ =gUnknown_03000050
	mov r1, #1
	strb r1, [r0, #16]
	strb r1, [r0, #17]
	strb r1, [r0, #18]
	strb r4, [r0, #24]
	strb r4, [r0, #25]
	strb r4, [r0, #26]
	strb r1, [r0, #20]
	mov r1, #2
	strb r1, [r0, #28]
	mov r0, #152
	lsl r0, r0, #4
	add r1, r5, r0
	mov r0, #15
	strb r0, [r1]
	ldr r0, _08125F10  @ =0x000009AD
	add r5, r5, r0
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08125F04:
	.4byte gRam
_08125F08:
	.4byte 0x00000C9C
_08125F0C:
	.4byte gUnknown_03000050
_08125F10:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08125EC0

