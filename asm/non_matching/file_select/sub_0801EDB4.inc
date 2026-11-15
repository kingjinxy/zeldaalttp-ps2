	THUMB_FUNC_START sub_0801EDB4
sub_0801EDB4: @ 0x0801EDB4
	push {r4,r5,lr}
	mov r1, #50
	ldrsh r2, [r0, r1]
	ldr r4, _0801EE20  @ =gUnknown_03000450
	ldrh r1, [r4, #24]
	sub r2, r2, r1
	asr r2, r2, #4
	mov r3, #54
	ldrsh r1, [r0, r3]
	ldr r3, [r0, #72]
	ldrb r3, [r3, #1]
	lsl r3, r3, #24
	asr r3, r3, #24
	add r1, r1, r3
	ldrh r3, [r4, #26]
	sub r1, r1, r3
	asr r1, r1, #4
	lsl r1, r1, #6
	orr r2, r2, r1
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _0801EE24  @ =gUnknown_08137B90
	add r1, r0, #0
	add r1, r1, #43
	ldrb r1, [r1]
	lsr r1, r1, #3
	lsl r1, r1, #1
	add r1, r1, r3
	mov r4, #0
	ldrsh r3, [r1, r4]
	lsl r1, r3, #1
	add r1, r1, r3
	add r2, r2, r1
	lsl r2, r2, #16
	lsr r5, r2, #16
	add r4, r0, #0
	add r4, r4, #80
	ldrh r1, [r4]
	add r0, r5, #0
	mov r2, #9
	bl 0x08009E1C
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801EE28
	ldrh r1, [r4]
	add r0, r5, #0
	bl 0x080093C8
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801EE28
	mov r0, #1
	b _0801EE2A
_0801EE20:
	.4byte gUnknown_03000450
_0801EE24:
	.4byte gUnknown_08137B90
_0801EE28:
	mov r0, #0
_0801EE2A:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0801EDB4

