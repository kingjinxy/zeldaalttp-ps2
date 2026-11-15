	THUMB_FUNC_START sub_0807DDD0
sub_0807DDD0: @ 0x0807DDD0
	push {r4-r7,lr}
	ldr r3, _0807DE40  @ =gRam
	ldr r1, _0807DE44  @ =0x00000AC2
	add r0, r3, r1
	mov r4, #0
	strh r4, [r0]
	sub r1, r1, #2
	add r0, r3, r1
	strh r4, [r0]
	mov r7, #0
	mov r5, #0
	ldr r0, _0807DE48  @ =0x000009E6
	add r6, r3, r0
	ldrb r0, [r6]
	sub r0, r0, #28
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bls _0807DE0A
	mov r5, #2
	mov r7, #1
	sub r1, r1, #217
	add r0, r3, r1
	ldrb r0, [r0]
	sub r0, r0, #28
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bhi _0807DE5C
_0807DE0A:
	ldr r0, _0807DE4C  @ =0x00000AA8
	add r2, r3, r0
	ldr r1, _0807DE50  @ =gUnknown_081676B2
	add r0, r5, #6
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _0807DE5C
	ldr r1, _0807DE54  @ =0x00000B14
	add r0, r3, r1
	strh r4, [r0]
	add r1, r7, r6
	mov r0, #0
	strb r0, [r1]
	ldr r1, _0807DE58  @ =0x00000A1E
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #151
	beq _0807DE3A
	add r1, r1, #156
	add r0, r3, r1
	strh r4, [r0]
_0807DE3A:
	mov r0, #0
	b _0807DE5E
	.byte 0x00
	.byte 0x00
_0807DE40:
	.4byte gRam
_0807DE44:
	.4byte 0x00000AC2
_0807DE48:
	.4byte 0x000009E6
_0807DE4C:
	.4byte 0x00000AA8
_0807DE50:
	.4byte gUnknown_081676B2
_0807DE54:
	.4byte 0x00000B14
_0807DE58:
	.4byte 0x00000A1E
_0807DE5C:
	mov r0, #1
_0807DE5E:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0807DDD0

