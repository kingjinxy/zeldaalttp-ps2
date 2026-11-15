	THUMB_FUNC_START sub_0802B3AC
sub_0802B3AC: @ 0x0802B3AC
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r1, [r5, #10]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0802B410
	mov r0, #56
	mov r1, #0
	mov r2, #1
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	bne _0802B3D2
	add r0, r5, #0
	bl DeleteThisEntity
	b _0802B46C
_0802B3D2:
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	ldr r0, _0802B404  @ =gUnknown_0200002C
	str r4, [r0]
	str r4, [r5, #88]
	str r5, [r4, #84]
	ldr r0, _0802B408  @ =gUnknown_0201F000
	add r1, r5, #0
	add r1, r1, #82
	ldrb r2, [r1]
	lsl r2, r2, #2
	add r2, r2, r0
	ldr r3, _0802B40C  @ =gUnknown_08137B10
	ldrb r1, [r5, #10]
	mov r0, #31
	and r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r3
	ldr r1, [r2]
	ldr r0, [r0]
	orr r1, r1, r0
	str r1, [r2]
	b _0802B41C
_0802B404:
	.4byte gUnknown_0200002C
_0802B408:
	.4byte gUnknown_0201F000
_0802B40C:
	.4byte gUnknown_08137B10
_0802B410:
	ldrb r0, [r5, #11]
	cmp r0, #0
	bne _0802B41C
	add r0, r5, #0
	bl 0x08003E24
_0802B41C:
	ldr r2, _0802B440  @ =gUnknown_08137B10
	ldrb r1, [r5, #10]
	mov r0, #31
	and r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	str r0, [r5, #124]
	ldrb r1, [r5, #11]
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	strb r0, [r5, #10]
	cmp r0, #0
	bne _0802B448
	ldr r0, _0802B444  @ =gUnknown_0842773C
	str r0, [r5, #72]
	b _0802B466
_0802B440:
	.4byte gUnknown_08137B10
_0802B444:
	.4byte gUnknown_0842773C
_0802B448:
	ldrb r1, [r5, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r5, #28]
	mov r0, #15
	strb r0, [r5, #23]
	mov r0, #0
	strb r0, [r5, #26]
	add r0, r5, #0
	mov r1, #1
	bl 0x08003870
_0802B466:
	ldrb r0, [r5, #20]
	add r0, r0, #1
	strb r0, [r5, #20]
_0802B46C:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802B3AC

	.byte 0x00
	.byte 0x00
