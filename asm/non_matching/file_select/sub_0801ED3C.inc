	THUMB_FUNC_START sub_0801ED3C
sub_0801ED3C: @ 0x0801ED3C
	push {r4-r7,lr}
	add r4, r0, #0
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldr r3, _0801ED84  @ =gUnknown_03000450
	ldrh r0, [r3, #24]
	sub r1, r1, r0
	asr r1, r1, #4
	mov r2, #54
	ldrsh r0, [r4, r2]
	ldr r2, [r4, #72]
	ldrb r2, [r2, #1]
	lsl r2, r2, #24
	asr r2, r2, #24
	add r0, r0, r2
	ldrh r2, [r3, #26]
	sub r0, r0, r2
	asr r0, r0, #4
	lsl r0, r0, #6
	orr r1, r1, r0
	lsl r1, r1, #16
	lsr r5, r1, #16
	mov r6, #0
	ldr r7, _0801ED88  @ =gUnknown_08137B90
_0801ED6C:
	add r0, r4, #0
	add r0, r0, #80
	ldrh r1, [r0]
	add r0, r5, #0
	bl 0x080093C8
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801ED8C
	mov r0, #0
	b _0801EDAC
	.byte 0x00
	.byte 0x00
_0801ED84:
	.4byte gUnknown_03000450
_0801ED88:
	.4byte gUnknown_08137B90
_0801ED8C:
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	lsr r0, r0, #3
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	add r0, r5, r0
	lsl r0, r0, #16
	lsr r5, r0, #16
	add r0, r6, #1
	lsl r0, r0, #16
	lsr r6, r0, #16
	cmp r6, #3
	bls _0801ED6C
	mov r0, #1
_0801EDAC:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0801ED3C

	.byte 0x00
	.byte 0x00
