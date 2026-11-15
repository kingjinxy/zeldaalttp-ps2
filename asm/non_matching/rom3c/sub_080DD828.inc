	THUMB_FUNC_START sub_080DD828
sub_080DD828: @ 0x080DD828
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080DD894  @ =gRam
	ldr r1, _080DD898  @ =0x00000F92
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #6
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080C58F0
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DD88E
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C2C4C
	ldr r2, _080DD89C  @ =0x00001122
	add r3, r6, r2
	add r3, r5, r3
	ldrb r0, [r3]
	mov r2, #63
	and r2, r2, r0
	ldr r4, _080DD8A0  @ =gUnknown_0817624F
	ldr r1, _080DD8A4  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #4
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r4
	ldrb r0, [r0]
	orr r2, r2, r0
	strb r2, [r3]
	ldr r2, _080DD8A8  @ =0x00000FC2
	add r0, r6, r2
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080DD88E
	sub r2, r2, #32
	add r0, r6, r2
	add r0, r5, r0
	strb r1, [r0]
_080DD88E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080DD894:
	.4byte gRam
_080DD898:
	.4byte 0x00000F92
_080DD89C:
	.4byte 0x00001122
_080DD8A0:
	.4byte gUnknown_0817624F
_080DD8A4:
	.4byte 0x00000996
_080DD8A8:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080DD828

