	THUMB_FUNC_START sub_081269D0
sub_081269D0: @ 0x081269D0
	push {r4,r5,lr}
	ldr r5, _08126A0C  @ =gRam
	ldr r0, _08126A10  @ =0x00000C9C
	add r1, r5, r0
	mov r4, #1
	mov r0, #1
	strh r0, [r1]
	bl sub_0812FB84
	bl sub_08125F14
	ldr r1, _08126A14  @ =gUnknown_03000050
	strb r4, [r1, #16]
	strb r4, [r1, #17]
	strb r4, [r1, #18]
	mov r0, #4
	strb r0, [r1, #24]
	mov r0, #5
	strb r0, [r1, #25]
	mov r0, #6
	strb r0, [r1, #26]
	ldr r0, _08126A18  @ =0x000009AD
	add r5, r5, r0
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08126A0C:
	.4byte gRam
_08126A10:
	.4byte 0x00000C9C
_08126A14:
	.4byte gUnknown_03000050
_08126A18:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_081269D0

