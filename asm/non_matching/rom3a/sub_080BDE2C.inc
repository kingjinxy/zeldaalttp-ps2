	THUMB_FUNC_START sub_080BDE2C
sub_080BDE2C: @ 0x080BDE2C
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r5, _080BDE74  @ =gRam
	ldr r1, _080BDE78  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	mov r4, #15
	and r4, r4, r0
	cmp r4, #0
	bne _080BDE68
	bl sub_08069FF4
	mov r0, sp
	strh r4, [r0]
	ldr r1, _080BDE7C  @ =gUnknown_02000CA0
	ldr r2, _080BDE80  @ =0x01000010
	bl CpuSet
	ldr r1, _080BDE84  @ =0x0000099D
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080BDE68
	ldr r0, _080BDE88  @ =0x000009AD
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080BDE68:
	bl sub_08126CE0
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080BDE74:
	.4byte gRam
_080BDE78:
	.4byte 0x00000996
_080BDE7C:
	.4byte gUnknown_02000CA0
_080BDE80:
	.4byte 0x01000010
_080BDE84:
	.4byte 0x0000099D
_080BDE88:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080BDE2C

