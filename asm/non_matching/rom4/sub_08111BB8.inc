	THUMB_FUNC_START sub_08111BB8
sub_08111BB8: @ 0x08111BB8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_08111C20
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08111C04
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r2, _08111C0C  @ =gRam
	ldr r1, _08111C10  @ =0x00001082
	add r3, r2, r1
	add r3, r4, r3
	ldr r5, _08111C14  @ =0x00000FB2
	add r1, r2, r5
	add r1, r4, r1
	strb r0, [r1]
	strb r0, [r3]
	ldr r1, _08111C18  @ =gUnknown_0817D684
	ldr r0, _08111C1C  @ =0x00000F52
	add r2, r2, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_08111C04:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08111C0C:
	.4byte gRam
_08111C10:
	.4byte 0x00001082
_08111C14:
	.4byte 0x00000FB2
_08111C18:
	.4byte gUnknown_0817D684
_08111C1C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08111BB8

