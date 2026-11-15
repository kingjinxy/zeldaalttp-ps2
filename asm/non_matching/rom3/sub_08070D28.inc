	THUMB_FUNC_START sub_08070D28
sub_08070D28: @ 0x08070D28
	push {lr}
	bl sub_0807166C
	bl sub_0806D0C8
	ldr r2, _08070D60  @ =gRam
	ldr r0, _08070D64  @ =0x000009E8
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r1, _08070D68  @ =0x000009DA
	add r0, r2, r1
	ldrh r1, [r0]
	lsl r1, r1, #1
	ldr r0, _08070D6C  @ =gUnknown_02002000
	add r1, r1, r0
	ldr r0, _08070D70  @ =0x00000AAE
	add r2, r2, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	orr r0, r0, r2
	strh r0, [r1]
	bl sub_0806D598
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070D60:
	.4byte gRam
_08070D64:
	.4byte 0x000009E8
_08070D68:
	.4byte 0x000009DA
_08070D6C:
	.4byte gUnknown_02002000
_08070D70:
	.4byte 0x00000AAE
	THUMB_FUNC_END sub_08070D28

