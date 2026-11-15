	THUMB_FUNC_START sub_080E8048
sub_080E8048: @ 0x080E8048
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080E8070  @ =gRam
	ldr r1, _080E8074  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E8080
	ldr r3, _080E8078  @ =0x00000F92
	add r1, r2, r3
	add r1, r4, r1
	ldr r2, _080E807C  @ =gUnknown_08177934
	lsr r0, r0, #27
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080E80A6
_080E8070:
	.4byte gRam
_080E8074:
	.4byte 0x00000FC2
_080E8078:
	.4byte 0x00000F92
_080E807C:
	.4byte gUnknown_08177934
_080E8080:
	ldr r0, _080E80AC  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E80B0  @ =0x00001152
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #16
	bl sub_080C35FC
	add r0, r4, #0
	mov r1, #94
	bl sub_080CF140
_080E80A6:
	pop {r4}
	pop {r0}
	bx r0
_080E80AC:
	.4byte 0x00000F52
_080E80B0:
	.4byte 0x00001152
	THUMB_FUNC_END sub_080E8048

