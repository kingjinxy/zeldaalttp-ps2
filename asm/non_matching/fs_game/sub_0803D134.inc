	THUMB_FUNC_START sub_0803D134
sub_0803D134: @ 0x0803D134
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, _0803D160  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #13]
	cmp r1, #255
	bne _0803D164
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #42
	ldrb r1, [r2]
	add r0, r1, #0
	b _0803D21C
_0803D160:
	.4byte gUnknown_03006A30
_0803D164:
	add r0, r7, #4
	ldr r1, _0803D1C4  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrb r2, [r1, #13]
	mov r3, #28
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	lsr r2, r1, #2
	add r1, r2, #0
	strb r1, [r0]
	add r0, r7, #4
	ldrb r1, [r0]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0803D1C8
	add r1, r7, #4
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	sub r2, r1, #1
	sub r0, r0, r2
	mov r1, #4
	and r0, r0, r1
	cmp r0, #0
	bne _0803D1C8
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #42
	ldrb r1, [r2]
	add r0, r1, #0
	b _0803D21C
_0803D1C4:
	.4byte gUnknown_03006A30
_0803D1C8:
	ldr r0, [r7]
	mov r1, #0
	add r2, r7, #4
	ldrb r3, [r2]
	cmp r3, #4
	bls _0803D1D6
	mov r1, #1
_0803D1D6:
	mov r2, #1
	and r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #2
	ldrb r2, [r0, #28]
	mov r3, #251
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, [r7]
	add r1, r7, #4
	ldrb r2, [r1]
	mov r3, #6
	add r1, r2, #0
	and r1, r1, r3
	add r2, r0, #0
	add r0, r0, #42
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #42
	ldrb r1, [r2]
	add r0, r1, #0
	b _0803D21C
_0803D21C:
	add sp, sp, #8
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803D134

