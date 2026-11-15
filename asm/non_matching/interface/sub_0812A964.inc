	THUMB_FUNC_START sub_0812A964
sub_0812A964: @ 0x0812A964
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #40
	str r0, [sp, #16]
	add r6, r2, #0
	lsl r3, r3, #24
	lsr r3, r3, #24
	ldr r4, [r0, #96]
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r10, r1
	mov r0, r10
	str r0, [sp, #24]
	mov r1, #0
	mov r9, r1
	mov r2, #176
	str r2, [sp, #28]
	ldr r1, [sp, #16]
	ldr r0, [r1, #92]
	add r0, r0, #16
	str r0, [sp, #32]
	ldr r2, _0812A9EC  @ =gUnknown_0300069C
	str r2, [sp, #20]
	ldr r0, _0812A9F0  @ =gUnknown_03000160
	ldrb r0, [r0]
	cmp r0, #15
	bhi _0812A9AA
	ldrb r0, [r1, #26]
	cmp r0, #0
	beq _0812A9AA
	ldr r0, _0812A9F4  @ =gUnknown_0300095C
	str r0, [sp, #20]
_0812A9AA:
	ldr r1, [sp, #20]
	mov r2, #176
	lsl r2, r2, #1
	add r1, r1, r2
	mov r8, r1
	mov r0, #127
	sub r0, r0, r3
	ldr r1, [sp, #24]
	mul r0, r1, r0
	lsl r0, r0, #16
	lsr r0, r0, #24
	str r0, [sp, #24]
	mov r0, r10
	mul r0, r3, r0
	lsl r0, r0, #16
	lsr r0, r0, #24
	mov r10, r0
	ldr r2, [sp, #16]
	ldr r0, [r2, #92]
	ldr r7, [r0, #12]
	cmp r7, #0
	bne _0812A9D8
	ldr r7, [r0]
_0812A9D8:
	ldr r1, [sp, #28]
	add r0, r6, #0
	mul r0, r1, r0
	add r0, r4, r0
	lsr r0, r0, #8
	cmp r0, r7
	bcs _0812A9F8
	mov r5, r8
	b _0812AA10
	.byte 0x00
	.byte 0x00
_0812A9EC:
	.4byte gUnknown_0300069C
_0812A9F0:
	.4byte gUnknown_03000160
_0812A9F4:
	.4byte gUnknown_0300095C
_0812A9F8:
	lsl r0, r7, #8
	sub r0, r0, r4
	sub r0, r0, #1
	add r0, r0, r6
	add r1, r6, #0
	bl Div
	lsl r0, r0, #1
	ldr r2, [sp, #20]
	add r5, r2, r0
	mov r0, #1
	mov r9, r0
_0812AA10:
	ldr r1, [sp, #16]
	ldr r0, [r1, #92]
	ldr r1, [r0, #12]
	cmp r1, #0
	beq _0812AA20
	mov r2, r9
	cmp r2, #0
	bne _0812AA4C
_0812AA20:
	ldr r0, _0812AA48  @ =gUnknown_030003D4
	str r4, [sp]
	str r6, [sp, #4]
	ldr r1, [sp, #24]
	str r1, [sp, #8]
	mov r2, r10
	str r2, [sp, #12]
	ldr r4, [r0]
	ldr r0, [sp, #32]
	ldr r1, [sp, #20]
	mov r2, r8
	add r3, r5, #0
	bl _call_via_r4
	add r4, r0, #0
	mov r0, r9
	cmp r0, #0
	beq _0812AAFA
	mov r0, #1
	b _0812AB00
_0812AA48:
	.4byte gUnknown_030003D4
_0812AA4C:
	ldr r0, [r0, #8]
	sub r1, r1, r0
	lsl r1, r1, #8
	str r1, [sp, #36]
	ldr r1, _0812AAA8  @ =gUnknown_030003D4
	str r4, [sp]
	str r6, [sp, #4]
	ldr r2, [sp, #24]
	str r2, [sp, #8]
	mov r0, r10
	str r0, [sp, #12]
	ldr r4, [r1]
	ldr r0, [sp, #32]
	ldr r1, [sp, #20]
	mov r2, r8
	add r3, r5, #0
	bl _call_via_r4
	add r4, r0, #0
	ldr r1, [sp, #36]
	sub r4, r4, r1
	ldr r2, [sp, #20]
	sub r0, r5, r2
	asr r0, r0, #1
	ldr r1, [sp, #28]
	sub r1, r1, r0
	str r1, [sp, #28]
	cmp r1, #0
	beq _0812AAFA
_0812AA86:
	str r5, [sp, #20]
	mov r2, #176
	lsl r2, r2, #1
	add r2, r2, r5
	mov r8, r2
	ldr r1, [sp, #28]
	add r0, r6, #0
	mul r0, r1, r0
	add r0, r4, r0
	lsr r0, r0, #8
	cmp r0, r7
	bcs _0812AAAC
	lsl r0, r1, #1
	add r5, r5, r0
	mov r2, #0
	mov r9, r2
	b _0812AAC2
_0812AAA8:
	.4byte gUnknown_030003D4
_0812AAAC:
	lsl r0, r7, #8
	sub r0, r0, r4
	sub r0, r0, #1
	add r0, r0, r6
	add r1, r6, #0
	bl Div
	lsl r0, r0, #1
	add r5, r5, r0
	mov r0, #1
	mov r9, r0
_0812AAC2:
	str r4, [sp]
	str r6, [sp, #4]
	ldr r1, [sp, #24]
	str r1, [sp, #8]
	mov r2, r10
	str r2, [sp, #12]
	ldr r0, _0812AB10  @ =gUnknown_030003D4
	ldr r4, [r0]
	ldr r0, [sp, #32]
	ldr r1, [sp, #20]
	mov r2, r8
	add r3, r5, #0
	bl _call_via_r4
	add r4, r0, #0
	mov r1, r9
	cmp r1, #0
	beq _0812AAEA
	ldr r2, [sp, #36]
	sub r4, r4, r2
_0812AAEA:
	ldr r1, [sp, #20]
	sub r0, r5, r1
	asr r0, r0, #1
	ldr r2, [sp, #28]
	sub r2, r2, r0
	str r2, [sp, #28]
	cmp r2, #0
	bne _0812AA86
_0812AAFA:
	ldr r0, [sp, #16]
	str r4, [r0, #96]
	mov r0, #0
_0812AB00:
	add sp, sp, #40
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
_0812AB10:
	.4byte gUnknown_030003D4
	THUMB_FUNC_END sub_0812A964

