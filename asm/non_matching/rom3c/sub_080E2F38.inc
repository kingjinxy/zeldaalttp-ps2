	THUMB_FUNC_START sub_080E2F38
sub_080E2F38: @ 0x080E2F38
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080E2F90  @ =gRam
	ldr r1, _080E2F94  @ =0x00001052
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #2
	strb r1, [r0]
	ldr r6, _080E2F98  @ =0x00000F92
	add r3, r2, r6
	add r3, r5, r3
	ldr r4, _080E2F9C  @ =gUnknown_08176E78
	lsl r1, r1, #24
	lsr r1, r1, #26
	mov r0, #7
	and r1, r1, r0
	add r6, r6, #32
	add r0, r2, r6
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #3
	orr r1, r1, r0
	add r1, r1, r4
	ldrb r0, [r1]
	strb r0, [r3]
	ldr r0, _080E2FA0  @ =0x00000996
	add r2, r2, r0
	ldrb r1, [r2]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080E2F88
	add r0, r5, #0
	mov r1, #82
	bl sub_080CF140
_080E2F88:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E2F90:
	.4byte gRam
_080E2F94:
	.4byte 0x00001052
_080E2F98:
	.4byte 0x00000F92
_080E2F9C:
	.4byte gUnknown_08176E78
_080E2FA0:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080E2F38

