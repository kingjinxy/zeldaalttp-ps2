	THUMB_FUNC_START sub_0801424C
sub_0801424C: @ 0x0801424C
	push {r4-r7,lr}
	ldr r1, _080142C4  @ =gUnknown_03006C80
	ldrb r0, [r1, #6]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r2, #0
	ldrb r3, [r1]
	add r5, r1, #0
	ldr r7, _080142C8  @ =gUnknown_08429D70
	cmp r2, r3
	bcs _08014286
	add r0, r5, #0
	add r0, r0, #45
	ldrb r0, [r0]
	cmp r0, #63
	bne _08014286
	add r1, r3, #0
_08014270:
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, r1
	bcs _08014286
	lsl r0, r2, #3
	add r0, r0, r5
	add r0, r0, #45
	ldrb r0, [r0]
	cmp r0, #63
	beq _08014270
_08014286:
	ldrb r1, [r5]
	cmp r2, r1
	bne _08014292
	add r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
_08014292:
	ldr r3, _080142CC  @ =0x0000FFFF
	mov r2, #0
	lsl r4, r4, #2
	mov r12, r4
	cmp r2, r1
	bcs _080142B6
	add r4, r5, #0
_080142A0:
	lsl r0, r2, #3
	add r0, r0, r4
	ldrh r6, [r0, #46]
	cmp r3, r6
	bls _080142AC
	ldrh r3, [r0, #46]
_080142AC:
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, r1
	bcc _080142A0
_080142B6:
	cmp r3, #0
	beq _080142DA
	cmp r3, #5
	bhi _080142D0
	mov r3, #1
	b _080142DA
	.byte 0x00
	.byte 0x00
_080142C4:
	.4byte gUnknown_03006C80
_080142C8:
	.4byte gUnknown_08429D70
_080142CC:
	.4byte 0x0000FFFF
_080142D0:
	cmp r3, #10
	bhi _080142D8
	mov r3, #2
	b _080142DA
_080142D8:
	mov r3, #3
_080142DA:
	ldrb r0, [r5, #1]
	lsl r0, r0, #2
	add r0, r0, r7
	ldr r0, [r0]
	add r0, r0, r12
	add r0, r0, r3
	ldrb r1, [r0]
	add r0, r5, #0
	add r0, r0, #77
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801424C

