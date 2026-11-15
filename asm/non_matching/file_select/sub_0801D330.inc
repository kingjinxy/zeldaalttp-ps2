	THUMB_FUNC_START sub_0801D330
sub_0801D330: @ 0x0801D330
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r0, [r5, #28]
	lsl r0, r0, #30
	cmp r0, #0
	beq _0801D370
	ldr r1, [r5, #84]
	mov r3, #128
	lsl r3, r3, #9
	add r0, r5, #0
	mov r2, #0
	bl sub_0803D4A4
	ldr r4, [r5, #84]
	ldr r3, _0801D36C  @ =gUnknown_0813A7E4
	add r0, r5, #0
	add r0, r0, #42
	ldrb r1, [r0]
	lsl r1, r1, #1
	sub r0, r0, #1
	ldrb r2, [r0]
	mov r0, #1
	and r0, r0, r2
	add r1, r1, r0
	add r1, r1, r3
	mov r0, #0
	ldrsb r0, [r1, r0]
	strh r0, [r4, #58]
	b _0801D378
	.byte 0x00
	.byte 0x00
_0801D36C:
	.4byte gUnknown_0813A7E4
_0801D370:
	ldr r1, [r5, #84]
	add r0, r5, #0
	bl sub_0803D3D0
_0801D378:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D330

	.byte 0x00
	.byte 0x00
