	THUMB_FUNC_START sub_0803644C
sub_0803644C: @ 0x0803644C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r6, r0, #0
	add r3, r6, #0
	add r3, r3, #112
	ldrh r0, [r3]
	cmp r0, #0
	beq _08036464
	sub r0, r0, #1
	strh r0, [r3]
	b _080364DC
_08036464:
	ldr r2, [r6, #116]
	ldrh r1, [r2]
	ldr r4, _08036484  @ =0x0000FFFF
	cmp r1, r4
	beq _080364DC
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0803648C
	ldr r0, _08036488  @ =0x00007FFF
	and r0, r0, r1
	strh r0, [r3]
	add r7, r2, #2
	b _080364DA
	.byte 0x00
	.byte 0x00
_08036484:
	.4byte 0x0000FFFF
_08036488:
	.4byte 0x00007FFF
_0803648C:
	ldr r0, _080364E8  @ =gUnknown_0814774C
	ldrh r1, [r2]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r5, [r1]
	ldrh r0, [r5]
	add r7, r2, #2
	cmp r0, r4
	beq _080364DA
	mov r8, r4
_080364A0:
	mov r0, #49
	bl sub_08012468
	add r4, r0, #0
	cmp r4, #0
	beq _080364D2
	ldrh r0, [r5]
	lsr r0, r0, #8
	strb r0, [r4, #10]
	ldrh r0, [r5]
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrh r0, [r5, #2]
	strb r0, [r4, #11]
	ldrh r0, [r5, #4]
	strh r0, [r4, #50]
	ldrh r0, [r5, #6]
	strh r0, [r4, #54]
	ldrb r0, [r4, #10]
	cmp r0, #3
	bls _080364D2
	bl sub_080364EC
	strb r0, [r4, #10]
_080364D2:
	add r5, r5, #8
	ldrh r0, [r5]
	cmp r0, r8
	bne _080364A0
_080364DA:
	str r7, [r6, #116]
_080364DC:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080364E8:
	.4byte gUnknown_0814774C
	THUMB_FUNC_END sub_0803644C

