	THUMB_FUNC_START sub_0806E7C4
sub_0806E7C4: @ 0x0806E7C4
	push {r4,lr}
	ldr r0, _0806E820  @ =gRam
	ldr r2, _0806E824  @ =0x00000B0C
	add r1, r0, r2
	ldrh r1, [r1]
	add r3, r0, #0
	cmp r1, #0
	bne _0806E818
	ldr r4, _0806E828  @ =0x00001727
	add r0, r3, r4
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0806E7FE
	ldr r0, _0806E82C  @ =0x00000B1E
	add r1, r3, r0
	mov r0, #1
	strh r0, [r1]
	mov r1, #175
	lsl r1, r1, #4
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #2
	beq _0806E7FE
	sub r2, r2, #252
	add r1, r3, r2
	mov r0, #1
	strb r0, [r1]
_0806E7FE:
	ldr r4, _0806E830  @ =0x000009E8
	add r0, r3, r4
	mov r2, #0
	mov r1, #0
	strh r1, [r0]
	add r4, r4, #214
	add r0, r3, r4
	strh r1, [r0]
	ldr r1, _0806E834  @ =0x000009AD
	add r0, r3, r1
	strb r2, [r0]
	bl sub_0806FE5C
_0806E818:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806E820:
	.4byte gRam
_0806E824:
	.4byte 0x00000B0C
_0806E828:
	.4byte 0x00001727
_0806E82C:
	.4byte 0x00000B1E
_0806E830:
	.4byte 0x000009E8
_0806E834:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806E7C4

