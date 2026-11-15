	THUMB_FUNC_START sub_080266DC
sub_080266DC: @ 0x080266DC
	push {r4,lr}
	add r3, r0, #0
	ldr r4, [r3, #84]
	ldrb r0, [r3, #20]
	cmp r0, #0
	bne _08026708
	mov r0, #1
	strb r0, [r3, #20]
	add r2, r3, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #32
	orr r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r4, #9]
	add r0, r3, #0
	add r0, r0, #112
	strb r1, [r0]
	ldrb r0, [r4, #8]
	add r1, r3, #0
	add r1, r1, #113
	strb r0, [r1]
_08026708:
	add r0, r4, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802672A
	add r0, r3, #0
	add r0, r0, #112
	ldrb r0, [r0]
	ldrb r1, [r4, #9]
	cmp r0, r1
	bne _0802672A
	add r0, r3, #0
	add r0, r0, #113
	ldrb r0, [r0]
	ldrb r1, [r4, #8]
	cmp r0, r1
	beq _08026732
_0802672A:
	add r0, r3, #0
	bl DeleteThisEntity
	b _0802674E
_08026732:
	add r0, r3, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0802674E
	add r1, r4, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	bne _0802674E
	mov r0, #244
	strb r0, [r1]
_0802674E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080266DC

