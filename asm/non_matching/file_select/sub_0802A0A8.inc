	THUMB_FUNC_START sub_0802A0A8
sub_0802A0A8: @ 0x0802A0A8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #112
	ldrb r0, [r1]
	cmp r0, #2
	beq _0802A0D2
	add r0, r4, #0
	add r0, r0, #113
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802A0D2
	mov r0, #2
	strb r0, [r1]
	add r6, r4, #0
	add r6, r6, #43
	add r7, r4, #0
	add r7, r7, #114
	b _0802A10C
_0802A0D2:
	add r6, r4, #0
	add r6, r6, #43
	add r7, r4, #0
	add r7, r7, #114
	ldr r0, _0802A130  @ =gUnknown_084276C8
	mov r8, r0
	add r5, r4, #0
	add r5, r5, #112
_0802A0E2:
	ldrb r0, [r4, #10]
	sub r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r8
	ldr r0, [r0]
	bl sub_08003184
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r2, r1, #0
	ldrb r0, [r5]
	cmp r0, r1
	beq _0802A0E2
	cmp r1, #2
	bne _0802A10A
	add r0, r4, #0
	add r0, r0, #113
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802A0E2
_0802A10A:
	strb r2, [r5]
_0802A10C:
	mov r0, #30
	strb r0, [r4, #23]
	mov r1, #2
	strb r1, [r4, #24]
	mov r0, #8
	strb r0, [r6]
	mov r0, #128
	lsl r0, r0, #2
	str r0, [r4, #12]
	strb r1, [r4, #20]
	ldrh r0, [r4, #50]
	strh r0, [r7]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802A130:
	.4byte gUnknown_084276C8
	THUMB_FUNC_END sub_0802A0A8

