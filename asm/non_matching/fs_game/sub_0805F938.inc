	THUMB_FUNC_START sub_0805F938
sub_0805F938: @ 0x0805F938
	push {r4,r5,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #126
	ldrh r1, [r0]
	ldr r2, _0805F9C8  @ =0x0000FFFF
	orr r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #14
	ldr r1, _0805F9CC  @ =gUnknown_08137B90
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	mov r4, #3
	add r2, r3, #0
	and r2, r2, r4
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r1]
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	add r1, r7, #0
	add r1, r1, #14
	ldrh r2, [r2]
	ldrh r1, [r1]
	add r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	add r0, r7, #0
	add r0, r0, #10
	ldr r1, _0805F9D0  @ =gUnknown_081414FC
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r2, r3, #2
	mov r3, #3
	and r2, r2, r3
	ldr r3, [r7]
	ldrb r4, [r3, #10]
	mov r5, #12
	add r3, r4, #0
	and r3, r3, r5
	add r5, r3, #0
	lsl r4, r5, #24
	lsr r3, r4, #24
	add r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r1]
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #0
	strh r1, [r0]
_0805F9BC:
	add r0, r7, #0
	add r0, r0, #12
	ldrh r1, [r0]
	cmp r1, #7
	bls _0805F9D4
	b _0805FA40
_0805F9C8:
	.4byte 0x0000FFFF
_0805F9CC:
	.4byte gUnknown_08137B90
_0805F9D0:
	.4byte gUnknown_081414FC
_0805F9D4:
	add r1, r7, #0
	add r1, r1, #8
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	bl 0x0800932C
	add r1, r0, #0
	add r0, r7, #0
	add r0, r0, #10
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldrh r0, [r0]
	cmp r1, r0
	bne _0805FA14
	ldr r0, [r7]
	add r1, r7, #0
	add r1, r1, #8
	add r2, r0, #0
	add r0, r0, #126
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	b _0805FA40
_0805FA14:
	add r1, r7, #0
	add r1, r1, #12
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrh r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	add r2, r7, #0
	add r2, r2, #14
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	b _0805F9BC
_0805FA40:
	add sp, sp, #16
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805F938

