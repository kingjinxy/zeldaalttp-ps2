	THUMB_FUNC_START sub_08075A6C
sub_08075A6C: @ 0x08075A6C
	push {lr}
	ldr r1, _08075A88  @ =gUnknown_0814DADC
	ldr r0, _08075A8C  @ =gRam
	ldr r2, _08075A90  @ =0x000009AD
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08075A88:
	.4byte gUnknown_0814DADC
_08075A8C:
	.4byte gRam
_08075A90:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08075A6C

