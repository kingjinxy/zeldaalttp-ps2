	THUMB_FUNC_START sub_08126A1C
sub_08126A1C: @ 0x08126A1C
	push {r4,r5,lr}
	ldr r4, _08126A5C  @ =gRam
	ldr r0, _08126A60  @ =0x00000C9C
	add r1, r4, r0
	mov r5, #0
	mov r0, #8
	strh r0, [r1]
	bl sub_0812FB84
	bl sub_08125F14
	ldr r1, _08126A64  @ =0x00001B0A
	add r0, r4, r1
	strh r5, [r0]
	ldr r1, _08126A68  @ =gUnknown_03000050
	mov r0, #1
	strb r0, [r1, #16]
	strb r0, [r1, #17]
	strb r0, [r1, #18]
	mov r0, #7
	strb r0, [r1, #24]
	strb r0, [r1, #25]
	strb r0, [r1, #26]
	ldr r0, _08126A6C  @ =0x000009AD
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08126A5C:
	.4byte gRam
_08126A60:
	.4byte 0x00000C9C
_08126A64:
	.4byte 0x00001B0A
_08126A68:
	.4byte gUnknown_03000050
_08126A6C:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08126A1C

